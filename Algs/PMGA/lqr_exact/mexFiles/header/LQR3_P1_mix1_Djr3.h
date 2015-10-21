#ifndef LQR3_P1_mix_Djr3_H
#define LQR3_P1_mix_Djr3_H

double LQR3_P1_mix_Djr3(double* tv, int tdim, double* param, int pdim) {

double t1 = tv[0], t2 = tv[1];

double r1 = param[0];
double r2 = param[1];
double r3 = param[2];
double r4 = param[3];
double r5 = param[4];
double r6 = param[5];
double r7 = param[6];
double r8 = param[7];
double r9 = param[8];

double t4 = r4-3.338299811;
double t5 = t1*t4;
double t6 = r5*t2;
double t7 = t1*t1;
double t8 = t2*t2;
double t11 = r4*t7;
double t12 = r5*t8;
double t13 = r6*t1*t2;
double t9 = t5+t6-t11-t12-t13+1.151035476;
double t10 = exp(t9);
double t14 = t10+1.0;
double t15 = 1.0/t14;
double t16 = 1.0/(t14*t14);
double t17 = t15*1.8E1;
double t19 = t16*9.0;
double t18 = t17-t19+1.0;
double t20 = 1.0/t18;
double t21 = t15*t20*2.18E2;
double t22 = t16*(1.0/1.0E1);
double t23 = t22+9.0/1.0E1;
double t24 = t17-1.8E1;
double t25 = 1.0/(t18*t18);
double t26 = t23*t24*t25*1.09E3;
double t27 = t21+t26;
double t28 = r7+3.338299811;
double t29 = t1*t28;
double t30 = r8+3.338299811;
double t31 = t2*t30;
double t34 = r7*t7;
double t35 = r8*t8;
double t36 = r9*t1*t2;
double t32 = t29+t31-t34-t35-t36-2.187264336;
double t33 = exp(t32);
double t37 = t33+1.0;
double t38 = 1.0/t37;
double t39 = 1.0/(t37*t37);
double t40 = t38*1.8E1;
double t63 = t39*9.0;
double t41 = t40-t63+1.0;
double t42 = r2-3.338299811;
double t43 = t2*t42;
double t44 = r1*t1;
double t47 = r1*t7;
double t48 = r2*t8;
double t49 = r3*t1*t2;
double t45 = t43+t44-t47-t48-t49+1.151035476;
double t46 = exp(t45);
double t50 = t46+1.0;
double t51 = 1.0/t50;
double t52 = 1.0/(t50*t50);
double t53 = t51*1.8E1;
double t68 = t52*9.0;
double t54 = t53-t68+1.0;
double t55 = t15*t20*1.962E3;
double t56 = t16*(9.0/1.0E1);
double t57 = t56+1.0/1.0E1;
double t58 = t24*t25*t57*1.09E3;
double t59 = t55+t58;
double t60 = r4*t1*2.0;
double t61 = r6*t2;
double t62 = -r4+t60+t61+3.338299811;
double t64 = 1.0/t41;
double t65 = t40-1.8E1;
double t66 = 1.0/(t41*t41);
double t87 = r7*t1*2.0;
double t88 = r9*t2;
double t67 = r7-t87-t88+3.338299811;
double t69 = 1.0/t54;
double t70 = t51*t69*1.962E3;
double t71 = t52*(9.0/1.0E1);
double t72 = t71+1.0/1.0E1;
double t73 = t53-1.8E1;
double t74 = 1.0/(t54*t54);
double t75 = t72*t73*t74*1.09E3;
double t76 = t70+t75;
double t77 = r1*t1*2.0;
double t78 = r3*t2;
double t79 = -r1+t77+t78;
double t80 = t46*t52*t76*t79;
double t81 = t10*t16*t59*t62;
double t82 = t38*t64*1.962E3;
double t83 = t39*(9.0/1.0E1);
double t84 = t83+1.0/1.0E1;
double t85 = t65*t66*t84*1.09E3;
double t86 = t82+t85;
double t89 = t38*t64*2.18E2;
double t90 = t39*(1.0/1.0E1);
double t91 = t90+9.0/1.0E1;
double t92 = t65*t66*t91*1.09E3;
double t93 = t89+t92;
double t105 = t33*t39*t67*t93;
double t94 = t80+t81-t105;
double t95 = t10*t16*t27*t62;
double t97 = t33*t39*t67*t86;
double t96 = t80+t95-t97;
double t98 = t51*t69*2.18E2;
double t99 = t52*(1.0/1.0E1);
double t100 = t99+9.0/1.0E1;
double t101 = t73*t74*t100*1.09E3;
double t102 = t98+t101;
double t103 = t46*t52*t79*t102;
double t104 = t81-t97+t103;
double t106 = r2*t2*2.0;
double t107 = r3*t1;
double t108 = -r2+t106+t107+3.338299811;
double t115 = r8*t2*2.0;
double t116 = r9*t1;
double t109 = r8-t115-t116+3.338299811;
double t110 = r5*t2*2.0;
double t111 = r6*t1;
double t112 = -r5+t110+t111;
double t113 = t10*t16*t59*t112;
double t114 = t46*t52*t76*t108;
double t123 = t33*t39*t93*t109;
double t117 = t113+t114-t123;
double t118 = t46*t52*t102*t108;
double t120 = t33*t39*t86*t109;
double t119 = t113+t118-t120;
double t121 = t10*t16*t27*t112;
double t122 = t114-t120+t121;
double t124 = t102*t104;
double t125 = t76*t96;
double t126 = t76*t94;
double t127 = t124+t125+t126;
double t128 = t93*t94;
double t129 = t86*t96;
double t130 = t86*t104;
double t131 = t128+t129+t130;
double t132 = t27*t96;
double t133 = t59*t94;
double t134 = t27*t122;
double t135 = t59*t119;
double t136 = t59*t117;
double t137 = t134+t135+t136;
double t138 = t93*t117;
double t139 = t86*t119;
double t140 = t86*t122;
double t141 = t138+t139+t140;
double t142 = t102*t119;
double t143 = t76*t117;
double t144 = fabs(t102);
double t145 = fabs(t59);
double t146 = fabs(t86);
double t147 = fabs(t76);
double t148 = t145*t145;
double t149 = fabs(t93);
double t150 = fabs(t27);
double t151 = t147*t147;
double t152 = t146*t146;
double t153 = t144*t144;
double t154 = t148+t152+t153;
double t155 = 1.0/sqrt(t154);
double t156 = t102*t155;
double t157 = t150*t150;
double t158 = t151+t152+t157;
double t159 = 1.0/sqrt(t158);
double t160 = t149*t149;
double t161 = t148+t151+t160;
double t162 = 1.0/sqrt(t161);
double t172 = t76*t159;
double t163 = t156-t172;
double t164 = t86*t155;
double t175 = t76*t162;
double t165 = t156-t175;
double t166 = t27*t159;
double t167 = t59*t155;
double t171 = t93*t162;
double t168 = t164-t171;
double t174 = t86*t159;
double t169 = t164-t174;
double t179 = t59*t162;
double t170 = t167-t179;
double t173 = t163*t168;
double t220 = t165*t169;
double t221 = -t173+t220;
double t176 = fabs(t221);
double t177 = t166-t167;
double t178 = t168*t177;
double t180 = t169*t170;
double t184 = -t178-t180;
double t181 = fabs(t184);
double t182 = t163*t170;
double t218 = t165*t177;
double t219 = t182+t218;
double t183 = fabs(t219);
double t185 = t1*t2*t46*t52*1.8E1;
double t186 = 1.0/(t50*t50*t50);
double t188 = t1*t2*t46*t186*1.8E1;
double t187 = t185-t188;
double t189 = 1.0/(t54*t54*t54);
double t190 = t1*t2*t46*t52*t69*2.18E2;
double t191 = t1*t2*t46*t52*t74*t100*1.962E4;
double t192 = t1*t2*t46*t73*t74*t186*2.18E2;
double t194 = t51*t74*t187*2.18E2;
double t195 = t73*t100*t187*t189*2.18E3;
double t193 = t190+t191+t192-t194-t195;
double t196 = t1*t2*t46*t52*t69*1.962E3;
double t197 = t1*t2*t46*t52*t72*t74*1.962E4;
double t198 = t1*t2*t46*t73*t74*t186*1.962E3;
double t201 = t51*t74*t187*1.962E3;
double t202 = t72*t73*t187*t189*2.18E3;
double t199 = t196+t197+t198-t201-t202;
double t200 = t155*t193;
double t203 = (t102/fabs(t102));
double t204 = 1.0/pow(t154,3.0/2.0);
double t205 = (t76/fabs(t76));
double t206 = 1.0/pow(t158,3.0/2.0);
double t207 = 1.0/pow(t161,3.0/2.0);
double t208 = t59*t144*t193*t203*t204;
double t209 = t27*t147*t199*t205*t206;
double t226 = t59*t147*t199*t205*t207;
double t210 = t208-t226;
double t211 = t86*t144*t193*t203*t204;
double t212 = t76*t147*t199*t205*t206;
double t214 = t102*t144*t193*t203*t204;
double t223 = t159*t199;
double t213 = t200+t212-t214-t223;
double t215 = t76*t147*t199*t205*t207;
double t227 = t93*t147*t199*t205*t207;
double t216 = t211-t227;
double t230 = t86*t147*t199*t205*t206;
double t217 = t211-t230;
double t233 = t162*t199;
double t222 = t200-t214+t215-t233;
double t224 = t170*t213;
double t225 = t208-t209;
double t228 = t177*t216;
double t229 = t169*t210;
double t231 = t170*t217;
double t232 = t228+t229+t231-t168*t225;
double t234 = t169*t222;
double t235 = t163*t216;
double t236 = t234+t235-t168*t213-t165*t217;
double t237 = t176*t176;
double t238 = t181*t181;
double t239 = t183*t183;
double t240 = t237+t238+t239;
double t242 = t64*t84*1.09E3;
double t245 = t20*t57*1.09E3;
double t265 = 1.0/AUp1;
double t266 = t69*t100*1.09E3;
double t267 = t242+t245+t266+1.9E1;
double t268 = t265*t267;
double t269 = t268-1.0;
double t241 = fabs(t269);
double t244 = t69*t72*1.09E3;
double t270 = 1.0/AUp2;
double t271 = t20*t23*1.09E3;
double t272 = t242+t244+t271+1.9E1;
double t273 = t270*t272;
double t274 = t273-1.0;
double t243 = fabs(t274);
double t275 = 1.0/AUp3;
double t276 = t64*t91*1.09E3;
double t277 = t244+t245+t276+1.9E1;
double t278 = t275*t277;
double t279 = t278-1.0;
double t246 = fabs(t279);
double t247 = t86*t155*t219;
double t248 = t59*t155*t221;
double t249 = t102*t155*t184;
double t250 = t247+t248+t249;
double t251 = fabs(t250);
double t252 = 1.0/sqrt(t240);
double t253 = t59*t104;
double t254 = t132+t133+t253;
double t255 = t46*t52*t79*t127;
double t256 = t76*t122;
double t257 = t142+t143+t256;
double t258 = t10*t16*t112*t137;
double t259 = t46*t52*t108*t127;
double t260 = t10*t16*t112*t254;
double t289 = t33*t39*t109*t131;
double t261 = t259+t260-t289;
double t262 = t10*t16*t62*t137;
double t263 = t46*t52*t79*t257;
double t290 = t33*t39*t67*t141;
double t264 = t262+t263-t290;
double t280 = t72*t74*t187*1.09E3;
double t281 = t280-t1*t2*t46*t69*t186*1.962E3;
double t282 = beta_Var*t251*t252;
double t283 = t282-1.0;
double t284 = t10*t16*t62*t254;
double t312 = t33*t39*t67*t131;
double t285 = t255+t284-t312;
double t286 = t46*t52*t108*t257;
double t323 = t33*t39*t109*t141;
double t287 = t258+t286-t323;
double t288 = t285*t287;
double t291 = t288-t261*t264;
double t292 = t241*t241;
double t293 = t243*t243;
double t294 = t246*t246;
double t295 = t292+t293+t294;
double t296 = t2*t42*2.0;
double t301 = r1*t7*2.0;
double t302 = r2*t8*2.0;
double t303 = r3*t1*t2*2.0;
double t297 = t77+t296-t301-t302-t303+2.302070952;
double t298 = exp(t297);
double t299 = t46*t52*t79*t199;
double t300 = t2*t46*t52*t76;
double t304 = t1*t2*t76*t79*t186*t298*2.0;
double t310 = t1*t2*t46*t52*t76*t79;
double t305 = t299+t300+t304-t310;
double t306 = t46*t52*t79*t193;
double t307 = t2*t46*t52*t102;
double t308 = t1*t2*t79*t102*t186*t298*2.0;
double t311 = t1*t2*t46*t52*t79*t102;
double t309 = t306+t307+t308-t311;
double t313 = t1*t46*t52*t76;
double t314 = t46*t52*t108*t199;
double t315 = t1*t2*t76*t108*t186*t298*2.0;
double t321 = t1*t2*t46*t52*t76*t108;
double t316 = t313+t314+t315-t321;
double t317 = t1*t46*t52*t102;
double t318 = t46*t52*t108*t193;
double t319 = t1*t2*t102*t108*t186*t298*2.0;
double t322 = t1*t2*t46*t52*t102*t108;
double t320 = t317+t318+t319-t322;
double t324 = t59*t309;
double t325 = t27*t305;
double t326 = t59*t305;
double t327 = t324+t325+t326;
double t328 = t86*t309;
double t329 = t93*t305;
double t330 = t86*t305;
double t331 = t328+t329+t330;
double t332 = t104*t193;
double t333 = t96*t199;
double t334 = t94*t199;
double t335 = t102*t309;
double t336 = t76*t305*2.0;
double t337 = t332+t333+t334+t335+t336;
double t338 = t119*t193;
double t339 = t117*t199;
double t340 = t122*t199;
double t341 = t102*t320;
double t342 = t76*t316*2.0;
double t343 = t338+t339+t340+t341+t342;
double t344 = t59*t320;
double t345 = t27*t316;
double t346 = t59*t316;
double t347 = t344+t345+t346;
double t348 = t86*t320;
double t349 = t93*t316;
double t350 = t86*t316;
double t351 = t348+t349+t350;
double t0 = t283*sqrt(t291)*(t243*t270*t281*((t274/fabs(t274)))*2.0+t246*t275*t281*((t279/fabs(t279)))*2.0+t241*t265*((t269/fabs(t269)))*(t74*t100*t187*1.09E3-t1*t2*t46*t69*t186*2.18E2)*2.0)+t295*(beta_Var*1.0/pow(t240,3.0/2.0)*t251*(t181*t232*((t184/fabs(t184)))*2.0+t176*t236*((t221/fabs(t221)))*2.0+t183*((t219/fabs(t219)))*(t224-t163*t210+t165*t225+t177*t222)*2.0)*(1.0/2.0)-beta_Var*t252*((-(-t86*t155*(t182+t165*(t166-t59*t155))+t59*t155*(t173-t165*t169)+t102*t155*(t178+t180))/fabs(-t86*t155*(t182+t165*(t166-t59*t155))+t59*t155*(t173-t165*t169)+t102*t155*(t178+t180))))*(t86*t155*(t224+t177*(t200+t215-t162*t199-t102*t144*t193*t203*t204)-t163*t210-t165*(t209-t59*t144*t193*t203*t204))+t59*t155*t236+t102*t155*t232+t155*t184*t193-t59*t144*t193*t203*t204*t221-t102*t144*t184*t193*t203*t204-t86*t144*t193*t203*t204*t219))*sqrt(-t261*t264+(t255-t33*t39*t67*t131+t10*t16*t62*(t132+t133+t59*(t81+t103-t33*t39*t67*t86)))*(t258-t33*t39*t109*t141+t46*t52*t108*(t142+t143+t76*(t114+t121-t33*t39*t86*t109))))-t283*1.0/sqrt(t291)*t295*(t287*(t2*t46*t52*t127+t10*t16*t62*t327-t33*t39*t67*t331+t46*t52*t79*t337-t1*t2*t46*t52*t79*t127+t1*t2*t79*t127*t186*t298*2.0)-t264*(t1*t46*t52*t127+t10*t16*t112*t327-t33*t39*t109*t331+t46*t52*t108*t337-t1*t2*t46*t52*t108*t127+t1*t2*t108*t127*t186*t298*2.0)-t261*(t2*t46*t52*t257+t10*t16*t62*t347-t33*t39*t67*t351+t46*t52*t79*t343-t1*t2*t46*t52*t79*t257+t1*t2*t79*t186*t257*t298*2.0)+t285*(t1*t46*t52*t257+t10*t16*t112*t347-t33*t39*t109*t351+t46*t52*t108*t343-t1*t2*t46*t52*t108*t257+t1*t2*t108*t186*t257*t298*2.0))*(1.0/2.0);

return t0;
}

#endif