#ifndef LQR3_P2_antiutopia_DL5_H
#define LQR3_P2_antiutopia_DL5_H

double LQR3_P2_antiutopia_DL5(double* tv, int tdim, double* param, int pdim) {

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
double t144 = 1.0/AUp2;
double t145 = t69*t72*1.09E3;
double t146 = t20*t23*1.09E3;
double t147 = t64*t84*1.09E3;
double t148 = t145+t146+t147+1.9E1;
double t149 = t144*t148;
double t150 = t149-1.0;
double t151 = t2-t8;
double t152 = 1.0/(t14*t14*t14);
double t153 = 1.0/AUp1;
double t154 = t69*t100*1.09E3;
double t155 = t20*t57*1.09E3;
double t156 = t147+t154+t155+1.9E1;
double t157 = t153*t156;
double t158 = t157-1.0;
double t159 = t10*t16*t151*1.8E1;
double t166 = t10*t151*t152*1.8E1;
double t160 = t159-t166;
double t161 = 1.0/AUp3;
double t162 = t64*t91*1.09E3;
double t163 = t145+t155+t162+1.9E1;
double t164 = t161*t163;
double t165 = t164-1.0;
double t167 = t25*t57*t160*1.09E3;
double t168 = t167-t10*t20*t151*t152*1.962E3;
double t169 = t59*t104;
double t170 = t132+t133+t169;
double t171 = t46*t52*t79*t127;
double t172 = t76*t122;
double t173 = t142+t143+t172;
double t174 = t10*t16*t112*t137;
double t175 = t46*t52*t108*t127;
double t176 = t10*t16*t112*t170;
double t242 = t33*t39*t109*t131;
double t177 = t175+t176-t242;
double t178 = t10*t16*t62*t137;
double t179 = t46*t52*t79*t173;
double t227 = t33*t39*t67*t141;
double t180 = t178+t179-t227;
double t181 = fabs(t158);
double t182 = fabs(t150);
double t183 = fabs(t165);
double t184 = t46*t52*t108*t173;
double t185 = t174+t184-t33*t39*t109*t141;
double t186 = 1.0/(t18*t18*t18);
double t187 = t1*t4*2.0;
double t195 = r4*t7*2.0;
double t196 = r5*t8*2.0;
double t197 = r6*t1*t2*2.0;
double t188 = t110+t187-t195-t196-t197+2.302070952;
double t189 = exp(t188);
double t190 = t10*t16*t20*t151*1.962E3;
double t191 = t10*t16*t25*t57*t151*1.962E4;
double t192 = t10*t24*t25*t151*t152*1.962E3;
double t204 = t15*t25*t160*1.962E3;
double t205 = t24*t57*t160*t186*2.18E3;
double t193 = t190+t191+t192-t204-t205;
double t194 = t10*t16*t62*t193;
double t198 = t59*t62*t151*t152*t189*2.0;
double t211 = t10*t16*t59*t62*t151;
double t199 = t194+t198-t211;
double t200 = t10*t16*t20*t151*2.18E2;
double t201 = t10*t16*t23*t25*t151*1.962E4;
double t202 = t10*t24*t25*t151*t152*2.18E2;
double t206 = t15*t25*t160*2.18E2;
double t207 = t23*t24*t160*t186*2.18E3;
double t203 = t200+t201+t202-t206-t207;
double t208 = t10*t16*t62*t203;
double t209 = t27*t62*t151*t152*t189*2.0;
double t212 = t10*t16*t27*t62*t151;
double t210 = t208+t209-t212;
double t213 = t10*t16*t62*t170;
double t214 = t171+t213-t33*t39*t67*t131;
double t215 = t2*2.0;
double t216 = t215-1.0;
double t217 = t10*t16*t59*t216;
double t218 = t10*t16*t59*t112*t151;
double t223 = t10*t16*t112*t193;
double t224 = t59*t112*t151*t152*t189*2.0;
double t219 = t217+t218-t223-t224;
double t220 = t10*t16*t27*t216;
double t221 = t10*t16*t27*t112*t151;
double t225 = t10*t16*t112*t203;
double t226 = t27*t112*t151*t152*t189*2.0;
double t222 = t220+t221-t225-t226;
double t228 = t76*t210;
double t229 = t102*t199;
double t230 = t76*t199;
double t231 = t228+t229+t230;
double t232 = t86*t210;
double t233 = t93*t199;
double t234 = t86*t199;
double t235 = t232+t233+t234;
double t236 = t96*t203;
double t237 = t94*t193;
double t238 = t104*t193;
double t239 = t27*t210;
double t240 = t59*t199*2.0;
double t241 = t236+t237+t238+t239+t240;
double t243 = t76*t222;
double t244 = t102*t219;
double t245 = t76*t219;
double t246 = t243+t244+t245;
double t247 = t122*t203;
double t248 = t119*t193;
double t249 = t117*t193;
double t250 = t247+t248+t249-t27*t222-t59*t219*2.0;
double t251 = t86*t222;
double t252 = t93*t219;
double t253 = t86*t219;
double t254 = t251+t252+t253;
double t0 = sqrt(-t177*t180+(t171-t33*t39*t67*t131+t10*t16*t62*(t132+t133+t59*(t81+t103-t33*t39*t67*t86)))*(t174-t33*t39*t109*t141+t46*t52*t108*(t142+t143+t76*(t114+t121-t33*t39*t86*t109))))*(t144*t182*((t150/fabs(t150)))*(t23*t25*t160*1.09E3-t10*t20*t151*t152*2.18E2)*2.0+t153*t168*t181*((t158/fabs(t158)))*2.0+t161*t168*t183*((t165/fabs(t165)))*2.0)+1.0/sqrt(-t177*t180+t185*t214)*(t181*t181+t182*t182+t183*t183)*(t177*(t10*t16*t62*t250+t33*t39*t67*t254-t46*t52*t79*t246-t10*t16*t62*t137*t151+t62*t137*t151*t152*t189*2.0)-t185*(t10*t16*t62*t241-t33*t39*t67*t235+t46*t52*t79*t231-t10*t16*t62*t151*t170+t62*t151*t152*t170*t189*2.0)+t214*(t10*t16*t137*t216-t10*t16*t112*t250-t33*t39*t109*t254+t46*t52*t108*t246+t10*t16*t112*t137*t151-t112*t137*t151*t152*t189*2.0)+t180*(t10*t16*t112*t241-t10*t16*t170*t216-t33*t39*t109*t235+t46*t52*t108*t231-t10*t16*t112*t151*t170+t112*t151*t152*t170*t189*2.0))*(1.0/2.0);

return t0;
}

#endif