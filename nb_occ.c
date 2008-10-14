

/* nb_occ(t,i,j,e) gives the number of occurrences of e in t[i..j]
 * (in a given memory state labelled L)
 */

/* Notice that without label {L}, this declaration would be rejected. 
 * With {L}, each occurrence of t[e] is indeed a shortcut for \at(t[e],L).
 */
/*@ logic integer nb_occ{L}(double t[], integer i, integer j, 
  @                         double e) {
  @  axiom nb_occ_empty:
  @   \forall double t[], integer i, integer j, double e;
  @     i > j ==> nb_occ(t,i,j,e) == 0;
  @  axiom nb_occ_true:
  @   \forall double t[], integer i, integer j, double e;
  @     i <= j && t[i] == e ==> 
  @       nb_occ(t,i,j,e) == nb_occ(t,i,j-1,e) + 1;
  @  axiom nb_occ_false:
  @   \forall double t[], integer i, integer j, double e;
  @     i <= j && t[i] != e ==> 
  @       nb_occ(t,i,j,e) == nb_occ(t,i,j-1,e);
  @ }
  @*/

