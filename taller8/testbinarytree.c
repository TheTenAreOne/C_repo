#include <stdio.h>
#include "binarytree.h"

int main( ){
   Tree a = createTree( );
   
   Tree x = createTree( );
   Tree y = createTree( );
   Tree z = createTree( );
   
   
   Tree b = createTree( );
   Tree c = createTree( );
   Tree d = createTree( );
   Tree e = createTree( );
   Tree f = createTree( );
   Tree g = createTree( );
   
   b.makeTree( &b, 'J', &a, &a ); // J
   c.makeTree( &c, 'A', &a, &a ); // A
   
   d.makeTree( &d, 'C', &b, &c ); // C < JA
   
   
   
   b.makeTree( &b, 'R', &a, &a ); // R
   c.makeTree( &c, 'A', &a, &a ); // A
   
   e.makeTree( &e, 'A', &b, &c ); //A < RA
   
   
   
   f.makeTree( &f, 'I', &d, &e );  // I < CA < JA & RA
   
   b.makeTree( &b, 'M', &a, &a );  // M
   c.makeTree( &c, 'I', &a, &a );  // I
   
   d.makeTree( &d, 'I', &b, &c ); // I < MI
   
   b.makeTree( &b, 'L', &a, &a ); // L
   c.makeTree( &c, 'L', &a, &a ); // L
   
   e.makeTree( &e, 'C', &b, &c ); // C < LL
   
   
     
   g.makeTree( &g, 'E', &d, &e ); // E < IC < MI & LL 
   
   d.makeTree( &d, 'A', &f, &g ); // A < IE (RIGHT A)
   
   e.makeTree( &e, 'O', &a, &a );
   
   b.makeTree( &b, 'E', &e, &a ); // E
   c.makeTree( &c, 'D', &a, &a );  // D
   
   e.makeTree( &e, 'L', &b, &c ); // L < ED
   
   b.makeTree( &b, 'O', &a, &a ); // O
   c.makeTree( &c, '_', &a, &a );  // _
   
   f.makeTree( &f, '_', &b, &c ); // _ < O_
   
   g.makeTree( &g, 'N', &e, &f ); // N < L_ (LEFT N);
   
   b.makeTree( &b, 'D', &d, &g ); // D --> ROOT
   
   
   
   
   y.makeTree( &y, 1, &a, &a );
   z.makeTree( &z, 2, &a, &a );
   x.makeTree( &x, 3, &y, &z );
   y.makeTree( &y, 4, &x, &a );
   printf( "Preorder sequence is " );
   y.preorder( y.root );
   printf( "\n" );
   printf( "Inorder sequence is " );
   y.inorder( y.root );
   printf( "\n" );
   printf( "Postorder sequence is " );
   y.postorder( y.root );
   printf( "\n" );
   printf( "Level sequence is " );
   y.levelorder( y.root );
   printf( "\n" );
   printf( "empty = %d\n", y.empty( y.root ) );
   printf( "size = %d\n", y.size( y.root ) );
   printf( "height = %d\n", y.height( y.root ) );
   y.mirror( y.root );
   printf( "After mirror: " );
   y.postorder( y.root );
   printf( "\n" );
   printf( "sum = %d\n", y.suma( y.root ) );
	if( y.checkFull( y.root ) ){
		printf("Is full\n");
	}else{
		printf("Is not full\n");
	}
	if( y.checkComplete( y.root ) ){
		printf("Is complete\n");
	}else{
		printf("Is not complete\n");
	}
	
	//IMPRIMIR NOMBRE
	
   printf( "Preorder sequence is " );
   b.preorderName( b.root );
   printf( "\n" );
   printf( "Inorder sequence is " );
   b.inorderName( b.root );
   printf( "\n" );
   printf( "Postorder sequence is " );
   b.postorderName( b.root );
   printf( "\n" );
   printf( "Level sequence is " );
   b.levelorderName( b.root );
   printf( "\n" );
   return 0;
}
