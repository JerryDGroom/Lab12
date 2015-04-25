//--------------------------------------------------------------------
//
//  Laboratory 12                                         test12.cpp
//
//  Test program for the operations in the Weighted Graph ADT
//
//--------------------------------------------------------------------

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

#include "WeightedGraph.h"
#include "config.h"

void print_help();

int main()
{
    // <-- construct a weighted graph called "testGraph" with an appropriate
    //max number of vertices
    //WeightedGraph testGraph(8);


    //WeightedGraph::Vertex testVertex;            // Vertex
    //string v1,
         //v2;   // Vertex labels
    char cmd;                     // Input command
    //int wt;                       // Edge weight

    print_help();

    do
    {

        //#if LAB12_TEST1
        //testGraph.showShortestPaths();                 // In-lab Exercise 1
        //#endif


        //testGraph.showStructure();                   // Output graph

        cout << endl << "Command (H for help): ";                 // Read command
        cin >> cmd;
        cmd = toupper( cmd );			     // Normalize to upper case
        //if ( cmd == '->' )
           //cin >> v1;
        //else if ( cmd == '#'  ||  cmd == '!' )
          // cin >> v1 >> v2;
        //else if ( cmd == '=' )
          // cin >> v1 >> v2 >> wt;



        switch ( cmd )
        {
          case 'H' :
               print_help();
               break;

          case '->' :                                 // insertVertex
               cout << "Run Program : " << endl;
               //testVertex.setLabel(v1);
               //testGraph.insertVertex(testVertex);
               Scheduler sche;
            sche.start();
               break;

          case 'Q' :                              // Quit test program
               break;

          default :                               // Invalid command
               cout << "Invalid command" << endl;
        }
    }
    while ( cmd != 'Q' );

    return 0;
}

void print_help()
{
#if !LAB12_TESTX
#endif
    cout << endl << "Commands:" << endl;
    cout << "  H       : Help (displays this message)" << endl;
    cout << "  ->      : Run the Program" << endl;
    cout << "  Q       : Quit the test program" << endl;
    cout << endl;

}
