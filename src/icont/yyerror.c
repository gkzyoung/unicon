#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yyerror_isinitialized, yymaxstate = 358;
struct errtable {
   int i;
   union {
      char *msg;
      struct errtable *p;
      } u;
   } errtab[359];
void yyerror_init()
{
   errtab[0].i = 1;
   errtab[0].u.msg = "invalid declaration";
   errtab[47].i = 1;
   errtab[47].u.msg = "invalid create expression";
   errtab[178].i = 1;
   errtab[178].u.msg = "invalid argument in augmented assignment";
   errtab[183].i = 1;
   errtab[183].u.msg = "invalid argument in augmented assignment";
   errtab[225].i = 1;
   errtab[225].u.msg = "invalid expression list";
   errtab[356].i = 1;
   errtab[356].u.msg = "invalid default clause";
   errtab[10].i = 1;
   errtab[10].u.msg = "identifier (record name) expected";
   errtab[52].i = 1;
   errtab[52].u.msg = "invalid argument for unary operator";
   errtab[57].i = 1;
   errtab[57].u.msg = "invalid while control expression";
   errtab[99].i = 2;
   errtab[99].u.p = (struct errtable *)calloc(1,3 * sizeof(struct errtable));
   errtab[99].u.p[0].u.msg = "missing semicolon or operator";
   errtab[99].u.p[1].i = 277;
   errtab[99].u.p[1].u.msg = "missing semicolon or \"end\"";
   errtab[99].u.p[2].i = 270;
   errtab[99].u.p[2].u.msg = "missing semicolon or operator";
   errtab[188].i = 1;
   errtab[188].u.msg = "invalid argument in augmented assignment";
   errtab[324].i = 1;
   errtab[324].u.msg = "missing right bracket";
   errtab[62].i = 1;
   errtab[62].u.msg = "invalid argument for unary operator";
   errtab[109].i = 1;
   errtab[109].u.msg = "invalid procedure body";
   errtab[193].i = 1;
   errtab[193].u.msg = "invalid argument in augmented assignment";
   errtab[198].i = 1;
   errtab[198].u.msg = "invalid argument";
   errtab[240].i = 1;
   errtab[240].u.msg = "invalid then clause";
   errtab[67].i = 1;
   errtab[67].u.msg = "invalid argument for unary operator";
   errtab[72].i = 1;
   errtab[72].u.msg = "invalid argument for unary operator";
   errtab[203].i = 1;
   errtab[203].u.msg = "invalid argument";
   errtab[77].i = 1;
   errtab[77].u.msg = "invalid argument for unary operator";
   errtab[161].i = 1;
   errtab[161].u.msg = "invalid argument";
   errtab[166].i = 1;
   errtab[166].u.msg = "invalid argument in augmented assignment";
   errtab[208].i = 1;
   errtab[208].u.msg = "invalid argument";
   errtab[35].i = 1;
   errtab[35].u.msg = "missing operation name";
   errtab[82].i = 1;
   errtab[82].u.msg = "invalid expression list";
   errtab[171].i = 1;
   errtab[171].u.msg = "invalid argument in augmented assignment";
   errtab[213].i = 1;
   errtab[213].u.msg = "invalid argument";
   errtab[218].i = 1;
   errtab[218].u.msg = "invalid argument";
   errtab[349].i = 1;
   errtab[349].u.msg = "missing colon or ampersand";
   errtab[45].i = 1;
   errtab[45].u.msg = "invalid break expression";
   errtab[87].i = 1;
   errtab[87].u.msg = "too many closing curly braces";
   errtab[176].i = 1;
   errtab[176].u.msg = "invalid argument in reversible swap";
   errtab[181].i = 1;
   errtab[181].u.msg = "invalid argument in augmented assignment";
   errtab[223].i = 1;
   errtab[223].u.msg = "invalid argument";
   errtab[354].i = 1;
   errtab[354].u.msg = "missing right brace";
   errtab[8].i = 1;
   errtab[8].u.msg = "link list expected";
   errtab[50].i = 1;
   errtab[50].u.msg = "invalid if control expression";
   errtab[55].i = 1;
   errtab[55].u.msg = "invalid suspend expression";
   errtab[186].i = 1;
   errtab[186].u.msg = "invalid argument in augmented assignment";
   errtab[228].i = 1;
   errtab[228].u.msg = "invalid initial expression";
   errtab[60].i = 1;
   errtab[60].u.msg = "invalid argument for unary operator";
   errtab[191].i = 1;
   errtab[191].u.msg = "invalid argument in augmented assignment";
   errtab[238].i = 1;
   errtab[238].u.msg = "missing left brace";
   errtab[327].i = 1;
   errtab[327].u.msg = "invalid case clause";
   errtab[65].i = 1;
   errtab[65].u.msg = "invalid argument for unary operator";
   errtab[196].i = 1;
   errtab[196].u.msg = "invalid argument";
   errtab[201].i = 1;
   errtab[201].u.msg = "invalid argument";
   errtab[243].i = 1;
   errtab[243].u.msg = "invalid do clause";
   errtab[70].i = 1;
   errtab[70].u.msg = "invalid argument for unary operator";
   errtab[75].i = 1;
   errtab[75].u.msg = "invalid argument for unary operator";
   errtab[117].i = 1;
   errtab[117].u.msg = "missing of";
   errtab[159].i = 1;
   errtab[159].u.msg = "invalid argument";
   errtab[164].i = 1;
   errtab[164].u.msg = "invalid argument in augmented assignment";
   errtab[206].i = 1;
   errtab[206].u.msg = "invalid argument in alternation";
   errtab[342].i = 1;
   errtab[342].u.msg = "invalid pdco list";
   errtab[33].i = 2;
   errtab[33].u.p = (struct errtable *)calloc(1,3 * sizeof(struct errtable));
   errtab[33].u.p[0].u.msg = "invalid declaration";
   errtab[33].u.p[1].i = 257;
   errtab[33].u.p[1].u.msg = "comma expected";
   errtab[33].u.p[2].i = 270;
   errtab[33].u.p[2].u.msg = "invalid declaration";
   errtab[38].i = 1;
   errtab[38].u.msg = "missing field list in record declaration";
   errtab[80].i = 1;
   errtab[80].u.msg = "invalid argument for unary operator";
   errtab[169].i = 1;
   errtab[169].u.msg = "invalid argument in augmented assignment";
   errtab[211].i = 1;
   errtab[211].u.msg = "invalid argument";
   errtab[216].i = 1;
   errtab[216].u.msg = "invalid argument";
   errtab[174].i = 1;
   errtab[174].u.msg = "invalid argument in augmented assignment";
   errtab[221].i = 1;
   errtab[221].u.msg = "invalid argument";
   errtab[352].i = 1;
   errtab[352].u.msg = "invalid else clause";
   errtab[48].i = 1;
   errtab[48].u.msg = "invalid every control expression";
   errtab[179].i = 1;
   errtab[179].u.msg = "invalid argument in augmented assignment";
   errtab[184].i = 1;
   errtab[184].u.msg = "invalid argument in augmented assignment";
   errtab[226].i = 1;
   errtab[226].u.msg = "invalid subscript";
   errtab[315].i = 1;
   errtab[315].u.msg = "missing right parenthesis";
   errtab[357].i = 1;
   errtab[357].u.msg = "invalid case clause";
   errtab[53].i = 1;
   errtab[53].u.msg = "invalid repeat expression";
   errtab[58].i = 1;
   errtab[58].u.msg = "invalid argument for unary operator";
   errtab[189].i = 1;
   errtab[189].u.msg = "invalid argument in augmented assignment";
   errtab[236].i = 1;
   errtab[236].u.msg = "missing comma or right parenthesis";
   errtab[320].i = 1;
   errtab[320].u.msg = "missing right brace";
   errtab[63].i = 1;
   errtab[63].u.msg = "invalid argument for unary operator";
   errtab[110].i = 1;
   errtab[110].u.msg = "missing identifier";
   errtab[194].i = 1;
   errtab[194].u.msg = "invalid argument in augmented assignment";
   errtab[199].i = 1;
   errtab[199].u.msg = "invalid argument";
   errtab[241].i = 1;
   errtab[241].u.msg = "invalid do clause";
   errtab[68].i = 1;
   errtab[68].u.msg = "invalid argument for unary operator";
   errtab[73].i = 1;
   errtab[73].u.msg = "invalid argument for unary operator";
   errtab[115].i = 1;
   errtab[115].u.msg = "missing identifier or right parenthesis";
   errtab[162].i = 1;
   errtab[162].u.msg = "invalid to clause";
   errtab[204].i = 1;
   errtab[204].u.msg = "invalid argument";
   errtab[335].i = 1;
   errtab[335].u.msg = "invalid by clause";
   errtab[36].i = 1;
   errtab[36].u.msg = "missing link file name";
   errtab[78].i = 1;
   errtab[78].u.msg = "invalid argument for unary operator";
   errtab[120].i = 1;
   errtab[120].u.msg = "missing then";
   errtab[167].i = 1;
   errtab[167].u.msg = "invalid argument in augmented assignment";
   errtab[209].i = 1;
   errtab[209].u.msg = "invalid argument";
   errtab[340].i = 1;
   errtab[340].u.msg = "invalid section";
   errtab[83].i = 1;
   errtab[83].u.msg = "invalid expression list";
   errtab[172].i = 1;
   errtab[172].u.msg = "invalid argument in assignment";
   errtab[214].i = 1;
   errtab[214].u.msg = "invalid argument";
   errtab[219].i = 1;
   errtab[219].u.msg = "invalid argument";
   errtab[46].i = 1;
   errtab[46].u.msg = "invalid case control expression";
   errtab[177].i = 1;
   errtab[177].u.msg = "invalid argument in augmented assignment";
   errtab[182].i = 1;
   errtab[182].u.msg = "invalid argument in augmented assignment";
   errtab[224].i = 1;
   errtab[224].u.msg = "invalid field name";
   errtab[9].i = 1;
   errtab[9].u.msg = "identifier (procedure name) expected";
   errtab[56].i = 1;
   errtab[56].u.msg = "invalid until control expression";
   errtab[187].i = 1;
   errtab[187].u.msg = "invalid argument in augmented assignment";
   errtab[234].i = 1;
   errtab[234].u.msg = "invalid parameter list";
   errtab[19].i = 1;
   errtab[19].u.msg = "invalid global declaration";
   errtab[61].i = 1;
   errtab[61].u.msg = "invalid argument for unary operator";
   errtab[192].i = 1;
   errtab[192].u.msg = "invalid argument in augmented assignment";
   errtab[239].i = 1;
   errtab[239].u.msg = "invalid do clause";
   errtab[323].i = 1;
   errtab[323].u.msg = "invalid declaration or missing semicolon";
   errtab[66].i = 1;
   errtab[66].u.msg = "invalid argument for unary operator";
   errtab[197].i = 1;
   errtab[197].u.msg = "invalid argument";
   errtab[202].i = 1;
   errtab[202].u.msg = "invalid argument";
   errtab[71].i = 1;
   errtab[71].u.msg = "invalid argument for unary operator";
   errtab[76].i = 1;
   errtab[76].u.msg = "invalid argument for unary operator";
   errtab[160].i = 2;
   errtab[160].u.p = (struct errtable *)calloc(1,3 * sizeof(struct errtable));
   errtab[160].u.p[0].u.msg = "invalid expression";
   errtab[160].u.p[1].i = 282;
   errtab[160].u.p[1].u.msg = "invalid expression";
   errtab[160].u.p[2].i = 288;
   errtab[160].u.p[2].u.msg = "invalid expression";
   errtab[165].i = 1;
   errtab[165].u.msg = "invalid argument in augmented assignment";
   errtab[207].i = 1;
   errtab[207].u.msg = "invalid argument";
   errtab[34].i = 1;
   errtab[34].u.msg = "missing number of arguments";
   errtab[81].i = 1;
   errtab[81].u.msg = "invalid argument for unary operator";
   errtab[170].i = 1;
   errtab[170].u.msg = "invalid argument in augmented assignment";
   errtab[212].i = 1;
   errtab[212].u.msg = "invalid argument";
   errtab[217].i = 1;
   errtab[217].u.msg = "invalid argument";
   errtab[348].i = 1;
   errtab[348].u.msg = "missing colon";
   errtab[175].i = 1;
   errtab[175].u.msg = "invalid argument in reversible assignment";
   errtab[180].i = 1;
   errtab[180].u.msg = "invalid argument in augmented assignment";
   errtab[222].i = 1;
   errtab[222].u.msg = "invalid argument";
   errtab[7].i = 1;
   errtab[7].u.msg = "invocable list expected";
   errtab[54].i = 1;
   errtab[54].u.msg = "invalid return expression";
   errtab[185].i = 1;
   errtab[185].u.msg = "invalid argument in augmented assignment";
   errtab[227].i = 1;
   errtab[227].u.msg = "invalid pdco list";
   errtab[316].i = 1;
   errtab[316].u.msg = "missing right bracket";
   errtab[358].i = 1;
   errtab[358].u.msg = "invalid case clause";
   errtab[59].i = 1;
   errtab[59].u.msg = "invalid keyword construction";
   errtab[190].i = 1;
   errtab[190].u.msg = "invalid argument in augmented assignment";
   errtab[232].i = 1;
   errtab[232].u.msg = "invalid local declaration";
   errtab[17].i = 1;
   errtab[17].u.msg = "missing semi-colon";
   errtab[64].i = 1;
   errtab[64].u.msg = "invalid argument for unary operator";
   errtab[195].i = 1;
   errtab[195].u.msg = "invalid argument";
   errtab[200].i = 1;
   errtab[200].u.msg = "invalid argument";
   errtab[242].i = 1;
   errtab[242].u.msg = "invalid do clause";
   errtab[69].i = 1;
   errtab[69].u.msg = "invalid argument for unary operator";
   errtab[74].i = 1;
   errtab[74].u.msg = "invalid argument for unary operator";
   errtab[163].i = 1;
   errtab[163].u.msg = "invalid argument in augmented assignment";
   errtab[205].i = 1;
   errtab[205].u.msg = "invalid argument";
   errtab[37].i = 1;
   errtab[37].u.msg = "missing parameter list in procedure declaration";
   errtab[79].i = 1;
   errtab[79].u.msg = "invalid argument for unary operator";
   errtab[168].i = 1;
   errtab[168].u.msg = "invalid argument in augmented assignment";
   errtab[210].i = 1;
   errtab[210].u.msg = "invalid argument";
   errtab[84].i = 1;
   errtab[84].u.msg = "invalid compound expression";
   errtab[173].i = 1;
   errtab[173].u.msg = "invalid argument in swap";
   errtab[215].i = 1;
   errtab[215].u.msg = "invalid argument";
   errtab[220].i = 1;
   errtab[220].u.msg = "invalid argument";
}

int __merr_errors;
extern int yychar;
extern int yylineno;

extern char *yyfilename;

extern char *yytext;

extern short *yyssp;

int yyerror(char *s)
{
   int state = *yyssp;
   int i;
   char sbuf[128];
   if (! yyerror_isinitialized++) yyerror_init();
   if (strstr(s, "stack")) return 0;
   if (__merr_errors++ > 10) {
      fprintf(stderr, "too many errors, aborting");
      exit(__merr_errors); }
   if (yyfilename) fprintf(stderr, "%s:", yyfilename);
   if ((!strcmp(s, "syntax error") || !strcmp(s,"parse error"))&&
         (state>=0 && state<=yymaxstate)) {
       if (errtab[state].i==1)
         s = errtab[state].u.msg;
       else {
          for(i=1;i<=errtab[state].i;i++)
             if(yychar == errtab[state].u.p[i].i) {
                s=errtab[state].u.p[i].u.msg;break;}
          if(i>errtab[state].i && errtab[state].i > 0)
             s=errtab[state].u.p[0].u.msg;
          }
       }
   if (!strcmp(s, "syntax error") || !strcmp(s,"parse error")){
      sprintf(sbuf,"%s (%d;%d)", s, state, yychar);
      s=sbuf;
      }
   fprintf(stderr, "%d: # \"%s\": %s\n", yylineno, yytext, s);
   return 0;
}
