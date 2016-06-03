#include <qapplication.h>
#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_grid.h>
#include <qwt_symbol.h>
#include <qwt_legend.h>

#include <QDebug>
#include <QFile>
#include <QTextStream>

int main( int argc, char **argv )
{
    QApplication a( argc, argv );

    QwtPlot plot;
    plot.setTitle( "Plotting the Amplitude Curve" );
    plot.setCanvasBackground( Qt::white );
    plot.setAxisScale( QwtPlot::yLeft, 0.0, 0.06 ); //changed this as it used to be between 0 and 10 - i know all of the values are below 0.08, so to make it cleaner i chose that value
                                                    //should probably have grabbed the largest value during reading the file and set it to slightly higher than that
    plot.insertLegend( new QwtLegend() );

    QwtPlotGrid *grid = new QwtPlotGrid();

    grid->enableXMin(true); //i chose to enable both min and max grid lines - makes the values slightly easier to understand i think
    grid->enableYMin(true);

    grid->attach( &plot );

    QwtPlotCurve *curve = new QwtPlotCurve();
    curve->setTitle( "Amplitudes" );
    curve->setPen( Qt::blue, 4 ),
    curve->setRenderHint( QwtPlotItem::RenderAntialiased, true );

    QwtSymbol *symbol = new QwtSymbol( QwtSymbol::Ellipse, //setting what i assume is the wee circle that defines a point
        QBrush( Qt::yellow ), QPen( Qt::red, 2 ), QSize( 3, 3 ) );
    curve->setSymbol( symbol );

     //this section has the most changes made by me
    QPolygonF points; //creating the points - need to read this in from the file

    QFile inputFile(":/outputc.dat"); //grab the path to the input file which was added to the resources as well

    if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text)) //open the fiule for reading
    {
        QTextStream in(&inputFile);

        int currentSample = 0; //set the sample numbers to 0 - x axis was stated to be the sample number in the questions sheet
        while (!in.atEnd()) //while we havent reached the end of the doc
        {
            QString line = in.readLine(); //grab only the current line from the file
            QStringList pieces = line.split("\t"); //split the line since it is a 2 column file - i had originally split it using " " a tab - but when read in a tab appears as "\t"
                                                   //so this was changed to split at the tab
            QString amplitude = pieces.value(0); //grab the amplitude from the first colum
            QString phase = pieces.value(1); //grab the phase incase we need it - second column
            qDebug() << "The amplitude is: " << amplitude << "      and the phase is: " << phase; //debug them just to see that they are coming through correctly
            points.push_back(QPointF(currentSample, amplitude.toDouble())); //push each result to the back of the vector
            currentSample ++; //iterate the current sample so that the next sample has a higher num,ber
        }
    }

    inputFile.close(); //close the file now
    curve->setSamples( points );

    curve->attach( &plot );

    plot.resize( 1000, 800 ); //resized the window since it doesnt really go up, and its a longer graph - so make the window longer than taller
    plot.show();

    return a.exec();
}
