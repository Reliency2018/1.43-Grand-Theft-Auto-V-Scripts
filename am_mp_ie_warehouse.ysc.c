#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 37;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	float fLocal_146 = 0f;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	int iLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	bool bLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	vector3 vLocal_168 = { 0f, 0f, 0f };
	vector3 vLocal_169 = { 0f, 0f, 0f };
	float fLocal_170 = 0f;
	struct<321> Local_171 = { 0, 1, -1, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1 } ;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 15;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	struct<366> Local_297 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 187;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 13;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	bool bLocal_774 = 0;
	bool bLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	float fLocal_784[8] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<2> Local_785[8];
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	vector3 vLocal_792[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_793 = { 0f, 0f, 0f };
	int iLocal_794 = 0;
	var uLocal_795 = 0;
	struct<699> Local_796 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0 } ;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	struct<24> Local_924[32];
	struct<5> Local_925 = { 0, 0, 0, 0, 0 } ;
	var uLocal_926 = 0;
	struct<892> Local_927 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 0, -1, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	int iLocal_934 = 0;
	char* sLocal_935 = NULL;
	var uLocal_936 = 0;
	var uLocal_937 = 15;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 15;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	int iLocal_971 = 0;
	struct<6> Local_972[15];
	struct<4> Local_973 = { 0, 0, 0, 0 } ;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	vector3 vLocal_980 = { 0f, 0f, 0f };
	vector3 vLocal_981 = { 0f, 0f, 0f };
	float fLocal_982 = 0f;
	vector3 vLocal_983 = { 0f, 0f, 0f };
	vector3 vLocal_984 = { 0f, 0f, 0f };
	int iLocal_985[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_986[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	vector3 vLocal_998 = { 0f, 0f, 0f };
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0,001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0,05f + 0,275f) - 0,01f);
	fLocal_138 = 3f;
	fLocal_139 = 0f;
	fLocal_140 = 2f;
	fLocal_141 = 100f;
	fLocal_146 = 0,5f;
	iLocal_163 = 6;
	iLocal_164 = 7;
	vLocal_168 = { 0f, -0,155076f, -0,493f };
	vLocal_169 = { 0f, 1,28f, -1,819594f };
	fLocal_170 = 1f;
	iLocal_929 = -1;
	iLocal_934 = -1;
	fLocal_982 = 0,928f;
	vLocal_983 = { 0,015f, -0,25f, -0,222f };
	vLocal_984 = { 0,015f, -1,05f, 1,486f };
	iLocal_997 = -1;
	if (unk_0x3A711520F83BAE98())
	{
		func_830(&vScriptParam_998);
	}
	else
	{
		func_818();
	}
	while (true)
	{
		func_817();
		unk_0xF6F6744767EBB152();
		if (func_816(unk_0x9EB17624F44A8DA4(), 1, 1))
		{
			unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 444, 1);
		}
		unk_0x4FB260623DD93924(0, 351, 1);
		unk_0x4FB260623DD93924(0, 350, 1);
		unk_0x4FB260623DD93924(0, 353, 1);
		unk_0x4FB260623DD93924(0, 101, 1);
		unk_0x4FB260623DD93924(0, 25, 1);
		unk_0x4FB260623DD93924(0, 24, 1);
		unk_0x4FB260623DD93924(0, 257, 1);
		unk_0x4FB260623DD93924(0, 91, 1);
		unk_0x4FB260623DD93924(0, 92, 1);
		unk_0x4FB260623DD93924(0, 354, 1);
		func_709();
		func_486(&Local_171, &(Local_297.f_365));
		func_485();
		func_477();
		if (func_468())
		{
			func_467(1);
			func_818();
		}
		if (func_464(vScriptParam_998.z, Local_927.f_3))
		{
			func_467(1);
			func_818();
		}
		if (((Local_927.f_55 == unk_0x9EB17624F44A8DA4() && !unk_0x8E1421E2A2A2FBD4()) && func_463()) && !Global_2405047.f_2640)
		{
			unk_0x8E58E8CBA3F22C2C();
		}
		iLocal_776 = 0;
		if (func_460())
		{
			Local_924[unk_0x9EB17624F44A8DA4() /*24*/].f_19 = 0;
			Local_925 = 0;
		}
		func_459();
		if (func_458(1))
		{
			func_206();
		}
		if (unk_0x8E1421E2A2A2FBD4())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x239
{
	if (func_458(0) && func_71())
	{
		func_70(1);
	}
	else if (func_458(1))
	{
		func_69(&(Local_924[iLocal_794 /*24*/].f_18), &(Local_297.f_57), &iLocal_794);
		func_16(&(Local_297.f_2), &(Local_924[Local_796.f_9 /*24*/].f_1), &Local_796, &Global_3932160);
		func_14();
		func_71();
		func_13();
	}
	func_2(&(Local_297.f_365), &Local_171, 0);
}

void func_2(var uParam0, var uParam1, bool bParam2)//Position - 0x2AE
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x918CA1BFFAA03556(uParam0->f_462[0]))
	{
		if (func_11(func_12(uParam1, bParam2)))
		{
			if (unk_0x78E929955680CA05())
			{
				unk_0xCC06E2EDC5BE3D1B(1);
			}
			if (func_5(unk_0x5A9A3A92F1F0B182(false, 0) + 1, 0, 1))
			{
				unk_0xB66EA47EE710E67F(unk_0x5A9A3A92F1F0B182(false, 0) + 1);
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					vVar0 = { func_4(0, &(uParam1->f_279)) };
					vVar1 = { func_3(0, &(uParam1->f_279)) };
					uParam0->f_462[0] = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(func_12(uParam1, bParam2), vVar0, 1, true, 0));
					unk_0x59AF3B40AE222194(unk_0xE8BC72FED1586931(uParam0->f_462[0]), vVar1, 2, 1);
					unk_0xB2CBFA871D3387B6(unk_0xE8BC72FED1586931(uParam0->f_462[0]), 1);
					unk_0xEDC33A771FAEB393(unk_0xE8BC72FED1586931(uParam0->f_462[0]), true);
				}
			}
			if (unk_0x78E929955680CA05())
			{
				unk_0xCC06E2EDC5BE3D1B(0);
			}
		}
		else if (!func_11(func_12(uParam1, bParam2)))
		{
		}
	}
}

Vector3 func_3(int iParam0, var uParam1)//Position - 0x3A1
{
	if (iParam0 > -1 && iParam0 < 1)
	{
		return uParam1->f_6[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

Vector3 func_4(int iParam0, var uParam1)//Position - 0x3CB
{
	if (iParam0 > -1 && iParam0 < 1)
	{
		return uParam1->f_6[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

bool func_5(int iParam0, bool bParam1, bool bParam2)//Position - 0x3F3
{
	return func_6(2, iParam0, 1, bParam1, bParam2);
}

int func_6(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x407
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(Global_1369394, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_10(iParam0) - func_9(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_9(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_10(iParam0) - func_8(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_9(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_10(iParam0) - func_9(iParam0, 1));
		}
		if (!bParam4 && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 3)
		{
			iVar1 = (iVar1 - func_7(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_7(int iParam0)//Position - 0x4D0
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_8(int iParam0)//Position - 0x50A
{
	switch (iParam0)
	{
		case 0:
			return Global_1369394.f_1;
			break;
		
		case 1:
			return Global_1369394.f_2;
			break;
		
		case 2:
			return Global_1369394.f_3;
			break;
	}
	return 0;
}

int func_9(int iParam0, bool bParam1)//Position - 0x550
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_224;
			}
			else
			{
				return unk_0x3930B0AA9F6A0C8C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_225;
			}
			else
			{
				return unk_0x9E883378D9B4735D(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_226;
			}
			else
			{
				return unk_0x5A9A3A92F1F0B182(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x5ED
{
	switch (iParam0)
	{
		case 0:
			return Global_1369402;
			break;
		
		case 1:
			return Global_1369403;
			break;
		
		case 2:
			return Global_1369404;
			break;
	}
	return 0;
}

bool func_11(int iParam0)//Position - 0x62D
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x6FF834D85E2DD4C6(iParam0);
	return unk_0x9A0B2ED5055D3F0B(iParam0);
}

int func_12(var uParam0, bool bParam1)//Position - 0x64B
{
	if (bParam1)
	{
		return -1818771240;
	}
	return 637672069;
}

void func_13()//Position - 0x665
{
	if (bLocal_774)
	{
		if (!unk_0xC80D31E4B587871C(Local_297.f_1, 0))
		{
			unk_0x872F1C1F8587CCC7(&(Local_297.f_1), 0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_297.f_1, 0))
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_297.f_1), 0);
	}
	if (bLocal_775)
	{
		if (!unk_0xC80D31E4B587871C(Local_297.f_1, 1))
		{
			unk_0x872F1C1F8587CCC7(&(Local_297.f_1), 1);
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_297.f_1, 1))
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_297.f_1), 1);
	}
}

void func_14()//Position - 0x6DD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
		{
			iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
			if (func_816(iVar1, 1, 1))
			{
				if (func_15(iVar1))
				{
					unk_0xF657D5FC8E9BD2FF(unk_0x25D049AAC4603E65(iVar1));
				}
			}
		}
		iVar0++;
	}
}

int func_15(int iParam0)//Position - 0x731
{
	if (unk_0x0F3033474C49912D(unk_0x25D049AAC4603E65(iParam0), 970,4088f, -3013,568f, -48,54214f, 970,3889f, -2985,818f, -43,78562f, 68,4375f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_16(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x771
{
	bool bVar0;
	
	if (Global_1655676 == 1)
	{
		if (uParam0->f_50 != 1)
		{
			func_68(uParam0, 1, 0);
		}
		if (uParam0->f_1 != 27)
		{
			uParam0->f_1 = 27;
		}
		Global_1655676 = 0;
	}
	switch (uParam0->f_50)
	{
		case 0:
			uParam0->f_53 = iParam2->f_699;
			uParam0->f_54 = iParam2->f_700;
			bVar0 = false;
			if ((((((((func_67(uParam3->f_31) || func_66(uParam3->f_31, -1)) || func_65(uParam3->f_31)) || func_64(uParam3->f_31)) || func_63(unk_0x9EB17624F44A8DA4())) || func_59(uParam3->f_31, 0, 0)) || func_58(unk_0x9EB17624F44A8DA4())) || uParam0->f_49) || func_57(unk_0x9EB17624F44A8DA4()))
			{
				bVar0 = true;
				if (uParam0->f_4 == 1)
				{
					if (func_44(uParam0, uParam3, 0))
					{
						bVar0 = false;
					}
				}
				else
				{
					func_43(uParam0, uParam3);
				}
			}
			if (func_67(uParam3->f_31))
			{
			}
			if (!bVar0)
			{
				if (!Global_1595547)
				{
					if (uParam0->f_49 == 0)
					{
						if (unk_0xDE597476C8B96D1A(unk_0xF6A72924028F588B(iParam2->f_9)))
						{
							if (iParam2->f_698 == unk_0xF6A72924028F588B(iParam2->f_9))
							{
								if (unk_0xC80D31E4B587871C(*iParam1, 1))
								{
									uParam0->f_1 = iParam1->f_7;
									if (unk_0xC80D31E4B587871C(*iParam1, 2) && !Global_1595547)
									{
										func_68(uParam0, 1, 0);
									}
									else
									{
										func_68(uParam0, 2, 0);
									}
								}
							}
							else if (iParam2->f_698 > -1)
							{
							}
						}
						else if (iParam2->f_9 > -1 && unk_0x552F39AE86E07792(unk_0xF6A72924028F588B(iParam2->f_9)))
						{
							if (iParam2->f_698 == unk_0xF6A72924028F588B(iParam2->f_9))
							{
								if (!unk_0xC80D31E4B587871C(*iParam1, 1))
								{
									unk_0x872F1C1F8587CCC7(iParam1, 1);
									uParam0->f_1 = Global_1627537[iParam2->f_9 /*532*/].f_528;
									if (Global_1627537[iParam2->f_9 /*532*/].f_529 == 1)
									{
										unk_0x872F1C1F8587CCC7(iParam1, 2);
									}
									else if (Global_1627537[iParam2->f_9 /*532*/].f_529 == 0)
									{
										unk_0x0EE72DB1CD8A3B86(iParam1, 2);
									}
									if (unk_0xC80D31E4B587871C(*iParam1, 2) && !Global_1595547)
									{
										func_68(uParam0, 1, 0);
									}
									else
									{
										func_68(uParam0, 2, 0);
									}
								}
							}
						}
					}
					else if (iParam2->f_698 == unk_0xF6A72924028F588B(iParam2->f_9))
					{
						if (unk_0xDE597476C8B96D1A(unk_0xF6A72924028F588B(iParam2->f_9)))
						{
							if (unk_0xC80D31E4B587871C(*iParam1, 1))
							{
								uParam0->f_1 = iParam1->f_7;
								if (unk_0xC80D31E4B587871C(*iParam1, 2) && !Global_1595547)
								{
									func_68(uParam0, 1, 0);
								}
								else
								{
									func_68(uParam0, 2, 0);
								}
							}
						}
						else
						{
							uParam0->f_1 = 11;
							func_68(uParam0, 2, 0);
						}
					}
					else if (iParam2->f_698 > -1)
					{
					}
				}
				else
				{
					uParam0->f_1 = 0;
					func_68(uParam0, 2, 0);
				}
			}
			break;
		
		case 1:
			if ((unk_0xC80D31E4B587871C(iParam1->f_3, 1) && !unk_0xC80D31E4B587871C(*iParam1, 0)) || Global_1595547)
			{
				func_68(uParam0, 2, 0);
			}
			else
			{
				func_39(uParam0, iParam1, iParam2, 0);
			}
			break;
		
		case 2:
			if ((((unk_0xC80D31E4B587871C(iParam1->f_3, 0) && !unk_0xC80D31E4B587871C(*iParam1, 0)) || unk_0xC80D31E4B587871C(*iParam2, 8)) && !Global_1595547) || func_38())
			{
				func_68(uParam0, 1, 0);
			}
			break;
	}
	if ((((((((!func_66(uParam3->f_31, -1) && !func_65(uParam3->f_31)) && !func_67(uParam3->f_31)) && !func_64(uParam3->f_31)) && !func_63(unk_0x9EB17624F44A8DA4())) && !func_58(unk_0x9EB17624F44A8DA4())) && !func_57(unk_0x9EB17624F44A8DA4())) && !func_37(unk_0x9EB17624F44A8DA4())) && !func_34(unk_0x9EB17624F44A8DA4()))
	{
		switch (uParam0->f_52)
		{
			case 0:
				if (!Global_1595547)
				{
					if (func_816(unk_0xF6A72924028F588B(iParam2->f_9), 0, 0))
					{
						if (unk_0xDE597476C8B96D1A(unk_0xF6A72924028F588B(iParam2->f_9)))
						{
							if (unk_0x3DE13AF8F787AC71() == unk_0x87678BB8392EFD41(unk_0xF6A72924028F588B(iParam2->f_9)))
							{
								if (uParam3->f_33 == 10)
								{
									if (unk_0xC80D31E4B587871C(*iParam1, 2) && !Global_1595547)
									{
										func_33(uParam0, 3, 0);
									}
									else
									{
										func_33(uParam0, 4, 0);
									}
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_1 = 0;
					func_33(uParam0, 4, 0);
				}
				break;
			
			case 3:
				if (unk_0xC80D31E4B587871C(iParam1->f_4, 5) || Global_1595547)
				{
					func_33(uParam0, 4, 0);
				}
				else
				{
					func_39(uParam0, iParam1, iParam2, 0);
				}
				if (func_31())
				{
					func_17(iParam1, iParam2);
				}
				break;
			
			case 4:
				if ((unk_0xC80D31E4B587871C(iParam1->f_4, 4) && !Global_1595547) || func_38())
				{
					func_33(uParam0, 3, 0);
				}
				break;
			}
	}
	switch (uParam0->f_51)
	{
		case 0:
			if (!Global_1595547)
			{
				if (func_816(unk_0xF6A72924028F588B(iParam2->f_9), 0, 0))
				{
					if (unk_0xDE597476C8B96D1A(unk_0xF6A72924028F588B(iParam2->f_9)))
					{
						if (unk_0x3DE13AF8F787AC71() == unk_0x87678BB8392EFD41(unk_0xF6A72924028F588B(iParam2->f_9)))
						{
							if (unk_0xC80D31E4B587871C(*iParam1, 1))
							{
								uParam0->f_2 = iParam1->f_8;
								if (unk_0xC80D31E4B587871C(*iParam1, 4) && !Global_1595547)
								{
									func_68(uParam0, 1, 1);
								}
								else
								{
									func_68(uParam0, 2, 1);
								}
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_2 = 0;
				func_68(uParam0, 2, 1);
			}
			break;
		
		case 1:
			if ((unk_0xC80D31E4B587871C(iParam1->f_3, 1) && unk_0xC80D31E4B587871C(*iParam1, 0)) || Global_1595547)
			{
				func_68(uParam0, 2, 1);
			}
			else
			{
				func_39(uParam0, iParam1, iParam2, 1);
			}
			break;
		
		case 2:
			if ((unk_0xC80D31E4B587871C(iParam1->f_3, 0) && unk_0xC80D31E4B587871C(*iParam1, 0)) && !Global_1595547)
			{
				func_68(uParam0, 1, 1);
			}
			break;
	}
	iParam2->f_9++;
	if (iParam2->f_9 >= 32)
	{
		iParam2->f_9 = 0;
	}
}

void func_17(int iParam0, int iParam1)//Position - 0xD7A
{
	Global_25500 = 0;
	Global_25501 = 0;
	func_20(iParam1);
	unk_0x0EE72DB1CD8A3B86(iParam0, 15);
	func_18(&(iParam1->f_1));
	func_18(&(iParam1->f_2));
	*iParam1 = 0;
	iParam1->f_3 = 0;
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_10 = -1;
	iParam0->f_13 = 0;
	iParam0->f_14 = 0;
	iParam0->f_6 = 0;
	iParam0->f_5 = 0;
	if (unk_0x6ADD12BF4D6D2587(iParam1->f_701))
	{
		unk_0xD4BB744A696E8ABF("se_xm_int_02_bedroom_radio", 0);
		unk_0x452336926718D62A(&(iParam1->f_701));
		unk_0x3A703774620FDB42(&(iParam1->f_701));
		iParam1->f_701 = 0;
		unk_0x14776E43F90DD454(joaat("v_res_fh_speakerdock"));
	}
}

void func_18(int iParam0)//Position - 0xE11
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_19(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_19(int iParam0)//Position - 0xE68
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_20(int iParam0)//Position - 0xEA3
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xCB3D88C918AA637C(unk_0xFC1458A37D98B502());
	}
	if (unk_0xC80D31E4B587871C(*iParam0, 10))
	{
		unk_0xE02E32C69260FBB7("MP_APT_STRIPPER_SCENE");
		unk_0x0EE72DB1CD8A3B86(iParam0, 10);
	}
	unk_0xA68F7B004463AB6F(&(iParam0->f_697));
	unk_0x0EE72DB1CD8A3B86(&Global_2359302, 15);
	func_30();
	func_28();
	func_21();
}

void func_21()//Position - 0xEF9
{
	func_22(0);
}

void func_22(bool bParam0)//Position - 0xF06
{
	if (bParam0)
	{
		func_27();
		if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
		{
			unk_0x872F1C1F8587CCC7(&Global_2324, 16);
		}
		Global_14453.f_1 = 1;
		if (func_26(0))
		{
			func_23(0);
		}
	}
	else if (Global_14453.f_1 == 1)
	{
		if (!Global_14453.f_1 == 0)
		{
			Global_14453.f_1 = 3;
		}
	}
}

void func_23(int iParam0)//Position - 0xF69
{
	if (Global_14615)
	{
		func_25(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0x872F1C1F8587CCC7(&Global_2324, 16);
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		unk_0xB31CEFB00C146C91(false);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 30);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 30);
	}
	if (!func_24())
	{
		Global_14453.f_1 = 3;
	}
}

int func_24()//Position - 0xFD9
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_25(bool bParam0, bool bParam1)//Position - 0x1000
{
	if (bParam0)
	{
		if (func_26(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0x494F5FA1BF017D58(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x0D75BB9393CE608D(Global_14390);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
}

int func_26(int iParam0)//Position - 0x1074
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_27()//Position - 0x10CE
{
	if (Global_14453.f_1 == 9 || Global_14453.f_1 == 10)
	{
		Global_15809 = 0;
		Global_15805 = 1;
	}
}

void func_28()//Position - 0x10F7
{
	func_29(unk_0x9EB17624F44A8DA4(), 0);
}

void func_29(int iParam0, int iParam1)//Position - 0x1108
{
	Global_2422736[iParam0 /*420*/].f_72.f_3 = iParam1;
}

void func_30()//Position - 0x111F
{
	Global_2436181.f_1040.f_10 = 0;
}

int func_31()//Position - 0x1131
{
	if (func_32() == 1 || func_32() == 4)
	{
		return 1;
	}
	return 0;
}

int func_32()//Position - 0x1153
{
	return Global_1312466.f_18;
}

void func_33(var uParam0, int iParam1, bool bParam2)//Position - 0x1161
{
	if (bParam2)
	{
		uParam0->f_51 = iParam1;
	}
	else
	{
		uParam0->f_52 = iParam1;
	}
}

int func_34(int iParam0)//Position - 0x117D
{
	if (iParam0 != func_36())
	{
		if (func_816(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_35(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x11C4
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

int func_36()//Position - 0x1488
{
	return -1;
}

int func_37(int iParam0)//Position - 0x1491
{
	if (iParam0 != func_36())
	{
		if (func_816(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_35(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

bool func_38()//Position - 0x14D7
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

void func_39(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x14EE
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	
	bVar0 = false;
	bVar1 = false;
	bVar3 = false;
	if (bParam3)
	{
		iVar2 = uParam0->f_2;
		if (!unk_0xC80D31E4B587871C(*iParam2, 3) || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iParam2->f_8) > 1000)
		{
			bVar0 = true;
			if (unk_0xC80D31E4B587871C(*iParam1, 0))
			{
				if (iParam1->f_9 == iVar2)
				{
					bVar3 = true;
				}
			}
		}
	}
	else
	{
		iVar2 = uParam0->f_1;
		if (!unk_0xC80D31E4B587871C(*iParam2, 1) || unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), iParam2->f_7) > 1000)
		{
			bVar0 = true;
			if (!unk_0xC80D31E4B587871C(*iParam1, 0))
			{
				if (iParam1->f_9 == iVar2)
				{
					bVar3 = true;
				}
			}
		}
	}
	if (bVar0)
	{
		if (bVar3)
		{
			if (unk_0xC80D31E4B587871C(iParam1->f_3, 2) || unk_0xC80D31E4B587871C(iParam1->f_4, 2))
			{
				func_42(uParam0, bParam3);
				bVar1 = true;
			}
			else if (unk_0xC80D31E4B587871C(iParam1->f_3, 3) || unk_0xC80D31E4B587871C(iParam1->f_4, 3))
			{
				func_40(uParam0, bParam3);
				bVar1 = true;
			}
		}
	}
	if (bVar1)
	{
		if (bParam3)
		{
			iVar2 = uParam0->f_2;
		}
		else
		{
			iVar2 = uParam0->f_1;
		}
		if (bParam3)
		{
			iParam2->f_8 = unk_0xD1952A425B78FFC0();
			unk_0x872F1C1F8587CCC7(iParam2, 3);
		}
		else
		{
			iParam2->f_7 = unk_0xD1952A425B78FFC0();
			unk_0x872F1C1F8587CCC7(iParam2, 1);
		}
	}
}

void func_40(var uParam0, bool bParam1)//Position - 0x1624
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
	}
	iVar1 = iVar0;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 == 0)
	{
		iVar1 = (iVar1 - 1);
		if (iVar1 < 0)
		{
			iVar1 = (unk_0x9D37D5D5CB91F452() - 1);
		}
		if (iVar1 == iVar0)
		{
			iVar3 = 1;
		}
		else
		{
			iVar2 = iVar1;
			iVar3 = 1;
		}
	}
	if (iVar2 != -1)
	{
		func_41(uParam0, bParam1, iVar2);
	}
}

void func_41(var uParam0, bool bParam1, int iParam2)//Position - 0x168B
{
	if (bParam1)
	{
		uParam0->f_2 = iParam2;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
}

void func_42(var uParam0, bool bParam1)//Position - 0x16A7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar0 = uParam0->f_2;
	}
	else
	{
		iVar0 = uParam0->f_1;
	}
	iVar1 = iVar0;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 == 0)
	{
		iVar1++;
		if (iVar1 > (unk_0x9D37D5D5CB91F452() - 1))
		{
			iVar1 = 0;
		}
		if (iVar1 == iVar0)
		{
			iVar3 = 1;
		}
		else
		{
			iVar2 = iVar1;
			iVar3 = 1;
		}
	}
	if (iVar2 != -1)
	{
		func_41(uParam0, bParam1, iVar2);
	}
}

void func_43(var uParam0, var uParam1)//Position - 0x170E
{
	if (uParam0->f_4 == 0)
	{
		if (func_67(uParam1->f_31) && !uParam0->f_49)
		{
			if (func_5(unk_0x5A9A3A92F1F0B182(false, 0) + 4, 0, 1))
			{
				unk_0xB66EA47EE710E67F(unk_0x5A9A3A92F1F0B182(false, 0) + 4);
				uParam0->f_4 = 1;
			}
		}
		else if (uParam0->f_49)
		{
			if (func_5(unk_0x5A9A3A92F1F0B182(false, 0) + 4, 0, 1))
			{
				unk_0xB66EA47EE710E67F(unk_0x5A9A3A92F1F0B182(false, 0) + 4);
				uParam0->f_4 = 1;
			}
		}
		else if (func_66(uParam1->f_31, -1))
		{
			if (func_5(unk_0x5A9A3A92F1F0B182(false, 0) + 6, 0, 1))
			{
				unk_0xB66EA47EE710E67F(unk_0x5A9A3A92F1F0B182(false, 0) + 6);
				uParam0->f_4 = 1;
			}
		}
		else if (func_65(uParam1->f_31))
		{
			if (func_5(unk_0x5A9A3A92F1F0B182(false, 0) + 3, 0, 1))
			{
				unk_0xB66EA47EE710E67F(unk_0x5A9A3A92F1F0B182(false, 0) + 3);
				uParam0->f_4 = 1;
			}
		}
		else if (func_59(uParam1->f_31, 0, 0))
		{
			if (func_5(unk_0x5A9A3A92F1F0B182(false, 0) + 2, 0, 1))
			{
				unk_0xB66EA47EE710E67F(unk_0x5A9A3A92F1F0B182(false, 0) + 2);
				uParam0->f_4 = 1;
			}
		}
		else if ((((func_64(uParam1->f_31) || func_63(unk_0x9EB17624F44A8DA4())) || func_58(unk_0x9EB17624F44A8DA4())) || func_57(unk_0x9EB17624F44A8DA4())) || func_37(unk_0x9EB17624F44A8DA4()))
		{
			if (func_5(unk_0x5A9A3A92F1F0B182(false, 0) + 1, 0, 1))
			{
				unk_0xB66EA47EE710E67F(unk_0x5A9A3A92F1F0B182(false, 0) + 1);
				uParam0->f_4 = 1;
			}
		}
		else if (func_34(unk_0x9EB17624F44A8DA4()))
		{
			if (func_5(unk_0x5A9A3A92F1F0B182(false, 0) + 2, 0, 1))
			{
				unk_0xB66EA47EE710E67F(unk_0x5A9A3A92F1F0B182(false, 0) + 2);
				uParam0->f_4 = 1;
			}
		}
	}
}

int func_44(var uParam0, var uParam1, int iParam2)//Position - 0x18AC
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	struct<4> Var4;
	vector3 vVar5;
	struct<4> Var6;
	struct<4> Var7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	float fVar14;
	
	if (unk_0x78E929955680CA05())
	{
		unk_0xCC06E2EDC5BE3D1B(1);
	}
	if (func_34(unk_0x9EB17624F44A8DA4()))
	{
		if (!func_56(Global_1595543))
		{
			unk_0xD4BB744A696E8ABF("se_xm_int_02_lounge_radio", iParam2);
		}
		if (!func_55(Global_1595543))
		{
			unk_0xD4BB744A696E8ABF("se_xm_int_02_bedroom_radio", iParam2);
		}
	}
	if (func_67(uParam1->f_31) && !uParam0->f_49)
	{
		if (!unk_0x918CA1BFFAA03556(uParam0->f_5))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					if (func_54(unk_0x9EB17624F44A8DA4(), 0) >= 0)
					{
						func_52(func_54(unk_0x9EB17624F44A8DA4(), 0), 421, &vVar0, 0);
						uParam0->f_9 = { vVar0 };
						uParam0->f_5 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_9, 1, true, 0));
						unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bar", iParam2);
						unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Bar", unk_0x29AB7D6D0DE18055(uParam0->f_5));
						unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_5), true);
						unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_5), true);
						unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_5), false, 0);
						unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_5), false, 0);
						unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_5), 1);
					}
				}
			}
		}
		if (!unk_0x918CA1BFFAA03556(uParam0->f_6))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					if (func_54(unk_0x9EB17624F44A8DA4(), 0) >= 0)
					{
						func_52(func_54(unk_0x9EB17624F44A8DA4(), 0), 420, &vVar1, 0);
						uParam0->f_12 = { vVar1 };
						uParam0->f_6 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_12, 1, true, 0));
						unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom", iParam2);
						unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Bedroom", unk_0x29AB7D6D0DE18055(uParam0->f_6));
						unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_6), true);
						unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_6), true);
						unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_6), false, 0);
						unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_6), false, 0);
						unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_6), 1);
					}
				}
			}
		}
		if (!unk_0x918CA1BFFAA03556(uParam0->f_7))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					if (func_54(unk_0x9EB17624F44A8DA4(), 0) >= 0)
					{
						func_52(func_54(unk_0x9EB17624F44A8DA4(), 0), 586, &vVar2, 0);
						uParam0->f_15 = { vVar2 };
						uParam0->f_7 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_15, 1, true, 0));
						unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom_02", iParam2);
						unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Bedroom_02", unk_0x29AB7D6D0DE18055(uParam0->f_7));
						unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_7), true);
						unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_7), true);
						unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_7), false, 0);
						unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_7), false, 0);
						unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_7), 1);
					}
				}
			}
		}
		if (!unk_0x918CA1BFFAA03556(uParam0->f_8))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					if (func_54(unk_0x9EB17624F44A8DA4(), 0) >= 0)
					{
						func_52(func_54(unk_0x9EB17624F44A8DA4(), 0), 585, &vVar3, 0);
						uParam0->f_18 = { vVar3 };
						uParam0->f_8 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_18, 1, true, 0));
						unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom_03", iParam2);
						unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Bedroom_03", unk_0x29AB7D6D0DE18055(uParam0->f_8));
						unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_8), true);
						unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_8), true);
						unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_8), false, 0);
						unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_8), false, 0);
						unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_8), 1);
					}
				}
			}
		}
	}
	else if (uParam0->f_49)
	{
		if (!unk_0x918CA1BFFAA03556(uParam0->f_24))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					func_52(uParam0->f_3, 550, &Var4, 0);
					uParam0->f_37 = { Var4 };
					uParam0->f_24 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_37, 1, true, 0));
					unk_0x59AF3B40AE222194(unk_0xE8BC72FED1586931(uParam0->f_24), Var4.f_3, 2, 1);
					unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_01", iParam2);
					unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Exterior_01", unk_0x29AB7D6D0DE18055(uParam0->f_24));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_24), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_24), true);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_24), 1);
				}
			}
		}
		if (!unk_0x918CA1BFFAA03556(uParam0->f_25))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					func_52(uParam0->f_3, 551, &vVar5, 0);
					uParam0->f_40 = { vVar5 };
					uParam0->f_25 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_40, 1, true, 0));
					unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_02", iParam2);
					unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Exterior_02", unk_0x29AB7D6D0DE18055(uParam0->f_25));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_25), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_25), true);
					unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_25), false, 0);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_25), false, 0);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_25), 1);
				}
			}
		}
		if (!unk_0x918CA1BFFAA03556(uParam0->f_26))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					func_52(uParam0->f_3, 552, &Var6, 0);
					uParam0->f_43 = { Var6 };
					uParam0->f_26 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_43, 1, true, 0));
					unk_0x59AF3B40AE222194(unk_0xE8BC72FED1586931(uParam0->f_26), Var6.f_3, 2, 1);
					unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_03", iParam2);
					unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Exterior_03", unk_0x29AB7D6D0DE18055(uParam0->f_26));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_26), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_26), true);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_26), 1);
				}
			}
		}
		if (!unk_0x918CA1BFFAA03556(uParam0->f_27))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					func_52(uParam0->f_3, 553, &Var7, 0);
					uParam0->f_46 = { Var7 };
					uParam0->f_27 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_46, 1, true, 0));
					unk_0x59AF3B40AE222194(unk_0xE8BC72FED1586931(uParam0->f_27), Var7.f_3, 2, 1);
					unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_04", iParam2);
					unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Exterior_04", unk_0x29AB7D6D0DE18055(uParam0->f_27));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_27), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_27), true);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_27), 1);
				}
			}
		}
	}
	else if (func_66(uParam1->f_31, -1) || func_65(uParam1->f_31))
	{
		if (!unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					func_46(uParam1->f_31, 474, &vVar8, func_51(uParam1->f_31), 0);
					uParam0->f_34 = { vVar8 };
					uParam0->f_22 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_34, 1, true, 0));
					unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 1, 0, 0, 0, 0, 0, 0), iParam2);
					unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 1, 0, 0, 0, 0, 0, 0), unk_0x29AB7D6D0DE18055(uParam0->f_22));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_22), false, 0);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_22), false, 0);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_22), 1);
				}
			}
		}
		if (!unk_0x918CA1BFFAA03556(uParam0->f_21))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					func_46(uParam1->f_31, 473, &vVar9, func_51(uParam1->f_31), 0);
					uParam0->f_31 = { vVar9 };
					uParam0->f_21 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_31, 1, true, 0));
					unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 2, 0, 0, 0, 0, 0, 0), iParam2);
					unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 2, 0, 0, 0, 0, 0, 0), unk_0x29AB7D6D0DE18055(uParam0->f_21));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_21), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_21), true);
					unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_21), false, 0);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_21), false, 0);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_21), 1);
				}
			}
		}
		if (!unk_0x918CA1BFFAA03556(uParam0->f_23))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					func_46(uParam1->f_31, 475, &vVar10, func_51(uParam1->f_31), 0);
					uParam0->f_28 = { vVar10 };
					uParam0->f_23 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_28, 1, true, 0));
					unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 3, 0, 0, 0, 0, 0, 0), iParam2);
					unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 3, 0, 0, 0, 0, 0, 0), unk_0x29AB7D6D0DE18055(uParam0->f_23));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_23), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_23), true);
					unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_23), false, 0);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_23), false, 0);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_23), 1);
				}
			}
		}
	}
	else if (func_64(uParam1->f_31))
	{
		if (!unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					func_46(uParam1->f_31, 474, &vVar11, func_51(uParam1->f_31), 0);
					uParam0->f_34 = { vVar11 };
					uParam0->f_22 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_34, 1, true, 0));
					unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 1, 0, 0, 0, 0, 0, 0), iParam2);
					unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 1, 0, 0, 0, 0, 0, 0), unk_0x29AB7D6D0DE18055(uParam0->f_22));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_22), false, 0);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_22), false, 0);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_22), 1);
				}
			}
		}
	}
	else if (func_59(uParam1->f_31, 0, 0))
	{
		if (!unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					func_46(uParam1->f_31, 474, &vVar12, func_51(uParam1->f_31), 0);
					uParam0->f_34 = { vVar12 };
					uParam0->f_22 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_34, 1, true, 0));
					unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 4, 0, 0, 0, 0, 0, 0), iParam2);
					unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 4, 0, 0, 0, 0, 0, 0), unk_0x29AB7D6D0DE18055(uParam0->f_22));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_22), false, 0);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_22), false, 0);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_22), 1);
				}
			}
		}
		if (!unk_0x918CA1BFFAA03556(uParam0->f_21))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					func_46(uParam1->f_31, 473, &vVar13, func_51(uParam1->f_31), 1);
					uParam0->f_31 = { vVar13 };
					uParam0->f_21 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_31, 1, true, 0));
					unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 5, 0, 0, 0, 0, 0, 0), iParam2);
					unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 5, 0, 0, 0, 0, 0, 0), unk_0x29AB7D6D0DE18055(uParam0->f_21));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_21), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_21), true);
					unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_21), false, 0);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_21), false, 0);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_21), 1);
				}
			}
		}
	}
	else if (func_63(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					if (uParam0->f_53 == 111)
					{
						uParam0->f_34 = { 995,6363f, -3098,016f, -38,3565f };
					}
					else if (uParam0->f_53 == 42)
					{
						uParam0->f_34 = { 1048,328f, -3100,148f, -38,3521f };
					}
					else if (uParam0->f_53 == 16)
					{
						uParam0->f_34 = { 1087,526f, -3100,677f, -38,4417f };
					}
					uParam0->f_22 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_34, 1, true, 0));
					unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 1, 1, uParam0->f_53, 0, 0, 0, 0), iParam2);
					unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 1, 1, uParam0->f_53, 0, 0, 0, 0), unk_0x29AB7D6D0DE18055(uParam0->f_22));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_22), false, 0);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_22), false, 0);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_22), 1);
				}
			}
		}
	}
	else if (func_58(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			if (func_11(2057223314))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					if (uParam0->f_54 == 3)
					{
						uParam0->f_34 = { 1001,94f, -3193,765f, -39,106f };
						fVar14 = 0f;
					}
					else if (uParam0->f_54 == 1)
					{
						uParam0->f_34 = { 1030,66f, -3204,52f, -38,2192f };
						fVar14 = 75,52f;
					}
					else if (uParam0->f_54 == 4)
					{
						uParam0->f_34 = { 1086,06f, -3195,56f, -39,11f };
						fVar14 = 90f;
					}
					else if (uParam0->f_54 == 2)
					{
						uParam0->f_34 = { 1130,093f, -3193,262f, -40,4976f };
						fVar14 = 0f;
					}
					else if (uParam0->f_54 == 0)
					{
						uParam0->f_34 = { 1156,18f, -3196,333f, -38,0976f };
						fVar14 = 90f;
					}
					uParam0->f_22 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(2057223314, uParam0->f_34, 1, true, 0));
					unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 1, 0, 0, 1, uParam0->f_54, 0, 0), iParam2);
					unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 1, 0, 0, 1, uParam0->f_54, 0, 0), unk_0x29AB7D6D0DE18055(uParam0->f_22));
					unk_0x48ED7B2293A96722(unk_0x29AB7D6D0DE18055(uParam0->f_22), fVar14);
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_22), true, 0);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_22), 1);
				}
			}
		}
	}
	else if (func_57(unk_0x9EB17624F44A8DA4()))
	{
		if (!unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			if (func_11(joaat("prop_boombox_01")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					uParam0->f_34 = { 965,5109f, -2991,265f, -39,7606f };
					uParam0->f_22 = unk_0x02E026B1C5CE86B4(unk_0x9A331BBF019DCAD2(joaat("prop_boombox_01"), uParam0->f_34, 1, true, 0));
					unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 1, 0, 0, 0, uParam0->f_54, 1, 0), iParam2);
					unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 1, 0, 0, 0, uParam0->f_54, 1, 0), unk_0x29AB7D6D0DE18055(uParam0->f_22));
					unk_0x1A0806871323CD16(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xEDC33A771FAEB393(unk_0x29AB7D6D0DE18055(uParam0->f_22), true);
					unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055(uParam0->f_22), false, 0);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_22), false, 0);
					unk_0xB2CBFA871D3387B6(unk_0x29AB7D6D0DE18055(uParam0->f_22), 1);
				}
			}
		}
	}
	if (func_67(uParam1->f_31) && !uParam0->f_49)
	{
		if (unk_0x918CA1BFFAA03556(uParam0->f_5) && unk_0x918CA1BFFAA03556(uParam0->f_6))
		{
			return 1;
		}
	}
	else if (uParam0->f_49)
	{
		if (((unk_0x918CA1BFFAA03556(uParam0->f_25) && unk_0x918CA1BFFAA03556(uParam0->f_26)) && unk_0x918CA1BFFAA03556(uParam0->f_27)) && unk_0x918CA1BFFAA03556(uParam0->f_24))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (func_66(uParam1->f_31, -1))
	{
		if ((unk_0x918CA1BFFAA03556(uParam0->f_23) && unk_0x918CA1BFFAA03556(uParam0->f_21)) && unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			return 1;
		}
	}
	else if (func_65(uParam1->f_31))
	{
		if ((unk_0x918CA1BFFAA03556(uParam0->f_23) && unk_0x918CA1BFFAA03556(uParam0->f_21)) && unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			return 1;
		}
	}
	else if (func_59(uParam1->f_31, 0, 0))
	{
		if (unk_0x918CA1BFFAA03556(uParam0->f_22) && unk_0x918CA1BFFAA03556(uParam0->f_21))
		{
			return 1;
		}
	}
	else if (((func_64(uParam1->f_31) || func_63(unk_0x9EB17624F44A8DA4())) || func_58(unk_0x9EB17624F44A8DA4())) || func_57(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			return 1;
		}
	}
	return 0;
}

char* func_45(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x2926
{
	char* sVar0;
	
	sVar0 = "";
	if (bParam6)
	{
		sVar0 = "DLC_IE_Warehouse_Radio_01";
	}
	if (func_34(unk_0x9EB17624F44A8DA4()))
	{
		switch (iParam7)
		{
			case 0:
				return "se_xm_int_02_bedroom_radio";
			
			case 1:
				return "se_xm_int_02_lounge_radio";
			}
		
		default:
	}
	if (func_37(unk_0x9EB17624F44A8DA4()))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam7)
				{
					case 0:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Living_Quarters_01";
						break;
					
					case 1:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Living_Quarters_02";
						break;
				}
				break;
			
			case 2:
				switch (iParam7)
				{
					case 0:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Office_01";
						break;
					
					case 1:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Office_02";
						break;
					
					case 2:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Office_03";
						break;
					
					case 3:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Office_04";
						break;
				}
				break;
			
			case 3:
				switch (iParam7)
				{
					case 0:
						sVar0 = "SE_DLC_SM_Hangar_Radio_Mechanic";
						break;
				}
				break;
			}
	}
	if (bParam4)
	{
		if (iParam5 == 3)
		{
			sVar0 = "SE_DLC_Biker_Meth_Warehouse_Radio";
		}
		else if (iParam5 == 1)
		{
			sVar0 = "SE_DLC_Biker_Weed_Warehouse_Radio";
		}
		else if (iParam5 == 4)
		{
			sVar0 = "SE_DLC_Biker_Crack_Warehouse_Radio";
		}
		else if (iParam5 == 2)
		{
			sVar0 = "SE_DLC_Biker_Cash_Warehouse_Radio";
		}
		else if (iParam5 == 0)
		{
			sVar0 = "SE_DLC_Biker_FakeID_Warehouse_Radio";
		}
	}
	if (bParam2)
	{
		if (iParam3 == 16)
		{
			sVar0 = "SE_EXEC_WH_S_RADIO";
		}
		else if (iParam3 == 42)
		{
			sVar0 = "SE_EXEC_WH_M_RADIO";
		}
		else if (iParam3 == 111)
		{
			sVar0 = "SE_EXEC_WH_L_RADIO";
		}
	}
	switch (iParam1)
	{
		case 1:
			switch (func_51(iParam0))
			{
				case 77:
					sVar0 = "SE_DLC_APT_Stilts_A_Living_Room";
					break;
				
				case 73:
					sVar0 = "SE_DLC_APT_Stilts_B_Living_Room";
					break;
				
				case 83:
					sVar0 = "SE_DLC_APT_Custom_Living_Room";
					break;
				
				case 88:
					switch (Global_3934112)
					{
						case 1:
							sVar0 = "SE_ex_int_office_01a_Radio_01";
							break;
						
						case 2:
							sVar0 = "SE_ex_int_office_01b_Radio_01";
							break;
						
						case 3:
							sVar0 = "SE_ex_int_office_01c_Radio_01";
							break;
						
						case 4:
							sVar0 = "SE_ex_int_office_02a_Radio_01";
							break;
						
						case 5:
							sVar0 = "SE_ex_int_office_02b_Radio_01";
							break;
						
						case 6:
							sVar0 = "SE_ex_int_office_02c_Radio_01";
							break;
						
						case 7:
							sVar0 = "SE_ex_int_office_03a_Radio_01";
							break;
						
						case 8:
							sVar0 = "SE_ex_int_office_03b_Radio_01";
							break;
						
						case 9:
							sVar0 = "SE_ex_int_office_03c_Radio_01";
							break;
					}
					break;
			}
			break;
		
		case 2:
			switch (func_51(iParam0))
			{
				case 77:
					sVar0 = "SE_DLC_APT_Stilts_A_Bedroom";
					break;
				
				case 73:
					sVar0 = "SE_DLC_APT_Stilts_B_Bedroom";
					break;
				
				case 83:
					sVar0 = "SE_DLC_APT_Custom_Bedroom";
					break;
			}
			break;
		
		case 3:
			switch (func_51(iParam0))
			{
				case 77:
					sVar0 = "SE_DLC_APT_Stilts_A_Heist_Room";
					break;
				
				case 73:
					sVar0 = "SE_DLC_APT_Stilts_B_Heist_Room";
					break;
				
				case 83:
					sVar0 = "SE_DLC_APT_Custom_Heist_Room";
					break;
			}
			break;
		
		case 4:
			switch (func_51(iParam0))
			{
				case 109:
					sVar0 = "DLC_IE_Office_Garage_Radio_01";
					break;
			}
			break;
		
		case 5:
			switch (func_51(iParam0))
			{
				case 109:
					sVar0 = "DLC_IE_Office_Garage_Mod_Shop_Radio_01";
					break;
			}
			break;
	}
	return sVar0;
}

void func_46(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x2C3D
{
	struct<6> Var0[2];
	vector3 vVar1;
	
	Var0[0 /*6*/] = { func_50(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_50(iParam0, bParam4) };
	*uParam2 = { func_48(iParam1, iParam3) };
	vVar1 = { *uParam2 - Var0[0 /*6*/] };
	vVar1 = { func_47(vVar1, -Var0[0 /*6*/].f_3.f_2) };
	vVar1 = { func_47(vVar1, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(Var0[1 /*6*/], 0f, vVar1) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_47(vector3 vParam0, float fParam1)//Position - 0x40F9
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = system::sin(fParam1);
	fVar2 = system::cos(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_48(var uParam0, int iParam1)//Position - 0x413D
{
	struct<6> Var0;
	var uVar1;
	int iVar2;
	
	iVar2 = 0;
	if (func_49(iParam1, &uVar1))
	{
		iVar2 = 1;
	}
	if (iVar2 && unk_0x334C7374628774BC(&Var0, &(Var0.f_3), uParam0, uVar1))
	{
		return Var0;
	}
	return Var0;
}

int func_49(int iParam0, var uParam1)//Position - 0x417F
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_50(int iParam0, bool bParam1)//Position - 0x42A5
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794,9184f, 339,6266f, 200,4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761,0982f, 317,6259f, 169,5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761,1888f, 317,6295f, 216,0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795,3856f, 340,0188f, 152,7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778,5056f, 332,3779f, 212,1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258,1807f, -950,6853f, 70,0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285,0051f, -957,6552f, 85,3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471,882f, -530,7484f, 62,34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471,882f, -530,7484f, 49,72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463,15f, -540,2369f, 74,2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885,3702f, -451,4775f, 119,327f };
			Var0.f_3 = { 0f, 0f, 27,55617f };
			break;
		
		case 36:
			Var0 = { -913,0385f, -438,4284f, 114,3997f };
			Var0.f_3 = { 0f, 0f, -153,3093f };
			break;
		
		case 37:
			Var0 = { -892,5499f, -430,4789f, 88,25368f };
			Var0.f_3 = { 0f, 0f, 116,9193f };
			break;
		
		case 38:
			Var0 = { -35,0462f, -576,317f, 82,90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10,3788f, -590,7431f, 93,02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22,2487f, -589,1461f, 80,2305f };
			Var0.f_3 = { 0f, 0f, 69,88f };
			break;
		
		case 40:
			Var0 = { -900,6311f, -376,7462f, 78,27306f };
			Var0.f_3 = { 0f, 0f, 26,92611f };
			break;
		
		case 41:
			Var0 = { -929,483f, -374,5104f, 102,2329f };
			Var0.f_3 = { 0f, 0f, -152,5531f };
			break;
		
		case 63:
			Var0 = { -914,4202f, -375,8189f, 114,4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617,1647f, 64,6042f, 100,8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584,2015f, 42,7133f, 86,4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609,5665f, 50,2203f, 98,3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171,3969f, 494,2671f, 134,4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339,4982f, 434,0887f, 146,2206f };
			Var0.f_3 = { 0f, 0f, -63,5f };
			break;
		
		case 75:
			Var0 = { -761,3884f, 615,7333f, 140,9805f };
			Var0.f_3 = { 0f, 0f, -71,5f };
			break;
		
		case 76:
			Var0 = { -678,1752f, 591,0076f, 142,2196f };
			Var0.f_3 = { 0f, 0f, 40,5f };
			break;
		
		case 77:
			Var0 = { 120,0541f, 553,793f, 181,0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571,4039f, 655,2008f, 142,6293f };
			Var0.f_3 = { 0f, 0f, -14,5f };
			break;
		
		case 79:
			Var0 = { -742,2565f, 587,6547f, 143,0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857,2222f, 685,051f, 149,6502f };
			Var0.f_3 = { 0f, 0f, 4,5f };
			break;
		
		case 81:
			Var0 = { -1287,65f, 443,2707f, 94,6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374,2012f, 416,9688f, 142,6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787,7805f, 334,9232f, 186,1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787,7805f, 334,9232f, 215,8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773,2258f, 322,8252f, 194,8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573,098f, -4085,806f, 9,7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342,8157f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260,3297f, -997,4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572,187f, -570,8315f, 109,9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383,954f, -476,7112f, 73,507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138,0029f, -629,739f, 170,2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74,8895f, -817,6883f, 244,8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100,764f, -3159,384f, -34,9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005,806f, -3157,67f, -36,0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576,571f, -569,7595f, 85,5f };
				Var0.f_3 = { 0f, 0f, 36,1f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571,254f, -566,5865f, 85,5f };
				Var0.f_3 = { 0f, 0f, -53,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568,098f, -571,9171f, 85,5f };
				Var0.f_3 = { 0f, 0f, -143,9f };
			}
			else
			{
				Var0 = { -1578,022f, -576,4251f, 104,2f };
				Var0.f_3 = { 0f, 0f, -144,04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384,518f, -475,8657f, 56,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384,538f, -475,8829f, 48,1f };
				Var0.f_3 = { 0f, 0f, 98,7f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378,994f, -477,2481f, 56,1f };
				Var0.f_3 = { 0f, 0f, -81,1f };
			}
			else
			{
				Var0 = { -1391,245f, -473,9638f, 77,2f };
				Var0.f_3 = { 0f, 0f, 98,86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186,5683f, -576,4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96,16f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113,886f, -564,3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110,96f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134,6568f, -635,1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9,04f };
			}
			else
			{
				Var0 = { -146,6167f, -596,6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79,0479f, -822,6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70,3086f, -819,5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79,9861f, -818,425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73,904f, -821,6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_51(int iParam0)//Position - 0x4E5B
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 109;
			break;
	}
	return -1;
}

void func_52(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x5098
{
	struct<6> Var0[2];
	vector3 vVar1;
	
	if (!bParam3)
	{
		Var0[0 /*6*/] = { func_53(-1) };
	}
	else
	{
		Var0[0 /*6*/] = { Global_4006552[iParam0 /*45*/].f_4 };
		Var0[0 /*6*/].f_3 = { 0f, 0f, Global_4006552[iParam0 /*45*/].f_7 };
	}
	if (!bParam3)
	{
		Var0[1 /*6*/] = { func_53(iParam0) };
	}
	else
	{
		Var0[1 /*6*/] = { Global_4006552[iParam0 /*45*/].f_4 };
		Var0[1 /*6*/].f_3 = { 0f, 0f, Global_4006552[iParam0 /*45*/].f_7 };
	}
	*uParam2 = { func_48(iParam1, 86) };
	vVar1 = { *uParam2 - Var0[0 /*6*/] };
	vVar1 = { func_47(vVar1, -Var0[0 /*6*/].f_3.f_2) };
	vVar1 = { func_47(vVar1, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { unk_0x9EA50C5EC175E58E(Var0[1 /*6*/], 0f, vVar1) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 560:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
		case 46:
		case 47:
		case 343:
		case 349:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 201:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 311:
		case 340:
		case 391:
		case 392:
		case 393:
		case 394:
		case 395:
		case 396:
		case 397:
		case 398:
		case 399:
		case 400:
		case 401:
		case 402:
		case 403:
		case 404:
		case 405:
		case 406:
		case 407:
		case 408:
		case 409:
		case 410:
		case 411:
		case 412:
		case 413:
		case 414:
		case 415:
		case 416:
		case 417:
		case 418:
		case 419:
		case 438:
		case 439:
		case 440:
		case 441:
		case 442:
		case 443:
		case 357:
		case 358:
		case 359:
		case 467:
		case 468:
		case 469:
		case 497:
		case 498:
		case 499:
		case 503:
		case 598:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 362:
		case 363:
		case 364:
		case 365:
		case 366:
		case 367:
		case 368:
		case 360:
		case 361:
		case 383:
		case 386:
		case 372:
		case 373:
		case 374:
		case 375:
		case 376:
		case 377:
		case 378:
		case 370:
		case 371:
		case 384:
		case 387:
		case 486:
		case 487:
		case 488:
		case 489:
		case 490:
		case 491:
		case 492:
		case 485:
		case 544:
		case 543:
		case 545:
		case 516:
		case 517:
		case 583:
		case 584:
		case 518:
		case 519:
		case 520:
		case 521:
		case 522:
		case 523:
		case 524:
		case 525:
		case 526:
		case 527:
		case 553:
		case 552:
		case 551:
		case 550:
		case 556:
		case 555:
		case 593:
		case 594:
		case 595:
		case 596:
		case 554:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 597:
		case 118:
		case 117:
		case 599:
		case 600:
		case 601:
		case 602:
		case 603:
		case 604:
		case 605:
		case 606:
		case 607:
		case 608:
		case 609:
		case 610:
		case 612:
		case 618:
		case 624:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

struct<6> func_53(int iParam0)//Position - 0x5A15
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
		case default:
			Var0 = { -1478,436f, -3753,538f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 0:
			Var0 = { -3555,115f, 1473,013f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 1:
			Var0 = { -3147,049f, 2827,088f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 2:
			Var0 = { -3277,473f, 2159,85f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 3:
			Var0 = { -2822,419f, 4054,84f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 4:
			Var0 = { -3249,849f, 3704,681f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 5:
			Var0 = { -2383,193f, 4685,003f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 6:
			Var0 = { -3224,686f, -215,9825f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 7:
			Var0 = { -3447,876f, 291,9275f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 97f };
			break;
		
		case 8:
			Var0 = { -2713,098f, -528,3185f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -33f };
			break;
		
		case 9:
			Var0 = { -1981,618f, -1537,269f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 142f };
			break;
		
		case 10:
			Var0 = { -2100,817f, -2533,233f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -143f };
			break;
		
		case 11:
			Var0 = { -1599,642f, -1891,277f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 112f };
			break;
		
		case 12:
			Var0 = { -733,6151f, -3916,985f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -168f };
			break;
		
		case 13:
			Var0 = { -363,3534f, -3568,56f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		
		case 14:
			Var0 = { -1478,436f, -3753,538f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		
		case 15:
			Var0 = { 1535,974f, -3061,877f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 62f };
			break;
		
		case 16:
			Var0 = { 2471,418f, -2430,93f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 12f };
			break;
		
		case 17:
			Var0 = { 2067,371f, -2813,01f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 18:
			Var0 = { 3021,088f, -1513,602f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		
		case 19:
			Var0 = { 3025,956f, -704,3854f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 20:
			Var0 = { 2961,863f, -2007,631f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		
		case 21:
			Var0 = { 3398,169f, 1958,521f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 77f };
			break;
		
		case 22:
			Var0 = { 3428,681f, 1202,06f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		
		case 23:
			Var0 = { 3787,83f, 2567,884f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		
		case 24:
			Var0 = { 4235,946f, 4004,252f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -118f };
			break;
		
		case 25:
			Var0 = { 4245,151f, 4595,375f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -68f };
			break;
		
		case 26:
			Var0 = { 4209,057f, 3392,705f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		
		case 27:
			Var0 = { 3738,81f, 5768,252f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -43f };
			break;
		
		case 28:
			Var0 = { 3472,966f, 6315,245f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -23f };
			break;
		
		case 29:
			Var0 = { 3693,468f, 5194,659f, 9,7027f };
			Var0.f_3 = { 0f, 0f, 122f };
			break;
		
		case 30:
			Var0 = { 572,9806f, 7142,138f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -58f };
			break;
		
		case 31:
			Var0 = { 2024,036f, 6907,536f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -173f };
			break;
		
		case 32:
			Var0 = { 1377,296f, 6863,23f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		
		case 33:
			Var0 = { -1169,36f, 6000,214f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		
		case 34:
			Var0 = { -759,2205f, 6573,955f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -153f };
			break;
		
		case 35:
			Var0 = { -373,8432f, 6964,86f, 9,7027f };
			Var0.f_3 = { 0f, 0f, -108f };
			break;
	}
	return Var0;
}

int func_54(int iParam0, bool bParam1)//Position - 0x6015
{
	if (func_816(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			return Global_2422736[iParam0 /*420*/].f_276.f_14;
		}
		else
		{
			return Global_2422736[iParam0 /*420*/].f_276.f_16;
		}
	}
	return -1;
}

bool func_55(int iParam0)//Position - 0x6054
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 0);
}

bool func_56(int iParam0)//Position - 0x6071
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 24);
}

int func_57(int iParam0)//Position - 0x608F
{
	if (iParam0 != func_36())
	{
		if (func_816(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_35(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x60D5
{
	if (iParam0 != func_36())
	{
		if (func_816(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_35(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_59(int iParam0, bool bParam1, bool bParam2)//Position - 0x611B
{
	if (bParam2)
	{
		return func_60(unk_0x9EB17624F44A8DA4(), 0);
	}
	if (bParam1)
	{
		if (func_60(unk_0x9EB17624F44A8DA4(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_60(int iParam0, bool bParam1)//Position - 0x61F6
{
	if (Global_1595537 != func_36())
	{
		if (!func_62(Global_1595537))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x9EB17624F44A8DA4() != Global_1595537)
			{
				if (unk_0xC80D31E4B587871C(Global_2422736[Global_1595537 /*420*/].f_210, 24) || func_61(Global_1595537))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 24);
}

int func_61(int iParam0)//Position - 0x6262
{
	if (iParam0 != func_36())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 9);
	}
	return 0;
}

int func_62(int iParam0)//Position - 0x6288
{
	if (iParam0 != func_36())
	{
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_260, 2);
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x62B4
{
	if (iParam0 != func_36())
	{
		if (func_816(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_35(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_64(int iParam0)//Position - 0x62FA
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x6329
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
			return 1;
			break;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)//Position - 0x6352
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 73:
			case 77:
			case 74:
			case 75:
			case 76:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
				return 1;
			
			default:
		}
	}
	else if (iParam1 == 77)
	{
		switch (iParam0)
		{
			case 77:
			case 78:
			case 79:
			case 80:
			case 81:
			case 82:
				return 1;
			
			default:
		}
	}
	else if (iParam1 == 73)
	{
		switch (iParam0)
		{
			case 73:
			case 74:
			case 75:
			case 76:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x640E
{
	switch (iParam0)
	{
		case 86:
			return 1;
			break;
	}
	return 0;
}

void func_68(var uParam0, int iParam1, bool bParam2)//Position - 0x642B
{
	if (bParam2)
	{
		uParam0->f_51 = iParam1;
	}
	else
	{
		uParam0->f_50 = iParam1;
	}
}

void func_69(var uParam0, var uParam1, int iParam2)//Position - 0x6447
{
	if (*uParam0 > 0)
	{
		if ((*uParam1)[*uParam0] == 0)
		{
			if (func_816(unk_0xF6A72924028F588B(*iParam2), 1, 1))
			{
				unk_0x872F1C1F8587CCC7(uParam1[*uParam0], *iParam2);
			}
		}
	}
	iParam2->f_1 = 0;
	iParam2->f_1 = 0;
	while (iParam2->f_1 < 187)
	{
		if ((*uParam1)[iParam2->f_1] != 0)
		{
			if (unk_0xC80D31E4B587871C((*uParam1)[iParam2->f_1], *iParam2))
			{
				if (!func_816(unk_0xF6A72924028F588B(*iParam2), 0, 1))
				{
					unk_0x0EE72DB1CD8A3B86(uParam1[iParam2->f_1], *iParam2);
				}
				else
				{
					if (!unk_0xDE597476C8B96D1A(unk_0xF6A72924028F588B(*iParam2)))
					{
						unk_0x0EE72DB1CD8A3B86(uParam1[iParam2->f_1], *iParam2);
					}
					if (*uParam0 != iParam2->f_1)
					{
						unk_0x0EE72DB1CD8A3B86(uParam1[iParam2->f_1], *iParam2);
					}
				}
			}
		}
		iParam2->f_1++;
	}
	*iParam2++;
	if (*iParam2 >= 32)
	{
		*iParam2 = 0;
	}
}

void func_70(int iParam0)//Position - 0x652B
{
	Local_297 = iParam0;
}

int func_71()//Position - 0x6538
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		bVar1 = false;
		iVar4 = (iVar2 + func_204(11));
		func_203(iVar4, &iVar3, 0);
		if (Local_927.f_55 == unk_0x9EB17624F44A8DA4())
		{
			if ((iVar3 >= 0 && Global_1320310[iVar3 /*141*/].f_66 != 0) && func_194(Global_1320310[iVar3 /*141*/].f_66, 1))
			{
				if (((((!unk_0xC80D31E4B587871C(Global_1320310[iVar3 /*141*/].f_102, 0) && !unk_0xC80D31E4B587871C(Global_1320310[iVar3 /*141*/].f_102, 1)) && !unk_0xC80D31E4B587871C(Global_1320310[iVar3 /*141*/].f_102, 6)) && !unk_0xC80D31E4B587871C(Global_1320310[iVar3 /*141*/].f_102, 23)) && Global_2512808.f_871 != iVar3) && !Local_927.f_875)
				{
					if (unk_0xC80D31E4B587871C(Global_1320310[iVar3 /*141*/].f_102, 12))
					{
						if (!func_193(&(Local_785[iVar2 /*2*/])))
						{
							func_192(&(Local_785[iVar2 /*2*/]), 1, 0);
						}
						if (unk_0x918CA1BFFAA03556(Local_297.f_352[iVar2]))
						{
							if (func_190(Local_297.f_352[iVar2]))
							{
								if (unk_0x37956F2B588E40E6(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) != 2)
								{
									if (unk_0xE53FD7AF7F25C0A8(Local_297.f_352[iVar2]))
									{
										unk_0x4BEFCD5DAE410A90(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2]), 2);
									}
									else
									{
										unk_0x04092215B40E1262(Local_297.f_352[iVar2]);
									}
								}
								if (func_188(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2]), 1, 1, 0, 0, 0, 1, 0) || func_187(&(Local_785[iVar2 /*2*/]), 3000, 1))
								{
									if (unk_0xE53FD7AF7F25C0A8(Local_297.f_352[iVar2]))
									{
										if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("phantom2"))
										{
											bLocal_774 = false;
										}
										else if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("dune5"))
										{
											bLocal_775 = false;
										}
										func_186(&(Local_297.f_352[iVar2]));
										Local_297.f_258[iVar2] = -1;
										Local_297.f_245 = (Local_297.f_245 - 1);
										unk_0x7BC094E5B24A760D((unk_0x9E883378D9B4735D(false, 0) - 1));
										unk_0x0EE72DB1CD8A3B86(&(Local_297.f_247), iVar2);
										unk_0x0EE72DB1CD8A3B86(&(Global_1320310[iVar3 /*141*/].f_102), 12);
									}
									else
									{
										unk_0x04092215B40E1262(Local_297.f_352[iVar2]);
									}
								}
							}
							else if (unk_0xE53FD7AF7F25C0A8(Local_297.f_352[iVar2]))
							{
								if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("phantom2"))
								{
									bLocal_774 = false;
								}
								else if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("dune5"))
								{
									bLocal_775 = false;
								}
								func_186(&(Local_297.f_352[iVar2]));
								Local_297.f_258[iVar2] = -1;
								Local_297.f_245 = (Local_297.f_245 - 1);
								unk_0x7BC094E5B24A760D((unk_0x9E883378D9B4735D(false, 0) - 1));
								unk_0x0EE72DB1CD8A3B86(&(Local_297.f_247), iVar2);
								unk_0x0EE72DB1CD8A3B86(&(Global_1320310[iVar3 /*141*/].f_102), 12);
							}
							else
							{
								unk_0x04092215B40E1262(Local_297.f_352[iVar2]);
							}
						}
						else
						{
							unk_0x0EE72DB1CD8A3B86(&(Global_1320310[iVar3 /*141*/].f_102), 12);
						}
					}
					else if (!unk_0xC80D31E4B587871C(Global_1320310[iVar3 /*141*/].f_102, 10))
					{
						if (unk_0xC80D31E4B587871C(Global_1320310[iVar3 /*141*/].f_102, 8))
						{
							bVar0 = true;
						}
						else
						{
							bVar0 = false;
						}
						func_182(iVar3);
						if (!func_180(Global_1320310[iVar3 /*141*/].f_66))
						{
							func_156(iVar3, -1);
						}
						else if (!func_74(Global_1320310[iVar3 /*141*/], iVar2, iVar3, bVar0))
						{
							return 0;
						}
						else if (Global_1320310[iVar3 /*141*/].f_66 == joaat("phantom2"))
						{
							bLocal_774 = true;
						}
						else if (Global_1320310[iVar3 /*141*/].f_66 == joaat("dune5"))
						{
							bLocal_775 = true;
						}
						func_73(&(Local_785[iVar2 /*2*/]));
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (iVar3 >= 0 && unk_0xC80D31E4B587871C(Global_1320310[iVar3 /*141*/].f_102, 23))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				if (unk_0x918CA1BFFAA03556(Local_297.f_352[iVar2]))
				{
					if (func_190(Local_297.f_352[iVar2]))
					{
						if (unk_0x37956F2B588E40E6(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) != 2)
						{
							if (unk_0xE53FD7AF7F25C0A8(Local_297.f_352[iVar2]))
							{
								unk_0x4BEFCD5DAE410A90(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2]), 2);
							}
							else
							{
								unk_0x04092215B40E1262(Local_297.f_352[iVar2]);
							}
						}
						if (!func_193(&(Local_785[iVar2 /*2*/])))
						{
							func_192(&(Local_785[iVar2 /*2*/]), 1, 0);
						}
						if (func_188(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2]), 1, 1, 0, 0, 0, 1, 0) || func_187(&(Local_785[iVar2 /*2*/]), 3000, 1))
						{
							if (unk_0xE53FD7AF7F25C0A8(Local_297.f_352[iVar2]))
							{
								if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("phantom2"))
								{
									bLocal_774 = false;
								}
								else if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("dune5"))
								{
									bLocal_775 = false;
								}
								func_186(&(Local_297.f_352[iVar2]));
								unk_0x7BC094E5B24A760D((unk_0x9E883378D9B4735D(false, 0) - 1));
								Local_297.f_245 = (Local_297.f_245 - 1);
								unk_0x0EE72DB1CD8A3B86(&(Local_297.f_247), iVar2);
								if (iVar3 >= 0)
								{
									unk_0x0EE72DB1CD8A3B86(&(Global_1320310[iVar3 /*141*/].f_102), 12);
								}
								Local_297.f_258[iVar2] = -1;
							}
							else
							{
								if (iVar3 >= 0)
								{
									if (!unk_0xC80D31E4B587871C(Global_1320310[iVar3 /*141*/].f_102, 12))
									{
										unk_0x872F1C1F8587CCC7(&(Global_1320310[iVar3 /*141*/].f_102), 12);
									}
								}
								unk_0x04092215B40E1262(Local_297.f_352[iVar2]);
							}
						}
						else if (func_816(unk_0x9EB17624F44A8DA4(), 1, 1))
						{
							if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2]), 0))
							{
								unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 512);
							}
						}
					}
					else if (unk_0xE53FD7AF7F25C0A8(Local_297.f_352[iVar2]))
					{
						if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("phantom2"))
						{
							bLocal_774 = false;
						}
						else if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("dune5"))
						{
							bLocal_775 = false;
						}
						func_186(&(Local_297.f_352[iVar2]));
						unk_0x7BC094E5B24A760D((unk_0x9E883378D9B4735D(false, 0) - 1));
						Local_297.f_245 = (Local_297.f_245 - 1);
						unk_0x0EE72DB1CD8A3B86(&(Local_297.f_247), iVar2);
						Local_297.f_258[iVar2] = -1;
					}
					else
					{
						unk_0x04092215B40E1262(Local_297.f_352[iVar2]);
					}
				}
				else
				{
					func_73(&(Local_785[iVar2 /*2*/]));
				}
			}
		}
		else if (Local_927.f_55 != func_36())
		{
			if (func_816(Local_927.f_55, 0, 1))
			{
				if (!unk_0xDE597476C8B96D1A(Local_927.f_55))
				{
					if (Global_1595693[Local_927.f_55 /*680*/].f_566 == Local_297.f_258[iVar2] && Local_297.f_258[iVar2] >= 0)
					{
						if (unk_0x918CA1BFFAA03556(Local_297.f_352[iVar2]))
						{
							if (func_190(Local_297.f_352[iVar2]))
							{
								if (!func_193(&(Local_785[iVar2 /*2*/])))
								{
									func_192(&(Local_785[iVar2 /*2*/]), 1, 0);
								}
								if (unk_0xE53FD7AF7F25C0A8(Local_297.f_352[iVar2]))
								{
									if (unk_0x37956F2B588E40E6(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) != 2)
									{
										unk_0x4BEFCD5DAE410A90(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2]), 2);
									}
								}
								if (func_188(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2]), 1, 1, 0, 0, 0, 1, 0) || func_187(&(Local_785[iVar2 /*2*/]), 3000, 1))
								{
									if (unk_0xE53FD7AF7F25C0A8(Local_297.f_352[iVar2]))
									{
										if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("phantom2"))
										{
											bLocal_774 = false;
										}
										else if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("dune5"))
										{
											bLocal_775 = false;
										}
										func_186(&(Local_297.f_352[iVar2]));
										Local_297.f_258[iVar2] = -1;
										unk_0x7BC094E5B24A760D((unk_0x9E883378D9B4735D(false, 0) - 1));
										Local_297.f_245 = (Local_297.f_245 - 1);
										unk_0x0EE72DB1CD8A3B86(&(Local_297.f_247), iVar2);
										if (iVar3 >= 0)
										{
											unk_0x0EE72DB1CD8A3B86(&(Global_1320310[iVar3 /*141*/].f_102), 12);
										}
									}
									else
									{
										unk_0x04092215B40E1262(Local_297.f_352[iVar2]);
									}
								}
								else if (func_816(unk_0x9EB17624F44A8DA4(), 1, 1))
								{
									if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2]), 0))
									{
										unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 512);
									}
								}
							}
							else if (unk_0xE53FD7AF7F25C0A8(Local_297.f_352[iVar2]))
							{
								if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("phantom2"))
								{
									bLocal_774 = false;
								}
								else if (unk_0x82FF3DFBC3965CC0(unk_0xF32FBF2453AC1753(Local_297.f_352[iVar2])) == joaat("dune5"))
								{
									bLocal_775 = false;
								}
								func_186(&(Local_297.f_352[iVar2]));
								Local_297.f_258[iVar2] = -1;
								unk_0x7BC094E5B24A760D((unk_0x9E883378D9B4735D(false, 0) - 1));
								Local_297.f_245 = (Local_297.f_245 - 1);
								unk_0x0EE72DB1CD8A3B86(&(Local_297.f_247), iVar2);
								if (iVar3 >= 0)
								{
									unk_0x0EE72DB1CD8A3B86(&(Global_1320310[iVar3 /*141*/].f_102), 12);
								}
							}
							else
							{
								unk_0x04092215B40E1262(Local_297.f_352[iVar2]);
							}
						}
						else
						{
							if (iVar2 == func_72(joaat("phantom2")))
							{
								bLocal_774 = false;
							}
							else if (iVar2 == func_72(joaat("dune5")))
							{
								bLocal_775 = false;
							}
							func_73(&(Local_785[iVar2 /*2*/]));
						}
					}
					else if (unk_0x918CA1BFFAA03556(Local_297.f_352[iVar2]))
					{
						if (iVar2 == func_72(joaat("phantom2")))
						{
							bLocal_774 = true;
						}
						else if (iVar2 == func_72(joaat("dune5")))
						{
							bLocal_775 = true;
						}
					}
					else if (iVar2 == func_72(joaat("phantom2")))
					{
						bLocal_774 = false;
					}
					else if (iVar2 == func_72(joaat("dune5")))
					{
						bLocal_775 = false;
					}
				}
			}
		}
		if (!unk_0x918CA1BFFAA03556(Local_297.f_352[iVar2]))
		{
			if (unk_0xC80D31E4B587871C(Local_297.f_246, iVar2))
			{
				Local_297.f_248 = (Local_297.f_248 - 1);
				unk_0x0EE72DB1CD8A3B86(&(Local_297.f_247), iVar2);
				unk_0x0EE72DB1CD8A3B86(&(Local_297.f_246), iVar2);
				Local_297.f_249[iVar2] = 0;
			}
			func_73(&(Local_785[iVar2 /*2*/]));
		}
		iVar2++;
	}
	return 1;
}

int func_72(int iParam0)//Position - 0x6F4D
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

void func_73(var uParam0)//Position - 0x6FD6
{
	uParam0->f_1 = 0;
}

int func_74(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, bool bParam14)//Position - 0x6FE3
{
	int iVar0;
	int iVar1;
	
	if (!func_190(Local_297.f_352[iParam12]))
	{
		if (unk_0xA8698D7EBA72C3DA(Param0.f_66))
		{
			if (func_11(Param0.f_66))
			{
				if (func_155(unk_0x9E883378D9B4735D(false, 0) + 1, 0, 1))
				{
					if (!unk_0xC80D31E4B587871C(Local_297.f_247, iParam12))
					{
						unk_0x7BC094E5B24A760D(unk_0x9E883378D9B4735D(false, 0) + 1);
						Local_297.f_245++;
						unk_0x872F1C1F8587CCC7(&(Local_297.f_247), iParam12);
					}
					func_151(vLocal_792[iParam12 /*3*/]);
					if (!func_150())
					{
						return 0;
					}
					if (unk_0xC80D31E4B587871C(Local_297.f_247, iParam12))
					{
						if (unk_0xF51EA69EE19061E6(0, 1, 0, 0))
						{
							if (unk_0x78E929955680CA05())
							{
								unk_0xCC06E2EDC5BE3D1B(1);
							}
							iVar0 = unk_0xEA60F3B426BB095B(Param0.f_66, vLocal_792[iParam12 /*3*/], fLocal_784[iParam12], 1, 1, 0);
							Local_297.f_352[iParam12] = unk_0x278BFDB9CDC5B182(iVar0);
							unk_0xFBA991D3A851E195(iVar0, 1);
							Local_297.f_249[iParam12] = 0;
							if (bParam14)
							{
								func_146(&iVar0, iParam13);
							}
							else
							{
								func_75(&iVar0, iParam13);
								unk_0x872F1C1F8587CCC7(&(Local_297.f_249[iParam12]), 0);
							}
							Local_297.f_258[iParam12] = iParam13;
							unk_0xB2CBFA871D3387B6(iVar0, 1);
							unk_0xD8D940C0BFD3E1EC(iVar0, 0);
							unk_0x534F33E6F7996EFF(iVar0, 0);
							unk_0xBAB8785EE2F06BBE(iVar0, 1);
							unk_0xB4EE449F8D361B88(iVar0, 1);
							if (Local_927.f_55 != func_36())
							{
								if (func_816(Local_927.f_55, 0, 0))
								{
									unk_0x4B71BC2F3CC0D5B4(iVar0, Local_927.f_55, 0);
								}
							}
							unk_0xB3C8DB09F4A4DE89(iVar0);
							unk_0xE01CE1EBCD7EE551(iVar0, 1000, 0);
							unk_0xB38E13EF2EC6F0E9(iVar0, 1000f);
							unk_0xC7C8A97B94385008(iVar0, 1000f);
							unk_0xF95D8D0BCEC9D59A(iVar0, 0f);
							unk_0xF80DF4F5C0773B3B(iVar0, 1);
							unk_0xA96927E135958D05(iVar0, 1);
							unk_0x0EE72DB1CD8A3B86(&(Local_297.f_246), iParam12);
							unk_0x94433067C90B34A5(iVar0, 0);
							unk_0xB3A8974D2C811672(iVar0, false, 0);
							if ((Param0.f_66 == joaat("dune5") || Param0.f_66 == joaat("boxville5")) || Param0.f_66 == joaat("wastelander"))
							{
								unk_0xC0E8D21B09ADD40A(iVar0, 1f);
							}
							if (unk_0x6C5223DB5E5CFD9B("Player_Vehicle", 3))
							{
								if (!unk_0xB80A4DA4C06A76F1(iVar0, "Player_Vehicle"))
								{
									unk_0xD91ED8E8618A1DEF(iVar0, "Player_Vehicle", unk_0xDFD4F88AAFDE2371(unk_0x9EB17624F44A8DA4()));
								}
							}
							if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
							{
								if (unk_0xB80A4DA4C06A76F1(iVar0, "MPBitset"))
								{
									iVar1 = unk_0x2786E663D1846FFC(iVar0, "MPBitset");
								}
								unk_0x872F1C1F8587CCC7(&iVar1, 23);
								unk_0xD91ED8E8618A1DEF(iVar0, "MPBitset", iVar1);
							}
							unk_0xB8D999BCBD1CD195(Local_297.f_352[iParam12], unk_0x9EB17624F44A8DA4(), 0);
							if (unk_0x78E929955680CA05())
							{
								unk_0xCC06E2EDC5BE3D1B(0);
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xC80D31E4B587871C(Local_297.f_246, iParam12))
	{
		if (!unk_0xC80D31E4B587871C(Local_297.f_249[iParam12], 1))
		{
			iVar0 = unk_0xF32FBF2453AC1753(Local_297.f_352[iParam12]);
			if (unk_0xE53FD7AF7F25C0A8(Local_297.f_352[iParam12]))
			{
				if (!unk_0xC80D31E4B587871C(Local_297.f_249[iParam12], 0))
				{
					if (bParam14)
					{
						if (func_146(&iVar0, iParam13))
						{
							unk_0x872F1C1F8587CCC7(&(Local_297.f_249[iParam12]), 0);
						}
					}
					else
					{
						func_75(&iVar0, iParam13);
						unk_0x872F1C1F8587CCC7(&(Local_297.f_249[iParam12]), 0);
					}
				}
				else if (unk_0x6D52B6D3EDFD5E96(iVar0))
				{
					unk_0xACE486395AA1867D(iVar0, 1084227584);
					unk_0x872F1C1F8587CCC7(&(Local_297.f_249[iParam12]), 1);
					Local_297.f_248++;
					unk_0x872F1C1F8587CCC7(&(Local_297.f_246), iParam12);
					unk_0xB3A8974D2C811672(iVar0, true, 0);
					unk_0x27EE59BB453A0795(iVar0, 0, 0f);
					unk_0x27EE59BB453A0795(iVar0, 1, 0f);
					unk_0x27EE59BB453A0795(iVar0, 2, 0f);
					unk_0x27EE59BB453A0795(iVar0, 3, 0f);
					unk_0x27EE59BB453A0795(iVar0, 4, 0f);
					unk_0x27EE59BB453A0795(iVar0, 5, 0f);
					unk_0xF8EDB82DC12C2722(iVar0, 0);
					unk_0x14776E43F90DD454(Param0.f_66);
					unk_0x4BEFCD5DAE410A90(iVar0, 1);
					unk_0xB4EE449F8D361B88(iVar0, 1);
					if (Local_927.f_55 != func_36())
					{
						if (func_816(Local_927.f_55, 0, 0))
						{
							unk_0x4B71BC2F3CC0D5B4(iVar0, Local_927.f_55, 0);
						}
					}
					unk_0xF80DF4F5C0773B3B(iVar0, 1);
					unk_0xA96927E135958D05(iVar0, 1);
				}
			}
			else
			{
				unk_0x04092215B40E1262(Local_297.f_352[iParam12]);
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_75(int iParam0, int iParam1)//Position - 0x73D2
{
	func_89(*iParam0, &(Global_1320310[iParam1 /*141*/]), 1, 1, 0);
	func_76(iParam0, iParam1);
}

void func_76(var uParam0, int iParam1)//Position - 0x73F4
{
	if (unk_0xC80D31E4B587871C(Global_1320310[iParam1 /*141*/].f_102, 2))
	{
		func_88(*uParam0);
	}
	if (unk_0xC80D31E4B587871C(Global_1320310[iParam1 /*141*/].f_102, 3))
	{
		func_87();
		unk_0x872F1C1F8587CCC7(&(Global_1320310[iParam1 /*141*/].f_102), 3);
		func_86(*uParam0, 1, 0);
		func_77(88, 3, 0);
	}
	unk_0xDFC63F22B454FFF5(*uParam0, &(Global_1320310[iParam1 /*141*/].f_121));
	unk_0x0EE72DB1CD8A3B86(&(Global_1320310[iParam1 /*141*/].f_102), 14);
}

void func_77(int iParam0, int iParam1, bool bParam2)//Position - 0x746D
{
	Global_3009 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_79();
		if (iParam1 == 4)
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[2] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1 && Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_70856)
			{
				if (iParam1 != 4)
				{
					if (Global_14453 != iParam1)
					{
						Global_2982[iParam1 /*4*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2999[iParam1] = 1;
						Global_3004[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14453)
					{
					}
					else
					{
						Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2933[1 /*6*/].f_5 = iParam1;
						func_78();
					}
				}
				else
				{
					Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
					Global_2933[1 /*6*/].f_5 = iParam1;
					func_78();
				}
			}
			else
			{
				Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
				Global_2933[1 /*6*/].f_5 = iParam1;
				func_78();
			}
		}
	}
}

void func_78()//Position - 0x7617
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0xB2E1B414DD88808E(&(Global_104555.f_28020[Global_3009 /*29*/].f_7)), 64);
	if (Global_3028 == 0)
	{
		unk_0xE3C33644878DCCFD("");
		StringCopy(&cVar1, unk_0xB2E1B414DD88808E(&(Global_2933[1 /*6*/])), 64);
		sVar2 = unk_0xB2E1B414DD88808E("CELL_253");
		unk_0x9F42263EE935D84B(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0xE3C33644878DCCFD("CELL_255");
		unk_0xA6D2B267C377D7B2(&(Global_2933[1 /*6*/]));
		unk_0x9F42263EE935D84B(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 0);
}

void func_79()//Position - 0x7698
{
	if (func_85(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_80();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_80()//Position - 0x773A
{
	func_81();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_81()//Position - 0x7753
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_84(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_83(unk_0xFC1458A37D98B502());
			if (func_82(iVar0) && (!func_85(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_82(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_82(int iParam0)//Position - 0x7850
{
	return iParam0 < 3;
}

int func_83(int iParam0)//Position - 0x785C
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_84(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_84(int iParam0)//Position - 0x7899
{
	if (func_82(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_85(int iParam0)//Position - 0x78C3
{
	return Global_35861 == iParam0;
}

int func_86(int iParam0, bool bParam1, int iParam2)//Position - 0x78D1
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (bParam1)
		{
			if (unk_0x6C5223DB5E5CFD9B("bombowner", 3))
			{
				if (unk_0x6C5223DB5E5CFD9B("bombdec1", 3))
				{
					if (iParam2 == 0)
					{
						if (!unk_0xB80A4DA4C06A76F1(iParam0, "bombdec1"))
						{
							unk_0xD91ED8E8618A1DEF(iParam0, "bombdec1", 1);
						}
					}
				}
				if (unk_0x6C5223DB5E5CFD9B("bombdec", 3))
				{
					if (iParam2 == 1)
					{
						if (!unk_0xB80A4DA4C06A76F1(iParam0, "bombdec"))
						{
							unk_0xD91ED8E8618A1DEF(iParam0, "bombdec", 1);
						}
					}
				}
				if (!unk_0xB80A4DA4C06A76F1(iParam0, "bombowner"))
				{
					iVar0 = unk_0x8B948C59217A295D(unk_0xDE2D3B9654C31EB3(unk_0x9EB17624F44A8DA4()));
					unk_0xD91ED8E8618A1DEF(iParam0, "bombowner", iVar0);
					if (iParam2 == 0)
					{
						unk_0xA76B8F315E8D3DAA(iParam0);
					}
				}
				if (unk_0xB80A4DA4C06A76F1(iParam0, "bombowner"))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "bombdec"))
			{
				unk_0x48F91F7D1A76332F(iParam0, "bombdec");
			}
			if (unk_0xB80A4DA4C06A76F1(iParam0, "bombowner"))
			{
				unk_0x48F91F7D1A76332F(iParam0, "bombowner");
			}
			return 1;
		}
	}
	return 0;
}

void func_87()//Position - 0x79CA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 194)
	{
		if (unk_0xC80D31E4B587871C(Global_1320310[iVar0 /*141*/].f_102, 3))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_1320310[iVar0 /*141*/].f_102), 3);
		}
		iVar0++;
	}
}

void func_88(int iParam0)//Position - 0x7A06
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
			{
				if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
				}
				unk_0x872F1C1F8587CCC7(&iVar0, 3);
				unk_0xD91ED8E8618A1DEF(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

void func_89(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7A5A
{
	float fVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if ((unk_0x3A711520F83BAE98() && unk_0xA0BF73C5030D3F60(iParam0)) || !unk_0x3A711520F83BAE98())
		{
			if (unk_0x9EB17624F44A8DA4() != func_36())
			{
				uParam1->f_100 = unk_0x9EB17624F44A8DA4();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_133(iParam0, uParam1, bParam2, bParam3);
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				unk_0xE4EBBA4B7963CF11(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0x0350E7E17BA767D0(iParam0, uParam1->f_79);
			}
			if (func_132(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			unk_0xC0E8D21B09ADD40A(iParam0, uParam1->f_80);
			unk_0xA55CFA87817BA13C(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				unk_0x30EC93EA9652E614(iParam0, uParam1->f_99);
			}
			if (unk_0x0CFF4507733D0695(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x5130A4950F299B63(iParam0, uParam1->f_98);
			}
			if (unk_0xC80D31E4B587871C(uParam1->f_95, 0))
			{
				func_106(iParam0, &(uParam1->f_81));
			}
			if ((!func_97(4) && !bParam4) && !unk_0x4916190900E76373())
			{
				func_91(iParam0);
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0xC80D31E4B587871C(uParam1->f_95, 1) && unk_0xC80D31E4B587871C(uParam1->f_95, 2))
					{
						if (unk_0xC80D31E4B587871C(uParam1->f_95, 3))
						{
						}
					}
					else if (unk_0x6C5223DB5E5CFD9B("Player_Vehicle", 3))
					{
						unk_0xD91ED8E8618A1DEF(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (unk_0xC80D31E4B587871C(uParam1->f_95, 1) && unk_0xC80D31E4B587871C(uParam1->f_95, 2))
					{
						if (unk_0x6C5223DB5E5CFD9B("Veh_Modded_By_Player", 3))
						{
							unk_0xD91ED8E8618A1DEF(iParam0, "Veh_Modded_By_Player", unk_0xDFD4F88AAFDE2371(unk_0x9EB17624F44A8DA4()));
						}
					}
					else if (unk_0x6C5223DB5E5CFD9B("Veh_Modded_By_Player", 3))
					{
						if (func_90(uParam1->f_81) && unk_0xC3E4E13EDB2F7D88(&(uParam1->f_81)))
						{
							unk_0xD91ED8E8618A1DEF(iParam0, "Veh_Modded_By_Player", unk_0xDFD4F88AAFDE2371(unk_0x8A6F53F45F2ECE78(&(uParam1->f_81))));
						}
						else
						{
							unk_0xD91ED8E8618A1DEF(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_90(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x7C9B
{
	return unk_0xA024F2175B7F181A(&uParam0, 13);
}

void func_91(int iParam0)//Position - 0x7CAB
{
	vector3 vVar0;
	
	if (Global_262145.f_18981)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0))
		{
			if (unk_0x0D4BF24EE51A419A(iParam0))
			{
				vVar0.x = unk_0x82FF3DFBC3965CC0(iParam0);
				vVar0.y = unk_0x8B948C59217A295D(unk_0xF2D2D6860D636A58(iParam0));
				if (unk_0x6C5223DB5E5CFD9B("RandomID", 3))
				{
					if (!unk_0xB80A4DA4C06A76F1(iParam0, "RandomID"))
					{
						vVar0.z = unk_0x63A6486593EC7EC3(0, 65535);
						unk_0xD91ED8E8618A1DEF(iParam0, "RandomID", vVar0.z);
					}
					else
					{
						vVar0.z = unk_0x2786E663D1846FFC(iParam0, "RandomID");
					}
				}
				func_92(vVar0);
			}
		}
	}
}

void func_92(vector3 vParam0)//Position - 0x7D3A
{
	vector3 vVar0;
	
	vVar0.x = 1293153302;
	vVar0.y = unk_0x9EB17624F44A8DA4();
	vVar0.z = vParam0.x;
	vVar0.f_2.f_1 = vParam0.y;
	vVar0.f_2.f_2 = vParam0.z;
	unk_0x5A26F0BDEE9F8260(1, &vVar0, 5, func_93(1, 1));
}

int func_93(int iParam0, bool bParam1)//Position - 0x7D79
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_816(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_94(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_94(int iParam0, int iParam1)//Position - 0x7DDE
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_95(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_95(int iParam0, bool bParam1)//Position - 0x7E29
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_96();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_96()//Position - 0x7E6A
{
	return Global_1312736;
}

int func_97(int iParam0)//Position - 0x7E76
{
	int iVar0;
	
	if (func_105())
	{
		iVar0 = 0;
		while (iVar0 < 48)
		{
			if (func_104(iVar0) == iParam0)
			{
				if (func_98(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_98(int iParam0)//Position - 0x7EB1
{
	return func_99(iParam0, 6, 1);
}

int func_99(int iParam0, int iParam1, bool bParam2)//Position - 0x7EC1
{
	if (bParam2)
	{
		return unk_0xC80D31E4B587871C(Global_92885.f_1322[iParam0], iParam1);
	}
	else if (unk_0x3A711520F83BAE98())
	{
		if (func_103() == 0)
		{
			return unk_0xC80D31E4B587871C(func_100(func_102(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_104555.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2)//Position - 0x7F21
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_101(iParam1)];
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x7F53
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_96();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

int func_102(int iParam0)//Position - 0x7F87
{
	switch (iParam0)
	{
		case 0:
			return 824;
			break;
		
		case 1:
			return 825;
			break;
		
		case 2:
			return 826;
			break;
		
		case 3:
			return 827;
			break;
		
		case 4:
			return 828;
			break;
		
		case 5:
			return 829;
			break;
		
		case 6:
			return 830;
			break;
		
		case 7:
			return 831;
			break;
		
		case 8:
			return 832;
			break;
		
		case 9:
			return 833;
			break;
		
		case 10:
			return 834;
			break;
		
		case 11:
			return 835;
			break;
		
		case 12:
			return 836;
			break;
		
		case 13:
			return 837;
			break;
		
		case 14:
			return 838;
			break;
		
		case 15:
			return 840;
			break;
		
		case 16:
			return 841;
			break;
		
		case 17:
			return 842;
			break;
		
		case 18:
			return 843;
			break;
		
		case 19:
			return 844;
			break;
		
		case 20:
			return 845;
			break;
		
		case 21:
			return 846;
			break;
		
		case 22:
			return 847;
			break;
		
		case 23:
			return 848;
			break;
		
		case 24:
			return 849;
			break;
		
		case 25:
			return 850;
			break;
		
		case 26:
			return 851;
			break;
		
		case 27:
			return 852;
			break;
		
		case 28:
			return 853;
			break;
		
		case 29:
			return 854;
			break;
		
		case 30:
			return 855;
			break;
		
		case 31:
			return 856;
			break;
		
		case 32:
			return 857;
			break;
		
		case 33:
			return 858;
			break;
		
		case 34:
			return 859;
			break;
		
		case 35:
			return 860;
			break;
		
		case 36:
			return 861;
			break;
		
		case 37:
			return 862;
			break;
		
		case 38:
			return 863;
			break;
		
		case 39:
			return 864;
			break;
		
		case 40:
			return 868;
			break;
		
		case 41:
			return 869;
			break;
		
		case 42:
			return 870;
			break;
		
		case 43:
			return 871;
			break;
		
		case 44:
			return 7013;
			break;
		
		case 45:
			return 3791;
			break;
		
		case 46:
			return 5366;
			break;
		
		case 47:
			return 6138;
			break;
		
		default:
			break;
	}
	return 7872;
}

int func_103()//Position - 0x82DE
{
	return Global_25233;
}

int func_104(int iParam0)//Position - 0x82E9
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
	}
	return 6;
}

bool func_105()//Position - 0x8576
{
	return Global_92885.f_316 > 0;
}

int func_106(int iParam0, var uParam1)//Position - 0x8587
{
	int iVar0;
	int iVar1;
	
	if (!func_116(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar0 = unk_0x462317AD0B0A2C0F(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_114(iParam0))
		{
			iVar1 = unk_0x8A6F53F45F2ECE78(uParam1);
			if (func_109(&iParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_107(iParam0))
	{
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x8604
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar0 = unk_0x462317AD0B0A2C0F(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x3A711520F83BAE98())
			{
				iVar1 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				iVar1 = unk_0x53C562FD2B9E3AB0();
			}
			iVar2 = unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(iVar1, Global_1315707));
			iVar3 = 20000;
			if (Global_1574312)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x2AEE9A692D4A4E2B(iParam0);
				func_108(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_108(int iParam0)//Position - 0x8691
{
	int iVar0;
	
	if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
			}
		}
	}
	if (!unk_0xC80D31E4B587871C(iVar0, 16))
	{
		unk_0x872F1C1F8587CCC7(&iVar0, 16);
		unk_0xD91ED8E8618A1DEF(iParam0, "MPBitset", iVar0);
	}
}

int func_109(int iParam0, int iParam1)//Position - 0x86F4
{
	func_113();
	if (Global_1312466.f_18 != 0 || unk_0xD626A2726109AE5B(*iParam0))
	{
		Global_1669430.f_11 = unk_0x3804EEF9385796BF(*iParam0);
		if (Global_1669430.f_11 < 0f)
		{
			Global_1669430.f_11 = 0f;
		}
	}
	func_111(*iParam0, &Global_1669430, &(Global_1669430.f_1), &(Global_1669430.f_4), &(Global_1669430.f_7), &(Global_1669430.f_10));
	Global_1669430.f_1.f_2 = (Global_1669430.f_1.f_2 - Global_1669430.f_11);
	if (Global_1669430.f_4.f_2 < 0f)
	{
		Global_1669430.f_12 = 1;
	}
	Global_1669430.f_13 = 200;
	if (unk_0x82FF3DFBC3965CC0(*iParam0) == joaat("windsor") || unk_0x82FF3DFBC3965CC0(*iParam0) == 1561920505)
	{
		Global_1669430.f_13 = 255;
	}
	if (Global_1669430.f_12)
	{
		if (func_110(iParam0, iParam1, Global_1669430, Global_1669430.f_1, Global_1669430.f_4, Global_1669430.f_7, Global_1669430.f_10, 0, Global_1669430.f_13))
		{
			if (unk_0x3A711520F83BAE98())
			{
				Global_1315707 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				Global_1315707 = unk_0x53C562FD2B9E3AB0();
			}
			return 1;
		}
	}
	else
	{
		Global_1669430.f_14 = { Global_1669430.f_1 };
		Global_1669430.f_14 = (Global_1669430.f_14 * -1f);
		Global_1669430.f_17 = { Global_1669430.f_4 };
		Global_1669430.f_17 = (Global_1669430.f_17 * -1f);
		Global_1669430.f_20 = { Global_1669430.f_7 };
		Global_1669430.f_20.f_1 = (Global_1669430.f_20.f_1 * -1f);
		Global_1669430.f_20.f_2 = (Global_1669430.f_20.f_2 * -1f);
		if (!unk_0x3F7A17ABD44B7297(*iParam0, 0))
		{
			Global_1669430.f_23 = unk_0x462317AD0B0A2C0F(*iParam0, 0);
		}
		else
		{
			Global_1669430.f_23 = 3;
		}
		Global_1669430.f_24 = unk_0x462317AD0B0A2C0F(*iParam0, 1);
		if (!unk_0x3F7A17ABD44B7297(*iParam0, 1))
		{
			Global_1669430.f_24 = unk_0x462317AD0B0A2C0F(*iParam0, 1);
		}
		else
		{
			Global_1669430.f_24 = 3;
		}
		if (((Global_1669430.f_23 == 0 && func_110(iParam0, iParam1, Global_1669430, Global_1669430.f_1, Global_1669430.f_4, Global_1669430.f_7, Global_1669430.f_10, 0, Global_1669430.f_13)) || Global_1669430.f_23 != 0) && ((Global_1669430.f_24 == 0 && func_110(iParam0, iParam1, Global_1669430, Global_1669430.f_14, Global_1669430.f_17, Global_1669430.f_20, Global_1669430.f_10, 1, Global_1669430.f_13)) || Global_1669430.f_24 != 0))
		{
			if (unk_0x3A711520F83BAE98())
			{
				Global_1315707 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				Global_1315707 = unk_0x53C562FD2B9E3AB0();
			}
			return 1;
		}
	}
	return 0;
}

bool func_110(var uParam0, int iParam1, var uParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5, var uParam6, int iParam7, var uParam8)//Position - 0x899F
{
	return unk_0x65064740B65DB18B(*uParam0, unk_0x25D049AAC4603E65(iParam1), uParam2, vParam3, vParam4, vParam5, uParam6, iParam7, uParam8);
}

int func_111(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x89C8
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0) || !unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0xD323488FDDE4A80F(iParam0, "chassis_dummy");
	if (((!func_112(Global_1669456, 0f, 0f, 0f, 0) && !func_112(Global_1669459, 0f, 0f, 0f, 0)) && !func_112(Global_1669462, 0f, 0f, 0f, 0)) && !Global_1669465 == 0f)
	{
		*uParam2 = { Global_1669456 };
		*uParam3 = { Global_1669459 };
		*uParam4 = { Global_1669462 };
		*uParam5 = Global_1669465;
		return 1;
	}
	switch (unk_0x82FF3DFBC3965CC0(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = unk_0xD323488FDDE4A80F(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = unk_0xD323488FDDE4A80F(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1,5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0,16f, 0,283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0,94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0,08f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1,99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1,49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1,57f, 0,07f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0,09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, -0,11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1,51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1,61f, 0,26f, 0,17f };
			*uParam3 = { 0,9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1,42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1,35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0,96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1,71f, 0,31f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1,32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0,48f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0,98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1,735f, 1,05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2,07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0,46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1,43f, -0,14f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0,33f, 0,08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1,58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1,21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1,36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0,86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1,23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1,833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,515f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1,41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1,74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1,22f, 0,6f, 0,44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1,473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2,26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2,496f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2,286f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0,17f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1,38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1,783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1,23f, 0,11f, -0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1,76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0,11f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1,61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2,352f, 1,003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0,96f, -0,69f, 0,35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0,5f;
			break;
	}
	switch (unk_0x82FF3DFBC3965CC0(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0,18f, 0,1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2,23f, 1f };
			*uParam3 = { 0f, -0,22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0,18f, -0,05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1,52f, 0,99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1,24f, 0,42f, -0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,035f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0,17f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,05f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1,37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0,405f, 0,4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1,143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0,47f, -0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1,683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0,445f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0,335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0,34f, 0,2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0,15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0,0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0,0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0,5325f, 0,245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0,94f, 1,03f };
			*uParam3 = { 0f, -0,03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0,17f, 1f };
			*uParam3 = { 0f, 0,34f, -0,786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2,32f, 0,94f };
			*uParam3 = { 0f, -0,182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1,94f, 1,07f, 0,38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0,2475f, -0,175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = unk_0xD323488FDDE4A80F(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0,27f, -0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1,2f, -0,39f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0,21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0,4f, -0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0,21f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0,42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1,12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0,5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0,15f, -0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0,18f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0,2f, 0,17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0,21f, 0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0,4f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0,06f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0,21f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0,06f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0,06f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0,48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2,103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1,2f, 0,03f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0,06f, 0,565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2,33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0,12f, 0,235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0,03f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0,27f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0,27f, 0,29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0,34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0,335f, 0,31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0,133f, 0,61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0,31f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0,06f, 0,325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0,3f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0,2f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0,18f, 0,37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0,03f, -0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2,352f, 0,253f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0,33f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0,54f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0,9875f, -0,0175f, -0,01f };
			*uParam3 = { 0,8975f, -0,26f, -0,0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0,006f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0,225f, 0,541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0,153f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0,273f, -0,02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0,273f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case -1405937764:
			*uParam2 = { -1f, 0,33f, 0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,2f;
			break;
		
		case 719660200:
			*uParam2 = { -1f, -0,273f, 0,084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -982130927:
			*uParam2 = { -1f, 0,159f, -0,193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 159274291:
			*uParam2 = { -1f, 0,309f, 0,276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case 223240013:
			*uParam2 = { -1f, 0,159f, -0,127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -32236122:
			*uParam2 = { -1f, 0,501f, 0,531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 433954513:
			*uParam2 = { -1,5f, 0,42f, 0,584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 884483972:
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case -1210451983:
			*uParam2 = { 0f, 1,515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case 1356124575:
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case 1504306544:
			*uParam2 = { -1f, 0,201f, 0,114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1939284556:
			*uParam2 = { -1,5f, 0,906f, 0,071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case 917809321:
			*uParam2 = { -1f, 0,441f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 177270108:
			*uParam2 = { -1,3f, 2,045f, 0,802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 387748548:
			*uParam2 = { -1,627f, 2,456f, 0,745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 1392481335:
			*uParam2 = { -1f, 0,186f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case -998177792:
			*uParam2 = { -1f, 0,432f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case -1242608589:
			*uParam2 = { -1f, 0,232f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case 1841130506:
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 2049897956:
			*uParam2 = { 0f, 1,972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case -2118308144:
			*uParam2 = { -2,02f, 6,45f, -0,716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 1483171323:
			*uParam2 = { -1f, -0,291f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case 886810209:
			*uParam2 = { -1f, 0,23f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case -1693015116:
			*uParam2 = { -1,891f, 2,144f, 0,657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -692292317:
			*uParam2 = { -2,127f, 5,413f, 1,132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,34f;
			break;
		
		case -1435527158:
			*uParam2 = { -0,897f, 1,391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -212993243:
			*uParam2 = { -1,51f, 0,71f, 0,451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 1561920505:
			*uParam2 = { -1f, 0,298f, 0,257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,36f;
			break;
		
		case -1848994066:
			*uParam2 = { -1f, 0,181f, -0,066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1741861769:
			*uParam2 = { -1f, 0,301f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1104234922:
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1871995513:
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 1352136073:
			*uParam2 = { -1f, 0,616f, -0,131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -313185164:
			*uParam2 = { -1f, 0f, 0,116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case -2079788230:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 600450546:
			*uParam2 = { -1f, -0,228f, 0,321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -410205223:
			*uParam2 = { -1f, 0,203f, 0,126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case 867799010:
			*uParam2 = { -1f, -0,126f, 0,208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1529242755:
			*uParam2 = { -1f, 0,252f, -0,095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 903794909:
			*uParam2 = { -1f, 0f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1532697517:
			*uParam2 = { -1,3f, 0,18f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case 15219735:
			*uParam2 = { -1f, -0,134f, 0,158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 661493923:
			*uParam2 = { -1f, 0,002f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 838982985:
			*uParam2 = { -1f, -0,175f, 0,242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -391595372:
			*uParam2 = { -1f, 0f, 0,244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case -121446169:
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1909189272:
			*uParam2 = { -1f, 0f, 0,407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,225f;
			break;
		
		case 1617472902:
			*uParam2 = { -1f, 0f, 0,225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -1267543371:
			*uParam2 = { -1f, 0,441f, -0,128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case 931280609:
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case 1046206681:
			*uParam2 = { -1f, 0f, 0,0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case -1259134696:
			*uParam2 = { 0f, 1,592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case 1115909093:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case 1031562256:
			*uParam2 = { -1f, 0,679f, 0,514f };
			*uParam3 = { 1f, 0f, -0,75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case -376434238:
			*uParam2 = { -1,588f, 0,315f, 0,337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -986944621:
			*uParam2 = { -1f, 0f, 0,221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case -1134706562:
			*uParam2 = { -1f, 0f, 0,219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -2120700196:
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case -214906006:
			*uParam2 = { -1f, 0f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case -988501280:
			*uParam2 = { -1f, 0,393f, 0,162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case 1254014755:
			*uParam2 = { -1f, 1,266f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
	}
	return 1;
}

bool func_112(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xC196
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_113()//Position - 0xC1DD
{
	Global_1669430 = 0;
	Global_1669430.f_1 = { 0f, 0f, 0f };
	Global_1669430.f_4 = { 0f, 0f, 0f };
	Global_1669430.f_7 = { 0f, 0f, 0f };
	Global_1669430.f_10 = 0f;
	Global_1669430.f_11 = 0f;
	Global_1669430.f_12 = 0;
	Global_1669430.f_13 = 0;
	Global_1669430.f_14 = { 0f, 0f, 0f };
	Global_1669430.f_17 = { 0f, 0f, 0f };
	Global_1669430.f_20 = { 0f, 0f, 0f };
	Global_1669430.f_23 = 0;
	Global_1669430.f_24 = 0;
}

int func_114(int iParam0)//Position - 0xC256
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (unk_0x3F7A17ABD44B7297(iParam0, 0) || func_115(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_115(int iParam0)//Position - 0xC28E
{
	int iVar0;
	
	if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
				return unk_0xC80D31E4B587871C(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_116(int iParam0, var uParam1)//Position - 0xC2DC
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xA024F2175B7F181A(uParam1, 13) && unk_0xC3E4E13EDB2F7D88(uParam1))
	{
		iVar0 = unk_0x8A6F53F45F2ECE78(uParam1);
	}
	else
	{
		iVar0 = func_36();
	}
	bVar1 = false;
	if (iVar0 == unk_0x9EB17624F44A8DA4())
	{
		if (func_127(15, 0))
		{
			bVar1 = true;
		}
		else if (func_123(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(unk_0x6ADD12BF4D6D2587(iParam0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0)) || !unk_0xA0BF73C5030D3F60(iParam0)) || !unk_0x8E095DA8BB18B959(0, -1, 1)) || !((unk_0xA024F2175B7F181A(uParam1, 13) && unk_0x15DBBAF9E2085C7A()) && unk_0xA84F967541249268(uParam1))) || iVar0 == func_36()) || !func_816(iVar0, 0, 0)) || !bVar1) || func_117(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_117(int iParam0)//Position - 0xC3C3
{
	if (!unk_0x3A711520F83BAE98())
	{
		return 1;
	}
	if (func_119(unk_0x9EB17624F44A8DA4()) == 3)
	{
		if (func_118(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1669455)
	{
		return 1;
	}
	switch (unk_0x82FF3DFBC3965CC0(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (unk_0xF928889F6E5C7677(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (unk_0xF928889F6E5C7677(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case 1234311532:
			return 1;
			break;
		
		case 562680400:
		case 1897744184:
		case -1924433270:
		case 1502869817:
		case -1881846085:
		case 177270108:
		case 387748548:
			return 1;
			break;
		
		case 1489874736:
			return 1;
			break;
	}
	return 0;
}

int func_118(int iParam0)//Position - 0xC586
{
	if (unk_0x6C5223DB5E5CFD9B("FMDeliverableID", 3))
	{
		if (unk_0xB80A4DA4C06A76F1(iParam0, "FMDeliverableID"))
		{
			return unk_0x2786E663D1846FFC(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_119(int iParam0)//Position - 0xC5B5
{
	if (func_122(iParam0) == 233)
	{
		return func_120(iParam0);
	}
	return -1;
}

int func_120(int iParam0)//Position - 0xC5D2
{
	if (func_121(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_176;
	}
	return -1;
}

int func_121(int iParam0, int iParam1)//Position - 0xC5F5
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0)//Position - 0xC630
{
	if (func_121(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

bool func_123(bool bParam0)//Position - 0xC653
{
	return func_124(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_124(int iParam0, bool bParam1)//Position - 0xC665
{
	return func_125(iParam0, bParam1, 1);
}

int func_125(int iParam0, bool bParam1, int iParam2)//Position - 0xC676
{
	int iVar0;
	
	if (iParam0 == func_36())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_126(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_36() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_126(int iParam0, int iParam1)//Position - 0xC6D2
{
	if (iParam0 != func_36())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_36())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_127(int iParam0, bool bParam1)//Position - 0xC721
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	iVar0 = func_129(iParam0);
	iVar1 = iParam0;
	return unk_0xC80D31E4B587871C(iVar0, func_128(iVar1));
}

int func_128(int iParam0)//Position - 0xC751
{
	return (iParam0 % 32);
}

int func_129(int iParam0)//Position - 0xC75E
{
	int iVar0;
	
	iVar0 = func_100(func_130(iParam0), -1, 0);
	return iVar0;
}

int func_130(var uParam0)//Position - 0xC776
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_131(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1287;
			break;
	}
	return 1287;
}

int func_131(int iParam0)//Position - 0xC7A3
{
	return (iParam0 / 32);
}

bool func_132(int iParam0, var uParam1)//Position - 0xC7B0
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case -1523619738:
			*uParam1 = 0,2f;
			break;
		
		case -32878452:
			*uParam1 = 0,15f;
			break;
		
		case -1007528109:
			*uParam1 = 0,3f;
			break;
		
		case -42959138:
			*uParam1 = 0,5f;
			break;
		
		case -1763555241:
			*uParam1 = 0,3f;
			break;
		
		case -749299473:
			*uParam1 = 0,4f;
			break;
		
		case 1565978651:
			*uParam1 = 0,3f;
			break;
		
		case 1036591958:
			*uParam1 = 0,4f;
			break;
		
		case -1386191424:
			*uParam1 = 0,4f;
			break;
		
		case -975345305:
			*uParam1 = 0,4f;
			break;
		
		case -392675425:
			*uParam1 = 0,3f;
			break;
		
		case -1700874274:
			*uParam1 = 0,5f;
			break;
		
		case 1043222410:
			*uParam1 = 0,15f;
			break;
		
		case -1435527158:
			*uParam1 = 0,6f;
			break;
	}
	return *uParam1 != -1f;
}

void func_133(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xC8DD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (!func_144(iParam0))
		{
			if (unk_0x8B948C59217A295D(&(uParam1->f_1)) != 0)
			{
				unk_0xE58BC5B025017AE2(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xD559B6108233E114())
			{
				unk_0xFD5736F667C70A28(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_143(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_143(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xC80D31E4B587871C(uParam1->f_77, func_143(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_143(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0xF6744C962F375B94(iParam0, 0);
			if (unk_0xF928889F6E5C7677(iParam0, 5) != -1)
			{
				unk_0xF6744C962F375B94(iParam0, 1);
			}
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 13))
		{
			unk_0xFAE216A82B56EEF2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xE154D705D18ED685(iParam0);
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 12))
		{
			unk_0x4852153449AFF07A(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x7FAF16725A6EE5F0(iParam0);
		}
		unk_0x1E7A8525FB41AAFE(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xB1AB9FD8B4959960(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xC80D31E4B587871C(uParam1->f_77, 15) || func_142(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_141())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x94D4C393A9825924(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_140(uParam1->f_66))
		{
			unk_0xDAA5C9C59AF4D4EB(iParam0, 0);
		}
		else
		{
			unk_0xDAA5C9C59AF4D4EB(iParam0, 0);
			unk_0xDAA5C9C59AF4D4EB(iParam0, uParam1->f_65);
		}
		unk_0x4D7D93C6E0C1063B(iParam0, !unk_0xC80D31E4B587871C(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x4BEFCD5DAE410A90(iParam0, uParam1->f_70);
		}
		unk_0x7F254E8C9247E923(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x9D1E2B17CE94D0B9(iParam0, 2, unk_0xC80D31E4B587871C(uParam1->f_77, 28));
		unk_0x9D1E2B17CE94D0B9(iParam0, 3, unk_0xC80D31E4B587871C(uParam1->f_77, 29));
		unk_0x9D1E2B17CE94D0B9(iParam0, 0, unk_0xC80D31E4B587871C(uParam1->f_77, 30));
		unk_0x9D1E2B17CE94D0B9(iParam0, 1, unk_0xC80D31E4B587871C(uParam1->f_77, 31));
		unk_0xD2557AC67FBCFB9D(iParam0, unk_0xC80D31E4B587871C(uParam1->f_77, 10));
		if (unk_0xAFB4F670EC043D01(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xC7BF27112709A906(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(iParam0)))
			{
				if (unk_0x125CDF69FA6EF560(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_139(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_139(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x4B004F11F16CA872(iParam0, 1);
			}
			else
			{
				unk_0x54DFCB9F4F68A288(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_134(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xF9DDB1C0875FD9E0(uParam1->f_66) && !unk_0x428C7026AD2721BA(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, func_143(iVar2 + 1)))
				{
					if (!unk_0x7C7056D6F2A31BF6(iParam0, iVar2 + 1))
					{
						unk_0x7B3133EBCD34B431(iParam0, iVar2 + 1, false);
					}
				}
				else if (unk_0x7C7056D6F2A31BF6(iParam0, iVar2 + 1))
				{
					unk_0x7B3133EBCD34B431(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if ((unk_0x82FF3DFBC3965CC0(iParam0) == joaat("sheava") || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("omnis")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("le7b"))
		{
			if (unk_0xF928889F6E5C7677(iParam0, 0) == -1)
			{
				unk_0x7B3133EBCD34B431(iParam0, 1, false);
			}
		}
		if (((unk_0x849A8CFD71854E02(uParam1->f_66) && unk_0x256C25369C3811D6(iParam0)) && !unk_0xB0DA749C8A7CCBBF(iParam0, -2118308144)) && !((((Global_4456448.f_50256 == 6 || Global_4456448.f_50256 == 7) || Global_4456448.f_50256 == 18) || Global_4456448.f_50256 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xC80D31E4B587871C(uParam1->f_77, 23))
			{
				if (unk_0xC80D31E4B587871C(uParam1->f_77, 22))
				{
					unk_0x39748EEC52404AFA(iParam0, 2);
				}
				else
				{
					unk_0x39748EEC52404AFA(iParam0, 3);
				}
			}
			else
			{
				unk_0x39748EEC52404AFA(iParam0, 4);
			}
		}
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 27))
		{
			unk_0x592E07F996BB4B89(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x592E07F996BB4B89(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_134(int iParam0, var uParam1, var uParam2)//Position - 0xCE2D
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xA0A6811A3E4062D1(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4705D420368126DF(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xF928889F6E5C7677(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x75F267954030DBEB(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0xA9EF3F93CBFFF6D0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_138(unk_0x82FF3DFBC3965CC0(*iParam0), 1) && unk_0xF928889F6E5C7677(*iParam0, 24) != func_137(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0xA9EF3F93CBFFF6D0(*iParam0, 24, func_137(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_136(iParam0);
	if (func_135(*iParam0))
	{
		unk_0x9980244E5DAEFED4(*iParam0, 1);
		unk_0x438D30A195B65156(*iParam0, 1);
	}
	return 1;
}

int func_135(int iParam0)//Position - 0xCFAB
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0)) && unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xF928889F6E5C7677(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xDC300345F8ACC8C3(iParam0, iVar1, unk_0xF928889F6E5C7677(iParam0, iVar1)), 16);
				iVar2 = unk_0x8B948C59217A295D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x8B948C59217A295D("MNU_CAGE") || iVar2 == unk_0x8B948C59217A295D("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_136(var uParam0)//Position - 0xD087
{
	switch (unk_0x82FF3DFBC3965CC0(*uParam0))
	{
		case -1700874274:
			if (unk_0xF928889F6E5C7677(*uParam0, 4) == 0)
			{
				unk_0xA9EF3F93CBFFF6D0(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x75F267954030DBEB(*uParam0, 13);
			}
			break;
	}
}

int func_137(int iParam0, int iParam1)//Position - 0xD0C7
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		switch (unk_0x82FF3DFBC3965CC0(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x2E9AFFEE33324CC8(iParam0, 38);
		iVar1 = unk_0x2E9AFFEE33324CC8(iParam0, 24);
		fVar2 = (system::to_float(iParam1 + 1) / system::to_float(iVar0));
		iVar3 = (system::floor((system::to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_138(int iParam0, int iParam1)//Position - 0xD1AC
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13545)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13546)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13544)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13547)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13549)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13548)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17990)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17992)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17996)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17993)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18000)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17998)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18003)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_19922)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_19923)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_139(int iParam0, int iParam1)//Position - 0xD41F
{
	int iVar0;
	int iVar1;
	
	if (unk_0x96E226626970ABA3(iParam0) > 0)
	{
		unk_0xA0A6811A3E4062D1(iParam0, 0);
		iVar0 = unk_0xF928889F6E5C7677(iParam0, 24);
		iVar1 = unk_0x8D462BB6E4814682(iParam0, 24);
		unk_0xC195F0A7CE73E810(iParam0, iParam1);
		if (unk_0x82FF3DFBC3965CC0(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x75F267954030DBEB(iParam0, 24);
		}
		else
		{
			unk_0xA9EF3F93CBFFF6D0(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_140(int iParam0)//Position - 0xD484
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

bool func_141()//Position - 0xD4A4
{
	return unk_0x21EA5D4DC72DE119(-1691188696);
}

int func_142(int iParam0)//Position - 0xD4B5
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (unk_0x6C5223DB5E5CFD9B("MPBitset", 3))
			{
				if (unk_0xB80A4DA4C06A76F1(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x2786E663D1846FFC(iParam0, "MPBitset");
				}
				return unk_0xC80D31E4B587871C(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_143(int iParam0)//Position - 0xD500
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_144(int iParam0)//Position - 0xD5B0
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!func_145(unk_0x9EB17624F44A8DA4(), -1))
		{
			iParam0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		return 0;
	}
	if (func_119(unk_0x9EB17624F44A8DA4()) == 3)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			if (func_118(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_145(int iParam0, int iParam1)//Position - 0xD637
{
	int iVar0;
	
	if (func_816(iParam0, 1, 1))
	{
		if (unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(iParam0), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iParam0), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xFC1458A37D98B502() == unk_0x317536BCEA8FA6B0(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_146(int iParam0, int iParam1)//Position - 0xD684
{
	if (!unk_0xC80D31E4B587871C(Global_1320310[iParam1 /*141*/].f_102, 8))
	{
		func_75(iParam0, iParam1);
		return 1;
	}
	else if (func_147(*iParam0, &(Global_1320310[iParam1 /*141*/]), 0, 1))
	{
		func_76(iParam0, iParam1);
		return 1;
	}
	return 0;
}

int func_147(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xD6D0
{
	if (func_149(iParam0))
	{
		return 1;
	}
	else if (!func_116(iParam0, &(uParam1->f_81)))
	{
		uParam1->f_81 = { func_148() };
		func_89(iParam0, uParam1, bParam2, bParam3, 0);
		return 1;
	}
	else if (!func_107(iParam0))
	{
		uParam1->f_81 = { func_148() };
		unk_0x872F1C1F8587CCC7(&(uParam1->f_95), 0);
		func_89(iParam0, uParam1, bParam2, bParam3, 0);
	}
	return 0;
}

struct<13> func_148()//Position - 0xD741
{
	struct<13> Var0;
	
	unk_0xB3C5C4AE35A3EC8B(&Var0, 13);
	return Var0;
}

int func_149(int iParam0)//Position - 0xD756
{
	int iVar0;
	
	if ((unk_0x6ADD12BF4D6D2587(iParam0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0)) && func_114(iParam0))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar0 = unk_0x462317AD0B0A2C0F(iParam0, 0);
	}
	if (iVar0 >= 3)
	{
		return 1;
	}
	return 0;
}

bool func_150()//Position - 0xD7A5
{
	return !unk_0xC80D31E4B587871C(Local_297.f_362.f_1, 0);
}

void func_151(vector3 vParam0)//Position - 0xD7BB
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 3f;
	if (!iLocal_776)
	{
		Local_297.f_362.f_1 = 0;
		Local_297.f_362 = 0;
		iLocal_776 = 1;
	}
	if (func_154(vLocal_793, vParam0, 0,1f, 0))
	{
		if (!func_193(&uLocal_786))
		{
			func_192(&uLocal_786, 1, 0);
		}
		else if (func_187(&uLocal_786, 15000, 1))
		{
			return;
		}
	}
	else
	{
		func_73(&uLocal_786);
	}
	vLocal_793 = { vParam0 };
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0xF6A72924028F588B(iVar1);
		if (func_816(iVar0, 0, 1))
		{
			if (unk_0xDE597476C8B96D1A(iVar0))
			{
				if (!unk_0xC80D31E4B587871C(Local_297.f_362, iVar1))
				{
					if (func_816(iVar0, 1, 1))
					{
						if (!func_152(iVar0) && !unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(iVar0), 0))
						{
							vVar2 = { unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar0), 1) };
							fVar3 = unk_0xBE3C4023003180FC(vVar2, vParam0, 1);
							if (fVar3 < fVar4)
							{
								unk_0x872F1C1F8587CCC7(&(Local_297.f_362), iVar1);
								unk_0x872F1C1F8587CCC7(&(Local_297.f_362.f_1), 0);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
}

int func_152(int iParam0)//Position - 0xD8D6
{
	switch (func_153(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 39:
		case 34:
		case 37:
		case 40:
			return 0;
		
		default:
	}
	return 1;
}

int func_153(int iParam0)//Position - 0xD936
{
	return Global_1595693[iParam0 /*680*/].f_196;
}

int func_154(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xD949
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0xE97272C977DEADD3((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (unk_0xE97272C977DEADD3((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (unk_0xE97272C977DEADD3((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (unk_0xE97272C977DEADD3((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_155(int iParam0, bool bParam1, bool bParam2)//Position - 0xD9C4
{
	return func_6(1, iParam0, 1, bParam1, bParam2);
}

void func_156(int iParam0, int iParam1)//Position - 0xD9D8
{
	int iVar0;
	
	func_179(iParam0, &iVar0);
	if (iVar0 >= 0)
	{
		func_177(iVar0, -1, -1);
	}
	func_174(&(Global_1320310[iParam0 /*141*/]));
	Global_2097152[func_173() /*12130*/].f_7676.f_1274 = unk_0xE3CCAFB1555348DF();
	func_157(iParam0, &(Global_1320310[iParam0 /*141*/]), 0, iParam1, 0, 0);
}

int func_157(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xDA2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2097152[func_173() /*12130*/].f_7676.f_1274 = unk_0xE3CCAFB1555348DF();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_172(1411, iParam0);
	func_171(iVar1, uParam1->f_137, iParam3, 1);
	if (!bParam4)
	{
	}
	iVar1 = func_172(1412, iParam0);
	func_171(iVar1, uParam1->f_138, iParam3, 1);
	if (!bParam4)
	{
	}
	if (func_170(iParam0))
	{
	}
	else
	{
		iVar1 = func_172(1413, iParam0);
		func_171(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_172(1414, iParam0) + iVar0);
				func_171(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			else
			{
				iVar1 = (func_169(iParam0) + (iVar0 - 25));
				func_171(iVar1, uParam1->f_9[iVar0], iParam3, 1);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_172(1439, iParam0) + iVar0);
			func_171(iVar1, uParam1->f_59[iVar0], iParam3, 1);
			iVar0++;
		}
	}
	iVar1 = func_172(1441, iParam0);
	func_171(iVar1, uParam1->f_62, iParam3, 1);
	iVar1 = func_172(1442, iParam0);
	func_171(iVar1, uParam1->f_63, iParam3, 1);
	iVar1 = func_172(1443, iParam0);
	func_171(iVar1, uParam1->f_64, iParam3, 1);
	if (func_170(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_172(1444, iParam0);
		func_171(iVar1, uParam1->f_65, iParam3, 1);
	}
	iVar1 = func_172(1445, iParam0);
	func_171(iVar1, uParam1->f_67, iParam3, 1);
	if (func_170(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_172(1446, iParam0);
		func_171(iVar1, uParam1->f_68, iParam3, 1);
	}
	iVar1 = func_172(1447, iParam0);
	func_171(iVar1, uParam1->f_69, iParam3, 1);
	iVar1 = func_172(1448, iParam0);
	func_171(iVar1, uParam1->f_70, -1, 1);
	iVar1 = func_172(1449, iParam0);
	func_171(iVar1, uParam1->f_71, iParam3, 1);
	iVar1 = func_172(1450, iParam0);
	func_171(iVar1, uParam1->f_72, iParam3, 1);
	iVar1 = func_172(1451, iParam0);
	func_171(iVar1, uParam1->f_73, iParam3, 1);
	iVar1 = func_172(1452, iParam0);
	func_171(iVar1, uParam1->f_5, iParam3, 1);
	iVar1 = func_172(1453, iParam0);
	func_171(iVar1, uParam1->f_6, iParam3, 1);
	iVar1 = func_172(1454, iParam0);
	func_171(iVar1, uParam1->f_7, iParam3, 1);
	iVar1 = func_172(1455, iParam0);
	func_171(iVar1, uParam1->f_8, iParam3, 1);
	if (func_170(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_172(3880, iParam0);
		func_171(iVar1, uParam1->f_74, iParam3, 1);
		iVar1 = func_172(3881, iParam0);
		func_171(iVar1, uParam1->f_75, iParam3, 1);
		iVar1 = func_172(3882, iParam0);
		func_171(iVar1, uParam1->f_76, iParam3, 1);
		iVar1 = func_168(iParam0);
		func_171(iVar1, uParam1->f_97, iParam3, 1);
		iVar1 = func_167(iParam0);
		func_171(iVar1, uParam1->f_99, iParam3, 1);
		iVar1 = func_161(iParam0);
		func_171(iVar1, uParam1->f_98, iParam3, 1);
	}
	iVar2 = Global_2097152[func_173() /*12130*/].f_7676.f_1274;
	if (bParam5)
	{
		iVar2 = unk_0xE3CCAFB1555348DF();
	}
	func_160(1625, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_160(func_159(1, iParam0), uParam1->f_102, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_160(func_159(2, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_160(func_159(3, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_160(func_159(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_160(func_159(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_160(func_159(7, iParam0), uParam1->f_139, iParam3, 1, 0);
	if (!func_170(iParam0))
	{
		if (!unk_0xAB019B170BF1309C(&(uParam1->f_1)))
		{
			func_158(func_159(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_158(int iParam0, var uParam1, int iParam2)//Position - 0xDE7E
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC2EF7B4F83E05C84(iVar0, uParam1);
	}
}

int func_159(int iParam0, int iParam1)//Position - 0xDEA7
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1626;
				
				case 1:
					return 1633;
				
				case 2:
					return 1640;
				
				case 3:
					return 1647;
				
				case 4:
					return 1654;
				
				case 5:
					return 1661;
				
				case 6:
					return 1668;
				
				case 7:
					return 1675;
				
				case 8:
					return 1682;
				
				case 9:
					return 1689;
				
				case 10:
					return 1696;
				
				case 11:
					return 1702;
				
				case 12:
					return 1708;
				
				case 13:
					return 1714;
				
				case 14:
					return 1792;
				
				case 15:
					return 1799;
				
				case 16:
					return 1806;
				
				case 17:
					return 1813;
				
				case 18:
					return 1820;
				
				case 19:
					return 1827;
				
				case 20:
					return 1834;
				
				case 21:
					return 1841;
				
				case 22:
					return 1848;
				
				case 23:
					return 1855;
				
				case 24:
					return 1861;
				
				case 25:
					return 1867;
				
				case 26:
					return 2162;
				
				case 27:
					return 2169;
				
				case 28:
					return 2176;
				
				case 29:
					return 2183;
				
				case 30:
					return 2190;
				
				case 31:
					return 2197;
				
				case 32:
					return 2204;
				
				case 33:
					return 2211;
				
				case 34:
					return 2218;
				
				case 35:
					return 2225;
				
				case 36:
					return 2232;
				
				case 37:
					return 2238;
				
				case 38:
					return 2244;
				
				case 39:
					return 2817;
				
				case 40:
					return 2824;
				
				case 41:
					return 2831;
				
				case 42:
					return 2838;
				
				case 43:
					return 2845;
				
				case 44:
					return 2852;
				
				case 45:
					return 2859;
				
				case 46:
					return 2866;
				
				case 47:
					return 2873;
				
				case 48:
					return 2880;
				
				case 49:
					return 2887;
				
				case 50:
					return 2893;
				
				case 51:
					return 2899;
				
				case 52:
					return 2941;
				
				case 53:
					return 2948;
				
				case 54:
					return 2955;
				
				case 55:
					return 2962;
				
				case 56:
					return 2969;
				
				case 57:
					return 2976;
				
				case 58:
					return 2983;
				
				case 59:
					return 2990;
				
				case 60:
					return 2997;
				
				case 61:
					return 3004;
				
				case 62:
					return 3011;
				
				case 63:
					return 3017;
				
				case 64:
					return 3023;
				
				case 65:
					return 3224;
				
				case 66:
					return 3232;
				
				case 67:
					return 3240;
				
				case 68:
					return 3248;
				
				case 69:
					return 3256;
				
				case 70:
					return 3264;
				
				case 71:
					return 3272;
				
				case 72:
					return 3280;
				
				case 73:
					return 3288;
				
				case 74:
					return 3296;
				
				case 75:
					return 3304;
				
				case 76:
					return 3312;
				
				case 77:
					return 3320;
				
				case 78:
					return 3328;
				
				case 79:
					return 3336;
				
				case 80:
					return 3344;
				
				case 81:
					return 3352;
				
				case 82:
					return 3360;
				
				case 83:
					return 3368;
				
				case 84:
					return 3376;
				
				case 85:
					return 3384;
				
				case 86:
					return 3391;
				
				case 87:
					return 3398;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4014;
				
				case 89:
					return 4022;
				
				case 90:
					return 4030;
				
				case 91:
					return 4038;
				
				case 92:
					return 4046;
				
				case 93:
					return 4054;
				
				case 94:
					return 4062;
				
				case 95:
					return 4070;
				
				case 96:
					return 4078;
				
				case 97:
					return 4086;
				
				case 98:
					return 4094;
				
				case 99:
					return 4102;
				
				case 100:
					return 4110;
				
				case 101:
					return 4118;
				
				case 102:
					return 4126;
				
				case 103:
					return 4134;
				
				case 104:
					return 4142;
				
				case 105:
					return 4150;
				
				case 106:
					return 4158;
				
				case 107:
					return 4166;
				
				case 108:
					return 4174;
				
				case 109:
					return 4182;
				
				case 110:
					return 4190;
				
				case 111:
					return 4198;
				
				case 112:
					return 4206;
				
				case 113:
					return 4214;
				
				case 114:
					return 4222;
				
				case 115:
					return 4230;
				
				case 116:
					return 4238;
				
				case 117:
					return 4246;
				
				case 118:
					return 4254;
				
				case 119:
					return 4262;
				
				case 120:
					return 4270;
				
				case 121:
					return 4278;
				
				case 122:
					return 4286;
				
				case 123:
					return 4294;
				
				case 124:
					return 4302;
				
				case 125:
					return 4310;
				
				case 126:
					return 4318;
				
				case 127:
					return 4326;
				
				case 128:
					return 4334;
				
				case 129:
					return 4342;
				
				case 130:
					return 4350;
				
				case 131:
					return 4358;
				
				case 132:
					return 4366;
				
				case 133:
					return 4374;
				
				case 134:
					return 4382;
				
				case 135:
					return 4390;
				
				case 136:
					return 4398;
				
				case 137:
					return 4406;
				
				case 138:
					return 4414;
				
				case 139:
					return 4422;
				
				case 140:
					return 4430;
				
				case 141:
					return 4438;
				
				case 142:
					return 4446;
				
				case 143:
					return 4454;
				
				case 144:
					return 4462;
				
				case 145:
					return 4470;
				
				case 146:
					return 4478;
				
				case 147:
					return 4486;
				
				case 148:
					return 4494;
				
				case 149:
					return 4502;
				
				case 150:
					return 4510;
				
				case 151:
					return 4518;
				
				case 152:
					return 4526;
				
				case 153:
					return 4534;
				
				case 154:
					return 4542;
				
				case 155:
					return 4550;
				
				case 156:
					return 4558;
				
				case 157:
					return 4566;
				
				case 158:
					return 5459;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5908;
				
				case 160:
					return 5915;
				
				case 161:
					return 5922;
				
				case 162:
					return 5929;
				
				case 163:
					return 5936;
				
				case 164:
					return 5943;
				
				case 165:
					return 5950;
				
				case 166:
					return 5957;
				
				case 167:
					return 5964;
				
				case 168:
					return 5971;
				
				case 169:
					return 5978;
				
				case 170:
					return 5985;
				
				case 171:
					return 5992;
				
				case 172:
					return 5999;
				
				case 173:
					return 6006;
				
				case 174:
					return 6013;
				
				case 175:
					return 6020;
				
				case 176:
					return 6027;
				
				case 177:
					return 6034;
				
				case 178:
					return 6041;
				
				case 179:
					return 6048;
				
				case 180:
					return 6055;
				
				case 181:
					return 6062;
				
				case 182:
					return 6069;
				
				case 183:
					return 6076;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6153;
				
				case 185:
					return 6160;
				
				case 186:
					return 6167;
				
				case 187:
					return 6174;
				
				case 188:
					return 6181;
				
				case 189:
					return 6188;
				
				case 190:
					return 6195;
				
				case 191:
					return 6202;
				
				case 192:
					return 6209;
				
				case 193:
					return 6216;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1627;
				
				case 1:
					return 1634;
				
				case 2:
					return 1641;
				
				case 3:
					return 1648;
				
				case 4:
					return 1655;
				
				case 5:
					return 1662;
				
				case 6:
					return 1669;
				
				case 7:
					return 1676;
				
				case 8:
					return 1683;
				
				case 9:
					return 1690;
				
				case 10:
					return 1697;
				
				case 11:
					return 1703;
				
				case 12:
					return 1709;
				
				case 13:
					return 1715;
				
				case 14:
					return 1793;
				
				case 15:
					return 1800;
				
				case 16:
					return 1807;
				
				case 17:
					return 1814;
				
				case 18:
					return 1821;
				
				case 19:
					return 1828;
				
				case 20:
					return 1835;
				
				case 21:
					return 1842;
				
				case 22:
					return 1849;
				
				case 23:
					return 1856;
				
				case 24:
					return 1862;
				
				case 25:
					return 1868;
				
				case 26:
					return 2163;
				
				case 27:
					return 2170;
				
				case 28:
					return 2177;
				
				case 29:
					return 2184;
				
				case 30:
					return 2191;
				
				case 31:
					return 2198;
				
				case 32:
					return 2205;
				
				case 33:
					return 2212;
				
				case 34:
					return 2219;
				
				case 35:
					return 2226;
				
				case 36:
					return 2233;
				
				case 37:
					return 2239;
				
				case 38:
					return 2245;
				
				case 39:
					return 2818;
				
				case 40:
					return 2825;
				
				case 41:
					return 2832;
				
				case 42:
					return 2839;
				
				case 43:
					return 2846;
				
				case 44:
					return 2853;
				
				case 45:
					return 2860;
				
				case 46:
					return 2867;
				
				case 47:
					return 2874;
				
				case 48:
					return 2881;
				
				case 49:
					return 2888;
				
				case 50:
					return 2894;
				
				case 51:
					return 2900;
				
				case 52:
					return 2942;
				
				case 53:
					return 2949;
				
				case 54:
					return 2956;
				
				case 55:
					return 2963;
				
				case 56:
					return 2970;
				
				case 57:
					return 2977;
				
				case 58:
					return 2984;
				
				case 59:
					return 2991;
				
				case 60:
					return 2998;
				
				case 61:
					return 3005;
				
				case 62:
					return 3012;
				
				case 63:
					return 3018;
				
				case 64:
					return 3024;
				
				case 65:
					return 3225;
				
				case 66:
					return 3233;
				
				case 67:
					return 3241;
				
				case 68:
					return 3249;
				
				case 69:
					return 3257;
				
				case 70:
					return 3265;
				
				case 71:
					return 3273;
				
				case 72:
					return 3281;
				
				case 73:
					return 3289;
				
				case 74:
					return 3297;
				
				case 75:
					return 3305;
				
				case 76:
					return 3313;
				
				case 77:
					return 3321;
				
				case 78:
					return 3329;
				
				case 79:
					return 3337;
				
				case 80:
					return 3345;
				
				case 81:
					return 3353;
				
				case 82:
					return 3361;
				
				case 83:
					return 3369;
				
				case 84:
					return 3377;
				
				case 85:
					return 3385;
				
				case 86:
					return 3392;
				
				case 87:
					return 3399;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4015;
				
				case 89:
					return 4023;
				
				case 90:
					return 4031;
				
				case 91:
					return 4039;
				
				case 92:
					return 4047;
				
				case 93:
					return 4055;
				
				case 94:
					return 4063;
				
				case 95:
					return 4071;
				
				case 96:
					return 4079;
				
				case 97:
					return 4087;
				
				case 98:
					return 4095;
				
				case 99:
					return 4103;
				
				case 100:
					return 4111;
				
				case 101:
					return 4119;
				
				case 102:
					return 4127;
				
				case 103:
					return 4135;
				
				case 104:
					return 4143;
				
				case 105:
					return 4151;
				
				case 106:
					return 4159;
				
				case 107:
					return 4167;
				
				case 108:
					return 4175;
				
				case 109:
					return 4183;
				
				case 110:
					return 4191;
				
				case 111:
					return 4199;
				
				case 112:
					return 4207;
				
				case 113:
					return 4215;
				
				case 114:
					return 4223;
				
				case 115:
					return 4231;
				
				case 116:
					return 4239;
				
				case 117:
					return 4247;
				
				case 118:
					return 4255;
				
				case 119:
					return 4263;
				
				case 120:
					return 4271;
				
				case 121:
					return 4279;
				
				case 122:
					return 4287;
				
				case 123:
					return 4295;
				
				case 124:
					return 4303;
				
				case 125:
					return 4311;
				
				case 126:
					return 4319;
				
				case 127:
					return 4327;
				
				case 128:
					return 4335;
				
				case 129:
					return 4343;
				
				case 130:
					return 4351;
				
				case 131:
					return 4359;
				
				case 132:
					return 4367;
				
				case 133:
					return 4375;
				
				case 134:
					return 4383;
				
				case 135:
					return 4391;
				
				case 136:
					return 4399;
				
				case 137:
					return 4407;
				
				case 138:
					return 4415;
				
				case 139:
					return 4423;
				
				case 140:
					return 4431;
				
				case 141:
					return 4439;
				
				case 142:
					return 4447;
				
				case 143:
					return 4455;
				
				case 144:
					return 4463;
				
				case 145:
					return 4471;
				
				case 146:
					return 4479;
				
				case 147:
					return 4487;
				
				case 148:
					return 4495;
				
				case 149:
					return 4503;
				
				case 150:
					return 4511;
				
				case 151:
					return 4519;
				
				case 152:
					return 4527;
				
				case 153:
					return 4535;
				
				case 154:
					return 4543;
				
				case 155:
					return 4551;
				
				case 156:
					return 4559;
				
				case 157:
					return 4567;
				
				case 158:
					return 5460;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5909;
				
				case 160:
					return 5916;
				
				case 161:
					return 5923;
				
				case 162:
					return 5930;
				
				case 163:
					return 5937;
				
				case 164:
					return 5944;
				
				case 165:
					return 5951;
				
				case 166:
					return 5958;
				
				case 167:
					return 5965;
				
				case 168:
					return 5972;
				
				case 169:
					return 5979;
				
				case 170:
					return 5986;
				
				case 171:
					return 5993;
				
				case 172:
					return 6000;
				
				case 173:
					return 6007;
				
				case 174:
					return 6014;
				
				case 175:
					return 6021;
				
				case 176:
					return 6028;
				
				case 177:
					return 6035;
				
				case 178:
					return 6042;
				
				case 179:
					return 6049;
				
				case 180:
					return 6056;
				
				case 181:
					return 6063;
				
				case 182:
					return 6070;
				
				case 183:
					return 6077;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6154;
				
				case 185:
					return 6161;
				
				case 186:
					return 6168;
				
				case 187:
					return 6175;
				
				case 188:
					return 6182;
				
				case 189:
					return 6189;
				
				case 190:
					return 6196;
				
				case 191:
					return 6203;
				
				case 192:
					return 6210;
				
				case 193:
					return 6217;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1628;
				
				case 1:
					return 1635;
				
				case 2:
					return 1642;
				
				case 3:
					return 1649;
				
				case 4:
					return 1656;
				
				case 5:
					return 1663;
				
				case 6:
					return 1670;
				
				case 7:
					return 1677;
				
				case 8:
					return 1684;
				
				case 9:
					return 1691;
				
				case 10:
					return 1698;
				
				case 11:
					return 1704;
				
				case 12:
					return 1710;
				
				case 13:
					return 1716;
				
				case 14:
					return 1794;
				
				case 15:
					return 1801;
				
				case 16:
					return 1808;
				
				case 17:
					return 1815;
				
				case 18:
					return 1822;
				
				case 19:
					return 1829;
				
				case 20:
					return 1836;
				
				case 21:
					return 1843;
				
				case 22:
					return 1850;
				
				case 23:
					return 1857;
				
				case 24:
					return 1863;
				
				case 25:
					return 1869;
				
				case 26:
					return 2164;
				
				case 27:
					return 2171;
				
				case 28:
					return 2178;
				
				case 29:
					return 2185;
				
				case 30:
					return 2192;
				
				case 31:
					return 2199;
				
				case 32:
					return 2206;
				
				case 33:
					return 2213;
				
				case 34:
					return 2220;
				
				case 35:
					return 2227;
				
				case 36:
					return 2234;
				
				case 37:
					return 2240;
				
				case 38:
					return 2246;
				
				case 39:
					return 2819;
				
				case 40:
					return 2826;
				
				case 41:
					return 2833;
				
				case 42:
					return 2840;
				
				case 43:
					return 2847;
				
				case 44:
					return 2854;
				
				case 45:
					return 2861;
				
				case 46:
					return 2868;
				
				case 47:
					return 2875;
				
				case 48:
					return 2882;
				
				case 49:
					return 2889;
				
				case 50:
					return 2895;
				
				case 51:
					return 2901;
				
				case 52:
					return 2943;
				
				case 53:
					return 2950;
				
				case 54:
					return 2957;
				
				case 55:
					return 2964;
				
				case 56:
					return 2971;
				
				case 57:
					return 2978;
				
				case 58:
					return 2985;
				
				case 59:
					return 2992;
				
				case 60:
					return 2999;
				
				case 61:
					return 3006;
				
				case 62:
					return 3013;
				
				case 63:
					return 3019;
				
				case 64:
					return 3025;
				
				case 65:
					return 3226;
				
				case 66:
					return 3234;
				
				case 67:
					return 3242;
				
				case 68:
					return 3250;
				
				case 69:
					return 3258;
				
				case 70:
					return 3266;
				
				case 71:
					return 3274;
				
				case 72:
					return 3282;
				
				case 73:
					return 3290;
				
				case 74:
					return 3298;
				
				case 75:
					return 3306;
				
				case 76:
					return 3314;
				
				case 77:
					return 3322;
				
				case 78:
					return 3330;
				
				case 79:
					return 3338;
				
				case 80:
					return 3346;
				
				case 81:
					return 3354;
				
				case 82:
					return 3362;
				
				case 83:
					return 3370;
				
				case 84:
					return 3378;
				
				case 85:
					return 3386;
				
				case 86:
					return 3393;
				
				case 87:
					return 3400;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4016;
				
				case 89:
					return 4024;
				
				case 90:
					return 4032;
				
				case 91:
					return 4040;
				
				case 92:
					return 4048;
				
				case 93:
					return 4056;
				
				case 94:
					return 4064;
				
				case 95:
					return 4072;
				
				case 96:
					return 4080;
				
				case 97:
					return 4088;
				
				case 98:
					return 4096;
				
				case 99:
					return 4104;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4128;
				
				case 103:
					return 4136;
				
				case 104:
					return 4144;
				
				case 105:
					return 4152;
				
				case 106:
					return 4160;
				
				case 107:
					return 4168;
				
				case 108:
					return 4176;
				
				case 109:
					return 4184;
				
				case 110:
					return 4192;
				
				case 111:
					return 4200;
				
				case 112:
					return 4208;
				
				case 113:
					return 4216;
				
				case 114:
					return 4224;
				
				case 115:
					return 4232;
				
				case 116:
					return 4240;
				
				case 117:
					return 4248;
				
				case 118:
					return 4256;
				
				case 119:
					return 4264;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4288;
				
				case 123:
					return 4296;
				
				case 124:
					return 4304;
				
				case 125:
					return 4312;
				
				case 126:
					return 4320;
				
				case 127:
					return 4328;
				
				case 128:
					return 4336;
				
				case 129:
					return 4344;
				
				case 130:
					return 4352;
				
				case 131:
					return 4360;
				
				case 132:
					return 4368;
				
				case 133:
					return 4376;
				
				case 134:
					return 4384;
				
				case 135:
					return 4392;
				
				case 136:
					return 4400;
				
				case 137:
					return 4408;
				
				case 138:
					return 4416;
				
				case 139:
					return 4424;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4448;
				
				case 143:
					return 4456;
				
				case 144:
					return 4464;
				
				case 145:
					return 4472;
				
				case 146:
					return 4480;
				
				case 147:
					return 4488;
				
				case 148:
					return 4496;
				
				case 149:
					return 4504;
				
				case 150:
					return 4512;
				
				case 151:
					return 4520;
				
				case 152:
					return 4528;
				
				case 153:
					return 4536;
				
				case 154:
					return 4544;
				
				case 155:
					return 4552;
				
				case 156:
					return 4560;
				
				case 157:
					return 4568;
				
				case 158:
					return 5461;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5910;
				
				case 160:
					return 5917;
				
				case 161:
					return 5924;
				
				case 162:
					return 5931;
				
				case 163:
					return 5938;
				
				case 164:
					return 5945;
				
				case 165:
					return 5952;
				
				case 166:
					return 5959;
				
				case 167:
					return 5966;
				
				case 168:
					return 5973;
				
				case 169:
					return 5980;
				
				case 170:
					return 5987;
				
				case 171:
					return 5994;
				
				case 172:
					return 6001;
				
				case 173:
					return 6008;
				
				case 174:
					return 6015;
				
				case 175:
					return 6022;
				
				case 176:
					return 6029;
				
				case 177:
					return 6036;
				
				case 178:
					return 6043;
				
				case 179:
					return 6050;
				
				case 180:
					return 6057;
				
				case 181:
					return 6064;
				
				case 182:
					return 6071;
				
				case 183:
					return 6078;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6155;
				
				case 185:
					return 6162;
				
				case 186:
					return 6169;
				
				case 187:
					return 6176;
				
				case 188:
					return 6183;
				
				case 189:
					return 6190;
				
				case 190:
					return 6197;
				
				case 191:
					return 6204;
				
				case 192:
					return 6211;
				
				case 193:
					return 6218;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2820;
				
				case 40:
					return 2827;
				
				case 41:
					return 2834;
				
				case 42:
					return 2841;
				
				case 43:
					return 2848;
				
				case 44:
					return 2855;
				
				case 45:
					return 2862;
				
				case 46:
					return 2869;
				
				case 47:
					return 2876;
				
				case 48:
					return 2883;
				
				case 49:
					return 2890;
				
				case 50:
					return 2896;
				
				case 51:
					return 2902;
				
				case 52:
					return 2944;
				
				case 53:
					return 2951;
				
				case 54:
					return 2958;
				
				case 55:
					return 2965;
				
				case 56:
					return 2972;
				
				case 57:
					return 2979;
				
				case 58:
					return 2986;
				
				case 59:
					return 2993;
				
				case 60:
					return 3000;
				
				case 61:
					return 3007;
				
				case 62:
					return 3014;
				
				case 63:
					return 3020;
				
				case 64:
					return 3026;
				
				case 65:
					return 3227;
				
				case 66:
					return 3235;
				
				case 67:
					return 3243;
				
				case 68:
					return 3251;
				
				case 69:
					return 3259;
				
				case 70:
					return 3267;
				
				case 71:
					return 3275;
				
				case 72:
					return 3283;
				
				case 73:
					return 3291;
				
				case 74:
					return 3299;
				
				case 75:
					return 3307;
				
				case 76:
					return 3315;
				
				case 77:
					return 3323;
				
				case 78:
					return 3331;
				
				case 79:
					return 3339;
				
				case 80:
					return 3347;
				
				case 81:
					return 3355;
				
				case 82:
					return 3363;
				
				case 83:
					return 3371;
				
				case 84:
					return 3379;
				
				case 85:
					return 3387;
				
				case 86:
					return 3394;
				
				case 87:
					return 3401;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4017;
				
				case 89:
					return 4025;
				
				case 90:
					return 4033;
				
				case 91:
					return 4041;
				
				case 92:
					return 4049;
				
				case 93:
					return 4057;
				
				case 94:
					return 4065;
				
				case 95:
					return 4073;
				
				case 96:
					return 4081;
				
				case 97:
					return 4089;
				
				case 98:
					return 4097;
				
				case 99:
					return 4105;
				
				case 100:
					return 4113;
				
				case 101:
					return 4121;
				
				case 102:
					return 4129;
				
				case 103:
					return 4137;
				
				case 104:
					return 4145;
				
				case 105:
					return 4153;
				
				case 106:
					return 4161;
				
				case 107:
					return 4169;
				
				case 108:
					return 4177;
				
				case 109:
					return 4185;
				
				case 110:
					return 4193;
				
				case 111:
					return 4201;
				
				case 112:
					return 4209;
				
				case 113:
					return 4217;
				
				case 114:
					return 4225;
				
				case 115:
					return 4233;
				
				case 116:
					return 4241;
				
				case 117:
					return 4249;
				
				case 118:
					return 4257;
				
				case 119:
					return 4265;
				
				case 120:
					return 4273;
				
				case 121:
					return 4281;
				
				case 122:
					return 4289;
				
				case 123:
					return 4297;
				
				case 124:
					return 4305;
				
				case 125:
					return 4313;
				
				case 126:
					return 4321;
				
				case 127:
					return 4329;
				
				case 128:
					return 4337;
				
				case 129:
					return 4345;
				
				case 130:
					return 4353;
				
				case 131:
					return 4361;
				
				case 132:
					return 4369;
				
				case 133:
					return 4377;
				
				case 134:
					return 4385;
				
				case 135:
					return 4393;
				
				case 136:
					return 4401;
				
				case 137:
					return 4409;
				
				case 138:
					return 4417;
				
				case 139:
					return 4425;
				
				case 140:
					return 4433;
				
				case 141:
					return 4441;
				
				case 142:
					return 4449;
				
				case 143:
					return 4457;
				
				case 144:
					return 4465;
				
				case 145:
					return 4473;
				
				case 146:
					return 4481;
				
				case 147:
					return 4489;
				
				case 148:
					return 4497;
				
				case 149:
					return 4505;
				
				case 150:
					return 4513;
				
				case 151:
					return 4521;
				
				case 152:
					return 4529;
				
				case 153:
					return 4537;
				
				case 154:
					return 4545;
				
				case 155:
					return 4553;
				
				case 156:
					return 4561;
				
				case 157:
					return 4569;
				
				case 158:
					return 5462;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5911;
				
				case 160:
					return 5918;
				
				case 161:
					return 5925;
				
				case 162:
					return 5932;
				
				case 163:
					return 5939;
				
				case 164:
					return 5946;
				
				case 165:
					return 5953;
				
				case 166:
					return 5960;
				
				case 167:
					return 5967;
				
				case 168:
					return 5974;
				
				case 169:
					return 5981;
				
				case 170:
					return 5988;
				
				case 171:
					return 5995;
				
				case 172:
					return 6002;
				
				case 173:
					return 6009;
				
				case 174:
					return 6016;
				
				case 175:
					return 6023;
				
				case 176:
					return 6030;
				
				case 177:
					return 6037;
				
				case 178:
					return 6044;
				
				case 179:
					return 6051;
				
				case 180:
					return 6058;
				
				case 181:
					return 6065;
				
				case 182:
					return 6072;
				
				case 183:
					return 6079;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6156;
				
				case 185:
					return 6163;
				
				case 186:
					return 6170;
				
				case 187:
					return 6177;
				
				case 188:
					return 6184;
				
				case 189:
					return 6191;
				
				case 190:
					return 6198;
				
				case 191:
					return 6205;
				
				case 192:
					return 6212;
				
				case 193:
					return 6219;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2821;
				
				case 40:
					return 2828;
				
				case 41:
					return 2835;
				
				case 42:
					return 2842;
				
				case 43:
					return 2849;
				
				case 44:
					return 2856;
				
				case 45:
					return 2863;
				
				case 46:
					return 2870;
				
				case 47:
					return 2877;
				
				case 48:
					return 2884;
				
				case 49:
					return 2891;
				
				case 50:
					return 2897;
				
				case 51:
					return 2903;
				
				case 52:
					return 2945;
				
				case 53:
					return 2952;
				
				case 54:
					return 2959;
				
				case 55:
					return 2966;
				
				case 56:
					return 2973;
				
				case 57:
					return 2980;
				
				case 58:
					return 2987;
				
				case 59:
					return 2994;
				
				case 60:
					return 3001;
				
				case 61:
					return 3008;
				
				case 62:
					return 3015;
				
				case 63:
					return 3021;
				
				case 64:
					return 3027;
				
				case 65:
					return 3228;
				
				case 66:
					return 3236;
				
				case 67:
					return 3244;
				
				case 68:
					return 3252;
				
				case 69:
					return 3260;
				
				case 70:
					return 3268;
				
				case 71:
					return 3276;
				
				case 72:
					return 3284;
				
				case 73:
					return 3292;
				
				case 74:
					return 3300;
				
				case 75:
					return 3308;
				
				case 76:
					return 3316;
				
				case 77:
					return 3324;
				
				case 78:
					return 3332;
				
				case 79:
					return 3340;
				
				case 80:
					return 3348;
				
				case 81:
					return 3356;
				
				case 82:
					return 3364;
				
				case 83:
					return 3372;
				
				case 84:
					return 3380;
				
				case 85:
					return 3388;
				
				case 86:
					return 3395;
				
				case 87:
					return 3402;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4018;
				
				case 89:
					return 4026;
				
				case 90:
					return 4034;
				
				case 91:
					return 4042;
				
				case 92:
					return 4050;
				
				case 93:
					return 4058;
				
				case 94:
					return 4066;
				
				case 95:
					return 4074;
				
				case 96:
					return 4082;
				
				case 97:
					return 4090;
				
				case 98:
					return 4098;
				
				case 99:
					return 4106;
				
				case 100:
					return 4114;
				
				case 101:
					return 4122;
				
				case 102:
					return 4130;
				
				case 103:
					return 4138;
				
				case 104:
					return 4146;
				
				case 105:
					return 4154;
				
				case 106:
					return 4162;
				
				case 107:
					return 4170;
				
				case 108:
					return 4178;
				
				case 109:
					return 4186;
				
				case 110:
					return 4194;
				
				case 111:
					return 4202;
				
				case 112:
					return 4210;
				
				case 113:
					return 4218;
				
				case 114:
					return 4226;
				
				case 115:
					return 4234;
				
				case 116:
					return 4242;
				
				case 117:
					return 4250;
				
				case 118:
					return 4258;
				
				case 119:
					return 4266;
				
				case 120:
					return 4274;
				
				case 121:
					return 4282;
				
				case 122:
					return 4290;
				
				case 123:
					return 4298;
				
				case 124:
					return 4306;
				
				case 125:
					return 4314;
				
				case 126:
					return 4322;
				
				case 127:
					return 4330;
				
				case 128:
					return 4338;
				
				case 129:
					return 4346;
				
				case 130:
					return 4354;
				
				case 131:
					return 4362;
				
				case 132:
					return 4370;
				
				case 133:
					return 4378;
				
				case 134:
					return 4386;
				
				case 135:
					return 4394;
				
				case 136:
					return 4402;
				
				case 137:
					return 4410;
				
				case 138:
					return 4418;
				
				case 139:
					return 4426;
				
				case 140:
					return 4434;
				
				case 141:
					return 4442;
				
				case 142:
					return 4450;
				
				case 143:
					return 4458;
				
				case 144:
					return 4466;
				
				case 145:
					return 4474;
				
				case 146:
					return 4482;
				
				case 147:
					return 4490;
				
				case 148:
					return 4498;
				
				case 149:
					return 4506;
				
				case 150:
					return 4514;
				
				case 151:
					return 4522;
				
				case 152:
					return 4530;
				
				case 153:
					return 4538;
				
				case 154:
					return 4546;
				
				case 155:
					return 4554;
				
				case 156:
					return 4562;
				
				case 157:
					return 4570;
				
				case 158:
					return 5463;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5912;
				
				case 160:
					return 5919;
				
				case 161:
					return 5926;
				
				case 162:
					return 5933;
				
				case 163:
					return 5940;
				
				case 164:
					return 5947;
				
				case 165:
					return 5954;
				
				case 166:
					return 5961;
				
				case 167:
					return 5968;
				
				case 168:
					return 5975;
				
				case 169:
					return 5982;
				
				case 170:
					return 5989;
				
				case 171:
					return 5996;
				
				case 172:
					return 6003;
				
				case 173:
					return 6010;
				
				case 174:
					return 6017;
				
				case 175:
					return 6024;
				
				case 176:
					return 6031;
				
				case 177:
					return 6038;
				
				case 178:
					return 6045;
				
				case 179:
					return 6052;
				
				case 180:
					return 6059;
				
				case 181:
					return 6066;
				
				case 182:
					return 6073;
				
				case 183:
					return 6080;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6157;
				
				case 185:
					return 6164;
				
				case 186:
					return 6171;
				
				case 187:
					return 6178;
				
				case 188:
					return 6185;
				
				case 189:
					return 6192;
				
				case 190:
					return 6199;
				
				case 191:
					return 6206;
				
				case 192:
					return 6213;
				
				case 193:
					return 6220;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 39:
					return 2823;
				
				case 40:
					return 2830;
				
				case 41:
					return 2837;
				
				case 42:
					return 2844;
				
				case 43:
					return 2851;
				
				case 44:
					return 2858;
				
				case 45:
					return 2865;
				
				case 46:
					return 2872;
				
				case 47:
					return 2879;
				
				case 48:
					return 2886;
				
				case 52:
					return 2947;
				
				case 53:
					return 2954;
				
				case 54:
					return 2961;
				
				case 55:
					return 2968;
				
				case 56:
					return 2975;
				
				case 57:
					return 2982;
				
				case 58:
					return 2989;
				
				case 59:
					return 2996;
				
				case 60:
					return 3003;
				
				case 61:
					return 3010;
				
				case 65:
					return 3231;
				
				case 66:
					return 3239;
				
				case 67:
					return 3247;
				
				case 68:
					return 3255;
				
				case 69:
					return 3263;
				
				case 70:
					return 3271;
				
				case 71:
					return 3279;
				
				case 72:
					return 3287;
				
				case 73:
					return 3295;
				
				case 74:
					return 3303;
				
				case 75:
					return 3311;
				
				case 76:
					return 3319;
				
				case 77:
					return 3327;
				
				case 78:
					return 3335;
				
				case 79:
					return 3343;
				
				case 80:
					return 3351;
				
				case 81:
					return 3359;
				
				case 82:
					return 3367;
				
				case 83:
					return 3375;
				
				case 84:
					return 3383;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4021;
				
				case 89:
					return 4029;
				
				case 90:
					return 4037;
				
				case 91:
					return 4045;
				
				case 92:
					return 4053;
				
				case 93:
					return 4061;
				
				case 94:
					return 4069;
				
				case 95:
					return 4077;
				
				case 96:
					return 4085;
				
				case 97:
					return 4093;
				
				case 98:
					return 4101;
				
				case 99:
					return 4109;
				
				case 100:
					return 4117;
				
				case 101:
					return 4125;
				
				case 102:
					return 4133;
				
				case 103:
					return 4141;
				
				case 104:
					return 4149;
				
				case 105:
					return 4157;
				
				case 106:
					return 4165;
				
				case 107:
					return 4173;
				
				case 108:
					return 4181;
				
				case 109:
					return 4189;
				
				case 110:
					return 4197;
				
				case 111:
					return 4205;
				
				case 112:
					return 4213;
				
				case 113:
					return 4221;
				
				case 114:
					return 4229;
				
				case 115:
					return 4237;
				
				case 116:
					return 4245;
				
				case 117:
					return 4253;
				
				case 118:
					return 4261;
				
				case 119:
					return 4269;
				
				case 120:
					return 4277;
				
				case 121:
					return 4285;
				
				case 122:
					return 4293;
				
				case 123:
					return 4301;
				
				case 124:
					return 4309;
				
				case 125:
					return 4317;
				
				case 126:
					return 4325;
				
				case 127:
					return 4333;
				
				case 128:
					return 4341;
				
				case 129:
					return 4349;
				
				case 130:
					return 4357;
				
				case 131:
					return 4365;
				
				case 132:
					return 4373;
				
				case 133:
					return 4381;
				
				case 134:
					return 4389;
				
				case 135:
					return 4397;
				
				case 136:
					return 4405;
				
				case 137:
					return 4413;
				
				case 138:
					return 4421;
				
				case 139:
					return 4429;
				
				case 140:
					return 4437;
				
				case 141:
					return 4445;
				
				case 142:
					return 4453;
				
				case 143:
					return 4461;
				
				case 144:
					return 4469;
				
				case 145:
					return 4477;
				
				case 146:
					return 4485;
				
				case 147:
					return 4493;
				
				case 148:
					return 4501;
				
				case 149:
					return 4509;
				
				case 150:
					return 4517;
				
				case 151:
					return 4525;
				
				case 152:
					return 4533;
				
				case 153:
					return 4541;
				
				case 154:
					return 4549;
				
				case 155:
					return 4557;
				
				case 156:
					return 4565;
				
				case 157:
					return 4573;
				
				case 158:
					return 5466;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5914;
				
				case 160:
					return 5921;
				
				case 161:
					return 5928;
				
				case 162:
					return 5935;
				
				case 163:
					return 5942;
				
				case 164:
					return 5949;
				
				case 165:
					return 5956;
				
				case 166:
					return 5963;
				
				case 167:
					return 5970;
				
				case 168:
					return 5977;
				
				case 169:
					return 5984;
				
				case 170:
					return 5991;
				
				case 171:
					return 5998;
				
				case 172:
					return 6005;
				
				case 173:
					return 6012;
				
				case 174:
					return 6019;
				
				case 175:
					return 6026;
				
				case 176:
					return 6033;
				
				case 177:
					return 6040;
				
				case 178:
					return 6047;
				
				case 179:
					return 6054;
				
				case 180:
					return 6061;
				
				case 181:
					return 6068;
				
				case 182:
					return 6075;
				
				case 183:
					return 6082;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6159;
				
				case 185:
					return 6166;
				
				case 186:
					return 6173;
				
				case 187:
					return 6180;
				
				case 188:
					return 6187;
				
				case 189:
					return 6194;
				
				case 190:
					return 6201;
				
				case 191:
					return 6208;
				
				case 192:
					return 6215;
				
				case 193:
					return 6222;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2822;
				
				case 40:
					return 2829;
				
				case 41:
					return 2836;
				
				case 42:
					return 2843;
				
				case 43:
					return 2850;
				
				case 44:
					return 2857;
				
				case 45:
					return 2864;
				
				case 46:
					return 2871;
				
				case 47:
					return 2878;
				
				case 48:
					return 2885;
				
				case 49:
					return 2892;
				
				case 50:
					return 2898;
				
				case 51:
					return 2904;
				
				case 52:
					return 2946;
				
				case 53:
					return 2953;
				
				case 54:
					return 2960;
				
				case 55:
					return 2967;
				
				case 56:
					return 2974;
				
				case 57:
					return 2981;
				
				case 58:
					return 2988;
				
				case 59:
					return 2995;
				
				case 60:
					return 3002;
				
				case 61:
					return 3009;
				
				case 62:
					return 3016;
				
				case 63:
					return 3022;
				
				case 64:
					return 3028;
				
				case 65:
					return 3229;
				
				case 66:
					return 3237;
				
				case 67:
					return 3245;
				
				case 68:
					return 3253;
				
				case 69:
					return 3261;
				
				case 70:
					return 3269;
				
				case 71:
					return 3277;
				
				case 72:
					return 3285;
				
				case 73:
					return 3293;
				
				case 74:
					return 3301;
				
				case 75:
					return 3309;
				
				case 76:
					return 3317;
				
				case 77:
					return 3326;
				
				case 78:
					return 3334;
				
				case 79:
					return 3341;
				
				case 80:
					return 3349;
				
				case 81:
					return 3357;
				
				case 82:
					return 3365;
				
				case 83:
					return 3373;
				
				case 84:
					return 3381;
				
				case 85:
					return 3389;
				
				case 86:
					return 3396;
				
				case 87:
					return 3403;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4019;
				
				case 89:
					return 4027;
				
				case 90:
					return 4035;
				
				case 91:
					return 4043;
				
				case 92:
					return 4051;
				
				case 93:
					return 4059;
				
				case 94:
					return 4067;
				
				case 95:
					return 4075;
				
				case 96:
					return 4083;
				
				case 97:
					return 4091;
				
				case 98:
					return 4099;
				
				case 99:
					return 4107;
				
				case 100:
					return 4116;
				
				case 101:
					return 4124;
				
				case 102:
					return 4131;
				
				case 103:
					return 4139;
				
				case 104:
					return 4147;
				
				case 105:
					return 4155;
				
				case 106:
					return 4163;
				
				case 107:
					return 4171;
				
				case 108:
					return 4179;
				
				case 109:
					return 4187;
				
				case 110:
					return 4195;
				
				case 111:
					return 4203;
				
				case 112:
					return 4211;
				
				case 113:
					return 4219;
				
				case 114:
					return 4227;
				
				case 115:
					return 4235;
				
				case 116:
					return 4243;
				
				case 117:
					return 4251;
				
				case 118:
					return 4259;
				
				case 119:
					return 4267;
				
				case 120:
					return 4276;
				
				case 121:
					return 4284;
				
				case 122:
					return 4291;
				
				case 123:
					return 4299;
				
				case 124:
					return 4307;
				
				case 125:
					return 4315;
				
				case 126:
					return 4323;
				
				case 127:
					return 4331;
				
				case 128:
					return 4339;
				
				case 129:
					return 4347;
				
				case 130:
					return 4355;
				
				case 131:
					return 4363;
				
				case 132:
					return 4371;
				
				case 133:
					return 4379;
				
				case 134:
					return 4387;
				
				case 135:
					return 4395;
				
				case 136:
					return 4403;
				
				case 137:
					return 4411;
				
				case 138:
					return 4419;
				
				case 139:
					return 4427;
				
				case 140:
					return 4436;
				
				case 141:
					return 4444;
				
				case 142:
					return 4451;
				
				case 143:
					return 4459;
				
				case 144:
					return 4467;
				
				case 145:
					return 4475;
				
				case 146:
					return 4483;
				
				case 147:
					return 4491;
				
				case 148:
					return 4499;
				
				case 149:
					return 4507;
				
				case 150:
					return 4515;
				
				case 151:
					return 4523;
				
				case 152:
					return 4531;
				
				case 153:
					return 4539;
				
				case 154:
					return 4547;
				
				case 155:
					return 4555;
				
				case 156:
					return 4563;
				
				case 157:
					return 4571;
				
				case 158:
					return 5464;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5913;
				
				case 160:
					return 5920;
				
				case 161:
					return 5927;
				
				case 162:
					return 5934;
				
				case 163:
					return 5941;
				
				case 164:
					return 5948;
				
				case 165:
					return 5955;
				
				case 166:
					return 5962;
				
				case 167:
					return 5969;
				
				case 168:
					return 5976;
				
				case 169:
					return 5983;
				
				case 170:
					return 5990;
				
				case 171:
					return 5997;
				
				case 172:
					return 6004;
				
				case 173:
					return 6011;
				
				case 174:
					return 6018;
				
				case 175:
					return 6025;
				
				case 176:
					return 6032;
				
				case 177:
					return 6039;
				
				case 178:
					return 6046;
				
				case 179:
					return 6053;
				
				case 180:
					return 6060;
				
				case 181:
					return 6067;
				
				case 182:
					return 6074;
				
				case 183:
					return 6081;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6158;
				
				case 185:
					return 6165;
				
				case 186:
					return 6172;
				
				case 187:
					return 6179;
				
				case 188:
					return 6186;
				
				case 189:
					return 6193;
				
				case 190:
					return 6200;
				
				case 191:
					return 6207;
				
				case 192:
					return 6214;
				
				case 193:
					return 6221;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x11FE4
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_161(int iParam0)//Position - 0x12014
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 < func_162(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x1213C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_166(iParam0);
		return func_165(iVar0);
	}
	return (func_163(iParam0, -1) * iParam0 + 1);
}

int func_163(int iParam0, int iParam1)//Position - 0x121ED
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_59(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_64(iParam1))
			{
				return 0;
			}
			else if (func_164(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 <= 117 && iParam1 > 0)
			{
				if (Global_1049531[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
	}
	return 0;
}

int func_164(int iParam0, int iParam1)//Position - 0x12347
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x12424
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_166(int iParam0)//Position - 0x1243F
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

int func_167(int iParam0)//Position - 0x12465
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 < func_162(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	return 0;
}

int func_168(int iParam0)//Position - 0x1258D
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 < func_162(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	return 0;
}

int func_169(int iParam0)//Position - 0x126B5
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 < func_162(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	return 0;
}

int func_170(int iParam0)//Position - 0x12806
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
			return 1;
			break;
	}
	return 0;
}

var func_171(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12889
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_96();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x05D1B2AB3DEB3094((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x05D1B2AB3DEB3094((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x05D1B2AB3DEB3094((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDDC64F790F77A7E2((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x05D1B2AB3DEB3094((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x05D1B2AB3DEB3094((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x51999F13DC0B6E31((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x05D1B2AB3DEB3094((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x05D1B2AB3DEB3094((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x05D1B2AB3DEB3094((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x05D1B2AB3DEB3094((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x05D1B2AB3DEB3094((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x05D1B2AB3DEB3094((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x05D1B2AB3DEB3094((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x05D1B2AB3DEB3094((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x05D1B2AB3DEB3094((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x05D1B2AB3DEB3094((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x05D1B2AB3DEB3094((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x05D1B2AB3DEB3094((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xF7C9F48C0D054EBF((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x05D1B2AB3DEB3094((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xFD227BDFDE38A9C4(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_172(int iParam0, int iParam1)//Position - 0x12D43
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_162(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_162(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_162(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_162(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	return iVar0;
}

int func_173()//Position - 0x13963
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_174(var uParam0)//Position - 0x13970
{
	func_175(uParam0);
	uParam0->f_102 = 0;
	uParam0->f_103 = 0;
	uParam0->f_104 = 0;
	StringCopy(&(uParam0->f_105), "", 64);
	StringCopy(&(uParam0->f_121), "", 64);
	uParam0->f_137 = 0;
	uParam0->f_138 = 0;
	uParam0->f_139 = 0;
	uParam0->f_140 = 0;
}

void func_175(var uParam0)//Position - 0x139B5
{
	func_176(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_176(var uParam0)//Position - 0x13A45
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_177(int iParam0, int iParam1, int iParam2)//Position - 0x13AF6
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_171(func_178(iParam0), iParam1, iParam2, 1);
	if (iParam0 >= 194)
	{
		return;
	}
	if (iParam2 == func_96() || iParam2 == -1)
	{
		Global_1664862[iParam0] = iParam1;
	}
}

int func_178(int iParam0)//Position - 0x13B45
{
	if (iParam0 <= 38)
	{
		return (4036 + iParam0);
	}
	else if (iParam0 <= 48)
	{
		return ((5905 + iParam0) - 39);
	}
	else if (iParam0 <= 51)
	{
		return ((6025 + iParam0) - 49);
	}
	else if (iParam0 <= 64)
	{
		return ((7199 + iParam0) - 52);
	}
	else if (iParam0 <= 87)
	{
		return ((9207 + iParam0) - 65);
	}
	else if (iParam0 < 158)
	{
		return ((14734 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 184)
	{
		return ((17911 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18903 + iParam0) - 184);
	}
	return (4036 + iParam0);
}

void func_179(int iParam0, var uParam1)//Position - 0x13C0D
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 194)
		{
			if (iParam0 == (Global_1664862[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

int func_180(int iParam0)//Position - 0x13C49
{
	if (func_181(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((iParam0 == joaat("blazer5") || iParam0 == joaat("boxville5")) || iParam0 == joaat("dune5")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("ruiner2")) || iParam0 == joaat("technical2")) || iParam0 == joaat("voltic2")) || iParam0 == joaat("wastelander")) || iParam0 == -1881846085) || iParam0 == 1356124575) || iParam0 == -1924433270) || iParam0 == -1435527158) || iParam0 == -692292317) || iParam0 == -1693015116) || iParam0 == 1489874736) || iParam0 == 886810209) || iParam0 == 1483171323)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("ambulance"):
		case joaat("annihilator"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("asea2"):
		case joaat("baletrailer"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("benson"):
		case joaat("besra"):
		case joaat("biff"):
		case joaat("blimp"):
		case joaat("blimp2"):
		case joaat("blista3"):
		case joaat("boattrailer"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("bulldozer"):
		case joaat("burrito"):
		case joaat("burrito2"):
		case joaat("burrito3"):
		case joaat("burrito4"):
		case joaat("burrito5"):
		case joaat("bus"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("camper"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob3"):
		case joaat("cargoplane"):
		case joaat("coach"):
		case joaat("crusader"):
		case joaat("cuban800"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dinghy"):
		case joaat("dinghy2"):
		case joaat("dinghy3"):
		case joaat("docktrailer"):
		case joaat("docktug"):
		case joaat("dodo"):
		case joaat("dump"):
		case joaat("dune2"):
		case joaat("duster"):
		case joaat("emperor3"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case 1938952078:
		case joaat("fixter"):
		case joaat("flatbed"):
		case joaat("forklift"):
		case joaat("freight"):
		case joaat("freightcar"):
		case joaat("freightcont1"):
		case joaat("freightcont2"):
		case joaat("freightgrain"):
		case joaat("frogger"):
		case joaat("frogger2"):
		case joaat("gburrito"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("hauler"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("jet"):
		case joaat("jetmax"):
		case joaat("journey"):
		case joaat("lazer"):
		case joaat("lguard"):
		case joaat("limo2"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("mammatus"):
		case joaat("marshall"):
		case joaat("marquis"):
		case joaat("maverick"):
		case joaat("mesa2"):
		case 868868440:
		case joaat("monster"):
		case joaat("miljet"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("phantom"):
		case joaat("police"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("pounder"):
		case joaat("pranger"):
		case joaat("predator"):
		case joaat("proptrailer"):
		case joaat("raketrailer"):
		case joaat("rancherxl2"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("riot"):
		case joaat("ripley"):
		case joaat("rubble"):
		case joaat("rumpo2"):
		case joaat("sadler2"):
		case joaat("savage"):
		case joaat("scrap"):
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("shamal"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("slamvan2"):
		case joaat("skylift"):
		case joaat("speeder"):
		case joaat("speedo2"):
		case joaat("squalo"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("stretch"):
		case joaat("stunt"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("suntrap"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("taco"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("tankercar"):
		case joaat("taxi"):
		case joaat("technical"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("tiptruck"):
		case joaat("tiptruck2"):
		case joaat("titan"):
		case joaat("toro"):
		case joaat("tourbus"):
		case joaat("tr2"):
		case joaat("tr3"):
		case joaat("tr4"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tractor3"):
		case joaat("trailerlogs"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("trailersmall"):
		case joaat("trash"):
		case joaat("trash2"):
		case joaat("trflat"):
		case joaat("tropic"):
		case joaat("tvtrailer"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("valkyrie"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("cargobob4"):
		case joaat("dinghy4"):
		case joaat("seashark3"):
		case joaat("speeder2"):
		case joaat("toro2"):
		case joaat("tropic2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("valkyrie2"):
		case joaat("dune4"):
		case joaat("ruiner3"):
		case joaat("brickade"):
		case 387748548:
		case 177270108:
			return 0;
			break;
	}
	if (((!unk_0xC1514CFCEC68CA4A(iParam0) && !unk_0x125CDF69FA6EF560(iParam0)) && !unk_0x49A1CABC032F7E16(iParam0)) && !unk_0x622CEE94AF3A0B32(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_181(int iParam0)//Position - 0x144C2
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case -1984275979:
		case -42959138:
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case joaat("lazer"):
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	return 0;
}

void func_182(int iParam0)//Position - 0x145F0
{
	if (func_185(&(Global_1320310[iParam0 /*141*/].f_66)))
	{
		func_183(iParam0);
	}
}

void func_183(int iParam0)//Position - 0x1460F
{
	func_184(&(Global_1320310[iParam0 /*141*/].f_66));
	func_157(iParam0, &(Global_1320310[iParam0 /*141*/]), 0, -1, 0, 0);
}

void func_184(var uParam0)//Position - 0x14638
{
	switch (*uParam0)
	{
		case joaat("bison2"):
		case joaat("bison3"):
			*uParam0 = joaat("bison");
			break;
		
		case joaat("speedo2"):
			*uParam0 = joaat("speedo");
			break;
		
		case joaat("burrito"):
		case joaat("burrito2"):
		case joaat("burrito4"):
		case joaat("burrito5"):
			*uParam0 = joaat("burrito3");
			break;
	}
}

int func_185(var uParam0)//Position - 0x14693
{
	switch (*uParam0)
	{
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("speedo2"):
		case joaat("burrito"):
		case joaat("burrito2"):
		case joaat("burrito4"):
		case joaat("burrito5"):
			return 1;
			break;
	}
	return 0;
}

void func_186(var uParam0)//Position - 0x146D5
{
	int iVar0;
	
	if (unk_0x93C304998B457C45(*uParam0))
	{
		if (!unk_0xE53FD7AF7F25C0A8(*uParam0))
		{
		}
	}
	if (unk_0x918CA1BFFAA03556(*uParam0))
	{
		iVar0 = unk_0x29AB7D6D0DE18055(*uParam0);
		unk_0xFA8AA9E856FCF99B(&iVar0);
	}
}

int func_187(var uParam0, int iParam1, bool bParam2)//Position - 0x1470E
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_192(uParam0, bParam2, 0);
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_188(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x1476C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x95EC8AE7E4F33F6E(iParam0) + 1;
	if (iParam4 || !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_189(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x6ADD12BF4D6D2587(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xFC1458A37D98B502())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iVar2))
					{
						if (unk_0x1417A5CC924DE120(iVar2))
						{
							if (unk_0xF5D0CBECCA41314A(unk_0xDF35170AEEFB473B(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_189(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x14834
{
	int iVar0;
	
	if (!unk_0x8EE3A848975DDF21(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x317536BCEA8FA6B0(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			iVar0 = unk_0x96D3C6B7ED86BE3A(iParam0, iParam1);
			if (!unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (unk_0x78F50AA8F955BEFC(iVar0, 451360105) == 1 || unk_0x78F50AA8F955BEFC(iVar0, -828834893) == 1)
				{
					if (system::vdist(unk_0xB3328BA8976B416C(iParam0, 0), unk_0xB3328BA8976B416C(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_190(var uParam0)//Position - 0x148CF
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		return !func_191(unk_0xF32FBF2453AC1753(uParam0));
	}
	return 0;
}

int func_191(int iParam0)//Position - 0x148EF
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xB8DE76287EDC4957(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_192(var uParam0, bool bParam1, bool bParam2)//Position - 0x14928
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
		}
		uParam0->f_1 = 1;
	}
}

bool func_193(var uParam0)//Position - 0x1496D
{
	return uParam0->f_1;
}

int func_194(int iParam0, bool bParam1)//Position - 0x14979
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xC8A14E3C7BE76201(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x3A711520F83BAE98()) || (iParam0 == joaat("buffalo3") && !unk_0x3A711520F83BAE98())) || (iParam0 == joaat("gauntlet2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x3A711520F83BAE98())) || iParam0 == joaat("blista3"))
	{
		if (!func_202())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF2653182352C7FB1())
		{
			if (unk_0x4F531CBC79B8645A(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x42683C90F2D005ED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_201() && !func_200()) && !func_199()) && !func_198()) && !func_202())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x177281F5FA205A38() || unk_0xB9D80B12FE4456A5()) || unk_0xFD6215BABFD843F2())
		{
		}
		else if (!func_199())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_197(iParam0))
		{
			return 0;
		}
	}
	if (!func_195(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_195(int iParam0)//Position - 0x14B07
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_196())
	{
		return 1;
	}
	unk_0xD424C225D6534505(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0xBBA20694DE4179EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_196()//Position - 0x14BD3
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_197(int iParam0)//Position - 0x14BEA
{
	int iVar0;
	int iVar1;
	
	if (Global_2492197)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE3CCAFB1555348DF();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12250) && iVar1 < Global_262145.f_12251)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13548 && iVar1 < Global_262145.f_13560)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13544 && iVar1 < Global_262145.f_13556)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13545 && iVar1 < Global_262145.f_13557)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13546 && iVar1 < Global_262145.f_13558)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13547 && iVar1 < Global_262145.f_13559)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13549 && iVar1 < Global_262145.f_13561)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13550 && iVar1 < Global_262145.f_13553)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13551 && iVar1 < Global_262145.f_13554)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13552 && iVar1 < Global_262145.f_13555)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16179 && iVar1 < Global_262145.f_16144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16174 && iVar1 < Global_262145.f_16139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16178 && iVar1 < Global_262145.f_16143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16177 && iVar1 < Global_262145.f_16142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16172 && iVar1 < Global_262145.f_16137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16175 && iVar1 < Global_262145.f_16140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16176 && iVar1 < Global_262145.f_16141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16173 && iVar1 < Global_262145.f_16138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16181 && iVar1 < Global_262145.f_16146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16182 && iVar1 < Global_262145.f_16147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16180 && iVar1 < Global_262145.f_16145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16183 && iVar1 < Global_262145.f_16148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16184 && iVar1 < Global_262145.f_16149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16185 && iVar1 < Global_262145.f_16150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16186 && iVar1 < Global_262145.f_16151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16331 && iVar1 < Global_262145.f_16353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16332 && iVar1 < Global_262145.f_16354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16333 && iVar1 < Global_262145.f_16355)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16334 && iVar1 < Global_262145.f_16356)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16335 && iVar1 < Global_262145.f_16357)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16336 && iVar1 < Global_262145.f_16358)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16338 && iVar1 < Global_262145.f_16359)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16339 && iVar1 < Global_262145.f_16360)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16340 && iVar1 < Global_262145.f_16361)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16341 && iVar1 < Global_262145.f_16362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16342 && iVar1 < Global_262145.f_16363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16343 && iVar1 < Global_262145.f_16364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16344 && iVar1 < Global_262145.f_16365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16350 && iVar1 < Global_262145.f_16372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16347 && iVar1 < Global_262145.f_16368)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16348 && iVar1 < Global_262145.f_16369)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16349 && iVar1 < Global_262145.f_16370)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16337 && iVar1 < Global_262145.f_16371)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16351 && iVar1 < Global_262145.f_16373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16345 && iVar1 < Global_262145.f_16366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16346 && iVar1 < Global_262145.f_16367)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16352 && iVar1 < Global_262145.f_16374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17980 && iVar1 < Global_262145.f_18056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17981 && iVar1 < Global_262145.f_18057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17982 && iVar1 < Global_262145.f_18058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17983 && iVar1 < Global_262145.f_18059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17984 && iVar1 < Global_262145.f_18060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17985 && iVar1 < Global_262145.f_18061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17986 && iVar1 < Global_262145.f_18062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17987 && iVar1 < Global_262145.f_18063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17988 && iVar1 < Global_262145.f_18064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17989 && iVar1 < Global_262145.f_18065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17990 && iVar1 < Global_262145.f_18066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17991 && iVar1 < Global_262145.f_18067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17992 && iVar1 < Global_262145.f_18068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17993 && iVar1 < Global_262145.f_18069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17994 && iVar1 < Global_262145.f_18070)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17995 && iVar1 < Global_262145.f_18071)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17996 && iVar1 < Global_262145.f_18072)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17997 && iVar1 < Global_262145.f_18073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17998 && iVar1 < Global_262145.f_18074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17999 && iVar1 < Global_262145.f_18075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18000 && iVar1 < Global_262145.f_18076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18001 && iVar1 < Global_262145.f_18077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18002 && iVar1 < Global_262145.f_18078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18003 && iVar1 < Global_262145.f_18079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18004 && iVar1 < Global_262145.f_18080)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19037 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19038 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19039 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19040 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_19916 && iVar1 < Global_262145.f_19924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_19917 && iVar1 < Global_262145.f_19925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_19918 && iVar1 < Global_262145.f_19926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19929)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_20692 && iVar1 < Global_262145.f_20712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_20704 && iVar1 < Global_262145.f_20724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_20695 && iVar1 < Global_262145.f_20715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_20705 && iVar1 < Global_262145.f_20725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_20693 && iVar1 < Global_262145.f_20713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_20709 && iVar1 < Global_262145.f_20729)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_20707 && iVar1 < Global_262145.f_20727)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_20708 && iVar1 < Global_262145.f_20728)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_20703 && iVar1 < Global_262145.f_20723)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_20710 && iVar1 < Global_262145.f_20730)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_20706 && iVar1 < Global_262145.f_20726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_20702 && iVar1 < Global_262145.f_20722)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_20694 && iVar1 < Global_262145.f_20714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_20696 && iVar1 < Global_262145.f_20716)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_20697 && iVar1 < Global_262145.f_20717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_20698 && iVar1 < Global_262145.f_20718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_20699 && iVar1 < Global_262145.f_20719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_20700 && iVar1 < Global_262145.f_20720)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_20701 && iVar1 < Global_262145.f_20721)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_21653 && iVar1 < Global_262145.f_21681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_21654 && iVar1 < Global_262145.f_21682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_21655 && iVar1 < Global_262145.f_21683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_21656 && iVar1 < Global_262145.f_21684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_21657 && iVar1 < Global_262145.f_21685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_21658 && iVar1 < Global_262145.f_21686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_21659 && iVar1 < Global_262145.f_21687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_21660 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_21661 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_21662 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_21663 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_21664 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_21665 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_21666 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_21667 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_22787 && iVar1 < Global_262145.f_22803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_22788 && iVar1 < Global_262145.f_22804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_22792 && iVar1 < Global_262145.f_22808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_22795 && iVar1 < Global_262145.f_22811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_22800 && iVar1 < Global_262145.f_22816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_22794 && iVar1 < Global_262145.f_22810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_22786 && iVar1 < Global_262145.f_22802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_22793 && iVar1 < Global_262145.f_22809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_22799 && iVar1 < Global_262145.f_22815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_22798 && iVar1 < Global_262145.f_22814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_22789 && iVar1 < Global_262145.f_22805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_22791 && iVar1 < Global_262145.f_22807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_22801 && iVar1 < Global_262145.f_22817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_22797 && iVar1 < Global_262145.f_22813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_22790 && iVar1 < Global_262145.f_22806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_22796 && iVar1 < Global_262145.f_22812)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_198()//Position - 0x16472
{
	return 0;
}

int func_199()//Position - 0x1647B
{
	return 1;
}

int func_200()//Position - 0x16484
{
	return 1;
}

int func_201()//Position - 0x1648D
{
	if (unk_0x21EA5D4DC72DE119(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_202()//Position - 0x164A6
{
	int iVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				unk_0x872F1C1F8587CCC7(&iVar0, 2);
				unk_0x872F1C1F8587CCC7(&iVar0, 4);
				unk_0x872F1C1F8587CCC7(&iVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar0, 0);
					unk_0xDDFB38BD8B59BBB9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_203(int iParam0, var uParam1, bool bParam2)//Position - 0x16561
{
	if (Global_262145.f_9507)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1664862[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x4B64A8D052027742() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

int func_204(int iParam0)//Position - 0x165A1
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_166(iParam0);
		return func_205(iVar0);
	}
	return (func_163(iParam0, -1) * iParam0);
}

int func_205(int iParam0)//Position - 0x16650
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

void func_206()//Position - 0x1666B
{
	bool bVar0;
	int iVar1;
	
	func_455();
	func_451();
	func_450();
	func_438();
	if (func_437(0))
	{
		bVar0 = false;
		if (!Global_1669518)
		{
			func_416();
		}
		if (func_415(&Local_927))
		{
			if (Global_1669510)
			{
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 184, true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 360, true);
				if (func_407())
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
		if (func_406())
		{
			func_405(1, 1);
			iVar1 = 0;
			if (!func_193(&uLocal_790))
			{
				func_192(&uLocal_790, 0, 0);
			}
			if (bVar0)
			{
				if (Local_927.f_882)
				{
					func_404(7);
				}
				else
				{
					if (func_187(&uLocal_790, 10000, 0))
					{
						iVar1 = 1;
					}
					if (Global_1669518 || iVar1)
					{
						func_404(1);
						func_405(0, 1);
						func_403(1);
						func_73(&uLocal_790);
					}
				}
			}
		}
	}
	else if (func_437(1))
	{
		if (Global_1669510)
		{
			if ((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(Local_297.f_352[Local_927.f_51]), 0)) && unk_0x9F7B586A14398C40())
			{
				unk_0x4F8A35D7CBC17327(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_297.f_352[Local_927.f_51]), 0);
			}
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 184, false);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 360, false);
			}
			Global_1669510 = 0;
		}
		func_327();
		func_326();
		func_297();
		func_293();
		func_290();
		func_287();
		func_285();
		func_278();
		func_273();
		func_271();
		if (Local_927.f_882)
		{
			func_404(6);
			unk_0xAE83ED4C9081AE6F(500);
		}
	}
	else if (func_437(6))
	{
		if (unk_0x3E9CABD07B829173())
		{
			func_404(7);
		}
	}
	else if (func_437(4))
	{
		if (func_270(5, &(Local_927.f_331)))
		{
			unk_0xAE83ED4C9081AE6F(322);
			func_404(5);
		}
	}
	else if (func_437(5))
	{
		if (unk_0x3E9CABD07B829173())
		{
			if (!unk_0xC80D31E4B587871C(Local_927.f_331, 0))
			{
				if (!unk_0xAB019B170BF1309C(Local_927.f_331.f_57) && !unk_0xAB019B170BF1309C(Local_927.f_331.f_58))
				{
					unk_0x4AFBCBFDE748D4E0(-1, Local_927.f_331.f_57, Local_927.f_331.f_58, 1);
				}
				unk_0x872F1C1F8587CCC7(&(Local_927.f_331), 0);
			}
			func_268(&(Local_927.f_331), 0);
		}
		Global_1669518 = 0;
		Global_1669519 = 0;
	}
	else if (func_437(7))
	{
		if (func_217())
		{
			if (!func_216())
			{
				unk_0x59C3AC31C7544A28(322);
				unk_0xC45B8A0B35DD8552(unk_0xFC1458A37D98B502(), 1, 1);
				func_214(0);
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0xCFA0B475EBE9E2B7(unk_0xFC1458A37D98B502(), 255, 0);
				}
			}
			func_403(1);
			func_405(0, 1);
			Global_1669535.f_25 = 1;
			func_404(1);
			if (unk_0xC80D31E4B587871C(Local_927, 7))
			{
				func_207(unk_0x9EB17624F44A8DA4(), 1, 0);
				unk_0x0EE72DB1CD8A3B86(&Local_927, 7);
			}
		}
	}
}

void func_207(int iParam0, bool bParam1, int iParam2)//Position - 0x16936
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xEBD8A0B96FCAF579())
		{
			unk_0x7635EA803CE40962(false);
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		iVar0 = iParam2;
		unk_0x59F2A26BF856E30A(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_213())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x552F39AE86E07792(iParam0) && unk_0x5BEF7A5AB8F17255(iParam0))
		{
			iVar25 = unk_0x25D049AAC4603E65(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x3A711520F83BAE98())
				{
					unk_0xB68F1251512BDC18(1);
				}
				else if (bVar13 || (!func_94(unk_0x9EB17624F44A8DA4(), 0) && !func_212()))
				{
					unk_0xB3A8974D2C811672(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x3A711520F83BAE98() && !bVar18)
					{
						unk_0xB68F1251512BDC18(0);
					}
					Global_2422736[iParam0 /*420*/].f_259 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_211(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(iVar25, true, 0);
					}
				}
				if (!unk_0xDFFD5F8C8ABCB7EF(iVar25))
				{
					if (!bVar20)
					{
						unk_0xEDC33A771FAEB393(iVar25, false);
					}
					unk_0xFBA991D3A851E195(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xEDC33A771FAEB393(iVar25, false);
				}
				unk_0x5C5D33A1B2711D21(iVar25, true);
				unk_0x8FA21D9CF7681249(iParam0, 0);
				unk_0x8A92C5AE18686726(iVar25);
				unk_0x5718F894FDA63A9E(iVar25, 1);
				func_210();
				func_209();
				if (unk_0x56B73C6866440457())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x40189ECE75CF9724())
				{
				}
				Global_2422736[iParam0 /*420*/].f_260 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_211(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(iVar25, !bVar14, 0);
					}
					if (!unk_0xDFFD5F8C8ABCB7EF(iVar25))
					{
						if (!bVar20)
						{
							unk_0xEDC33A771FAEB393(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFBA991D3A851E195(iVar25, 1);
						}
					}
					if (func_208(Global_4456448.f_143970))
					{
						unk_0xEDC33A771FAEB393(iVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x8FA21D9CF7681249(iParam0, 0);
				}
				else
				{
					unk_0x8FA21D9CF7681249(iParam0, 1);
				}
				unk_0x5C5D33A1B2711D21(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x6728497EE586D1FE(iVar25) && !unk_0x88DDBE9908752BF0(iVar25, 0))
					{
						unk_0x957CEE967C939968(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x59F2A26BF856E30A(iParam0, bParam1, iVar26);
		}
	}
}

bool func_208(int iParam0)//Position - 0x16D18
{
	return iParam0 == 17;
}

void func_209()//Position - 0x16D25
{
	vector3 vVar0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { vVar0 };
}

void func_210()//Position - 0x16D72
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

int func_211(int iParam0)//Position - 0x16DB0
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x78F50AA8F955BEFC(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_212()//Position - 0x16DE1
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

int func_213()//Position - 0x16DF2
{
	if (func_32() == 0)
	{
		return 1;
	}
	return 0;
}

void func_214(bool bParam0)//Position - 0x16E07
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bParam0)
	{
		func_192(&Global_2520707, 1, 0);
	}
	else
	{
		func_73(&Global_2520707);
	}
	if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		iVar2 = -1;
		while (iVar2 <= 8)
		{
			if (iVar2 < unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0)))
			{
				if (!unk_0x8EE3A848975DDF21(iVar0, iVar2, 0))
				{
					iVar1 = unk_0x317536BCEA8FA6B0(iVar0, iVar2, 0);
					if ((unk_0x6ADD12BF4D6D2587(iVar1) && iVar1 != unk_0xFC1458A37D98B502()) && unk_0x1417A5CC924DE120(iVar1))
					{
						func_215(unk_0xDF35170AEEFB473B(iVar1), 0);
					}
				}
			}
			iVar2++;
		}
	}
}

void func_215(int iParam0, bool bParam1)//Position - 0x16EA5
{
	if (iParam0 == func_36())
	{
		return;
	}
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return;
	}
	if (!bParam1)
	{
		if (!unk_0xC80D31E4B587871C(Global_2520711, iParam0))
		{
			func_192(&(Global_2520712[iParam0 /*2*/]), 1, 0);
			unk_0x872F1C1F8587CCC7(&Global_2520711, iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2520711, iParam0))
	{
		func_73(&(Global_2520712[iParam0 /*2*/]));
		unk_0x0EE72DB1CD8A3B86(&Global_2520711, iParam0);
	}
}

bool func_216()//Position - 0x16F17
{
	return Global_1669535.f_18;
}

int func_217()//Position - 0x16F25
{
	int iVar0;
	
	switch (Local_927.f_883)
	{
		case 0:
			func_267();
			Local_927.f_883++;
			break;
		
		case 1:
			if (func_266())
			{
				func_265();
				func_262();
				unk_0xA25B44929E552182(961,2841f, -2999,709f, -40,6349f, 5f, joaat("v_ilev_roc_door2"), 1);
				unk_0xA25B44929E552182(967,4402f, -3007,415f, -40,647f, 5f, joaat("v_ilev_roc_door3"), 1);
				Local_927.f_883++;
			}
			break;
		
		case 2:
			if (unk_0x8AD07B6FC24F47C4())
			{
				func_261();
				Local_927.f_883++;
			}
			break;
		
		case 3:
			if (unk_0xA3DDC3767EC660CD())
			{
				func_260();
				func_259();
				unk_0xD0BFA95B279C174F(0);
				func_256(0, 1, 1, 0, 1, 1, 0);
				func_253(1, 1);
				func_23(0);
				if (Global_25505 != 1)
				{
					func_242(1);
				}
				Local_927.f_883++;
			}
			break;
		
		case 4:
			if (unk_0xA8113D347D14630F())
			{
				Local_927.f_883++;
				if (unk_0x3E9CABD07B829173())
				{
					unk_0x59C3AC31C7544A28(500);
				}
			}
			break;
		
		case 5:
			if (unk_0x65E1868AA01313FF(0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					if (unk_0xC80D31E4B587871C(Local_927, 1))
					{
						func_207(unk_0x9EB17624F44A8DA4(), 1, 0);
					}
				}
			}
			if (unk_0x6F1392C5F51B32A4())
			{
				unk_0x143DCD09D82EE129(961,2841f, -2999,709f, -40,6349f, 5f, joaat("v_ilev_roc_door2"), 0);
				unk_0x143DCD09D82EE129(967,4402f, -3007,415f, -40,647f, 5f, joaat("v_ilev_roc_door3"), 0);
				func_239();
				unk_0x14776E43F90DD454(joaat("phantom2"));
				unk_0x14776E43F90DD454(joaat("blazer5"));
				func_219(1, 0);
				if (Local_927.f_55 == unk_0x9EB17624F44A8DA4())
				{
					iVar0 = Global_1368207[func_101(-1)];
					unk_0x872F1C1F8587CCC7(&iVar0, 26);
					func_218(1300, iVar0, -1, 1);
				}
				unk_0x0EE72DB1CD8A3B86(&(Local_924[unk_0x622FF3AE4B1D07C3() /*24*/]), 0);
				Local_927.f_882 = 0;
				Local_927.f_883++;
				return 1;
			}
			break;
	}
	return 0;
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1712B
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_101(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_101(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_101(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_101(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_101(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_101(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_101(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_101(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_101(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_101(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_101(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_101(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_101(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_101(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_101(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_101(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_101(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_101(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_101(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_101(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_101(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_101(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_101(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_101(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_101(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_101(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_101(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_101(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_101(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_101(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_101(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_219(bool bParam0, int iParam1)//Position - 0x177F6
{
	func_237();
	if (bParam0)
	{
		func_235(1);
		unk_0x3E80C2F7BC665259(1);
	}
	unk_0x84CDD933AFA470D2();
	func_21();
	unk_0xABD857B52595E752(0);
	func_232(0, 1, 1, 0);
	func_231();
	func_230(12, 0, -1);
	func_229(1);
	unk_0xF0E859A5278D3AA0(0, -1);
	unk_0x9B47B379EE749C38(true);
	unk_0x4255E93FCCDE108E(1);
	func_228();
	unk_0x22456E02F195550C(1);
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0x78E929955680CA05())
		{
			unk_0xAC58AA6C1340C475(0, 0);
		}
	}
	func_227(0);
	if ((((func_226() == 0 && func_225() == 0) && iParam1) && !func_224(unk_0x9EB17624F44A8DA4())) && !unk_0x40189ECE75CF9724())
	{
		func_207(unk_0x9EB17624F44A8DA4(), 1, 0);
	}
	Global_2436181.f_3612 = 0;
	func_220();
}

void func_220()//Position - 0x178B2
{
	int iVar0;
	int iVar1;
	
	if (func_193(&Global_2520707))
	{
		if (!func_187(&Global_2520707, 3500, 1) || unk_0xF9B4AF5EF04AD4F9(unk_0x9EB17624F44A8DA4()))
		{
			if (!func_223())
			{
				if (unk_0x3E9CABD07B829173())
				{
					func_222(&Global_2520707, 1, 0);
				}
				else if (!func_94(unk_0x9EB17624F44A8DA4(), 0))
				{
					if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 1992968846) != 1 && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 1992968846) != 0)
					{
						unk_0x4D87488C2E818AE8(1);
						unk_0x80C9A7EF10A23C18(unk_0x9EB17624F44A8DA4(), 1);
					}
					unk_0xCFA0B475EBE9E2B7(unk_0xFC1458A37D98B502(), 255, 0);
				}
			}
			else
			{
				func_222(&Global_2520707, 1, 0);
			}
		}
		else
		{
			unk_0x76932C1879032DCE(unk_0xFC1458A37D98B502());
			func_73(&Global_2520707);
		}
	}
	if (Global_2520711 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (unk_0xC80D31E4B587871C(Global_2520711, iVar0))
			{
				iVar1 = unk_0xF6A72924028F588B(iVar0);
				if (func_816(iVar1, 1, 1))
				{
					func_221(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_221(int iParam0)//Position - 0x179AF
{
	if (unk_0xC80D31E4B587871C(Global_2520711, iParam0))
	{
		if (!func_187(&(Global_2520712[iParam0 /*2*/]), 3500, 1) || unk_0xF9B4AF5EF04AD4F9(iParam0))
		{
			if (!func_223())
			{
				if (unk_0x3E9CABD07B829173())
				{
					func_222(&(Global_2520712[iParam0 /*2*/]), 1, 0);
				}
				else if (!func_94(iParam0, 0))
				{
					unk_0x80C9A7EF10A23C18(iParam0, 1);
					if (!unk_0x191BE1BC8F26F3C1(unk_0x25D049AAC4603E65(iParam0), 0))
					{
						unk_0xCFA0B475EBE9E2B7(unk_0x25D049AAC4603E65(iParam0), 255, 0);
					}
				}
			}
			else
			{
				func_222(&(Global_2520712[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!unk_0x191BE1BC8F26F3C1(unk_0x25D049AAC4603E65(iParam0), 0))
			{
				unk_0x76932C1879032DCE(unk_0x25D049AAC4603E65(iParam0));
			}
			func_73(&(Global_2520712[iParam0 /*2*/]));
			unk_0x0EE72DB1CD8A3B86(&Global_2520711, iParam0);
		}
	}
}

void func_222(var uParam0, bool bParam1, bool bParam2)//Position - 0x17A78
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD1952A425B78FFC0();
		}
		else
		{
			*uParam0 = unk_0xEBD55014C579F626();
		}
	}
	else
	{
		*uParam0 = unk_0x53C562FD2B9E3AB0();
	}
	uParam0->f_1 = 1;
}

int func_223()//Position - 0x17AB5
{
	if (unk_0xA8113D347D14630F() || unk_0x78E929955680CA05())
	{
		return 1;
	}
	return 0;
}

int func_224(int iParam0)//Position - 0x17AD3
{
	if (func_94(iParam0, 0))
	{
		return 1;
	}
	if (func_212())
	{
		if (iParam0 == unk_0x9EB17624F44A8DA4())
		{
			return 1;
		}
	}
	if (unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_225()//Position - 0x17B15
{
	return unk_0xC80D31E4B587871C(Global_2447174, 7);
}

bool func_226()//Position - 0x17B26
{
	return Global_1312854;
}

void func_227(int iParam0)//Position - 0x17B32
{
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 13);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 13);
	}
}

void func_228()//Position - 0x17B55
{
	Global_17162.f_5 = 0;
}

void func_229(int iParam0)//Position - 0x17B63
{
	Global_2512808.f_4499 = iParam0;
}

void func_230(int iParam0, bool bParam1, int iParam2)//Position - 0x17B74
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1357530.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_1357530.f_1046), iParam0);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_1357530.f_1046), iParam0);
			}
			break;
	}
}

void func_231()//Position - 0x17BC3
{
	func_229(1);
	func_230(4, 0, -1);
	func_230(6, 0, -1);
	func_230(7, 0, -1);
	func_230(3, 0, -1);
	func_230(1, 0, -1);
	func_230(2, 0, -1);
	func_230(11, 0, -1);
	func_230(13, 0, -1);
	func_230(14, 0, -1);
	func_230(16, 0, -1);
}

void func_232(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x17C1A
{
	if (bParam0)
	{
		unk_0x6AA0A66305AA16FB(unk_0x9EB17624F44A8DA4());
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		func_227(1);
		unk_0x1011767350BE182B();
		unk_0x6489707B038D749C();
		if (Global_14453.f_1 > 3)
		{
			if (unk_0x0DBDCC9C5537E157())
			{
				unk_0xB31CEFB00C146C91(false);
			}
			if (!func_24())
			{
				Global_14453.f_1 = 3;
			}
			Global_15756 = 5;
		}
		func_234(1, iParam3, iParam2, 0);
		Global_55909 = 1;
		Global_68218 = 1;
		Global_70854 = 1;
	}
	else
	{
		func_227(0);
		unk_0xC67DD237DAB62CE2();
		Global_55909 = 0;
		if (bParam1)
		{
			unk_0x7B2E201667AAB144();
		}
		unk_0xB1B70B13913449B8(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		func_234(0, iParam3, iParam2, 0);
		if (unk_0x3A711520F83BAE98())
		{
			if (((!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_224(unk_0x9EB17624F44A8DA4())) && !func_94(unk_0x9EB17624F44A8DA4(), 0)) && !func_233())
			{
				unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
			}
		}
		else if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && !func_224(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), false);
		}
		Global_70854 = 0;
	}
}

bool func_233()//Position - 0x17D33
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 14);
}

int func_234(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17D50
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x1746AAD73B7DFC1B() != iParam0 && iParam2)
		{
			unk_0x035AB8AAB511237A(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_235(int iParam0)//Position - 0x17D83
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_103207)
	{
		unk_0xCF14F4421582B24A(iVar0, iParam0);
		func_236(iVar0);
		iVar0++;
	}
}

void func_236(int iParam0)//Position - 0x17DB1
{
	Global_103207[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_103207[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_103207[iParam0 /*28*/].f_4), "", 64);
	Global_103207[iParam0 /*28*/].f_23 = 0;
	Global_103207[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_103207[iParam0 /*28*/].f_27 = 0;
	Global_103207[iParam0 /*28*/].f_20 = 0;
	Global_103207[iParam0 /*28*/].f_22 = 0;
}

void func_237()//Position - 0x17E1D
{
	if (!Global_1312568)
	{
		return;
	}
	func_238();
}

void func_238()//Position - 0x17E34
{
	Global_1312568 = 0;
	StringCopy(&(Global_1312568.f_1), "", 24);
	Global_1312568.f_7 = 0;
}

void func_239()//Position - 0x17E54
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_927.f_887;
	if (unk_0x6ADD12BF4D6D2587(iVar0))
	{
		unk_0xFA8AA9E856FCF99B(&iVar0);
	}
	iVar1 = func_240();
	unk_0x14776E43F90DD454(iVar1);
}

int func_240()//Position - 0x17E7F
{
	int iVar0;
	
	if (func_241(Local_927.f_55))
	{
		iVar0 = 1048844220;
	}
	else
	{
		iVar0 = 1500695792;
	}
	return iVar0;
}

bool func_241(int iParam0)//Position - 0x17EA6
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 29);
}

void func_242(bool bParam0)//Position - 0x17EC2
{
	vector3 vVar0;
	vector3 vVar1;
	
	Global_68220 = 0;
	Local_924[unk_0x9EB17624F44A8DA4() /*24*/].f_23 = -1;
	if (func_252())
	{
		func_251();
	}
	if ((func_250() || func_249()) || func_248())
	{
		unk_0x3E80C2F7BC665259(1);
		if (iLocal_929 != -1)
		{
			func_18(&iLocal_929);
		}
	}
	if (bParam0)
	{
		if (iLocal_934 != -1)
		{
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				vVar0 = { func_247(iLocal_934, 0) };
				vVar1 = { func_247(iLocal_934, 1) };
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), vVar0, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), vVar1.z);
			}
		}
	}
	unk_0x2DB625A7D089C175(0, 0, 1);
	func_245();
	unk_0x0EE72DB1CD8A3B86(&uLocal_931, 1);
	sLocal_935 = "";
	unk_0x3657CB418C776691(unk_0x98EC0789D9F0703B(), 0,5f);
	func_244(&(Local_924[unk_0x9EB17624F44A8DA4() /*24*/].f_18));
	func_243(&Global_25505, 1);
	iLocal_934 = -1;
	Global_2456857 = -1;
	if (iLocal_929 != -1)
	{
		func_18(&iLocal_929);
	}
	Global_68220 = 0;
}

void func_243(var uParam0, int iParam1)//Position - 0x17FD3
{
	*uParam0 = iParam1;
}

void func_244(var uParam0)//Position - 0x17FE0
{
	*uParam0 = 0;
}

void func_245()//Position - 0x17FEC
{
	if (iLocal_929 != -1)
	{
		func_18(&iLocal_929);
	}
	if (((((((((((((((((((((((((((func_246("MPOFSEAT_EXIT") || func_246("MPOFSEAT_EXIT_L")) || func_246("MPOFSEAT_EXIT_C")) || func_246("MPOFSEAT_EXIT_R")) || func_246("MPOFSEAT_PCEXIT")) || func_246("MPOFSEAT_EXIT_PCL")) || func_246("MPOFSEAT_EXIT_PCC")) || func_246("MPOFSEAT_EXIT_PCR")) || func_246("WHOUSEINPUTTRIG")) || func_246("WHOUSEINPUTTRPC")) || func_246("SECINPUTTREG")) || func_246("SECINPUTTREGPC")) || func_246("OFF_COMP_MIS")) || func_246("OFF_COMP_MIS_PC")) || func_246("OFF_COMP_BDY")) || func_246("OFF_COMP_BDY_PC")) || func_246("OFFLAPTOPPC")) || func_246("OFFLAPTOP")) || func_246("MPOF_AC_EXIT")) || func_246("MPOF_AC_PC_EXIT")) || func_246("CLBHINPUTTRIGPC")) || func_246("ORINPUTTREGPC")) || func_246("CLBHINPUTTRIG")) || func_246("ORINPUTTREG")) || func_246("OFF_COMP_CH")) || func_246("OFF_COMP_CH_PC")) || func_246("OFF_COMP_CHV")) || func_246("OFF_COMP_CHV_PC"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	unk_0x0EE72DB1CD8A3B86(&uLocal_931, 1);
}

int func_246(char* sParam0)//Position - 0x18195
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

Vector3 func_247(int iParam0, bool bParam1)//Position - 0x181A8
{
	vector3 vVar0;
	
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				vVar0 = { 0f, 0f, 270f };
				break;
			
			case 1:
				vVar0 = { 0f, 0f, 270f };
				break;
			
			case 2:
				vVar0 = { 0f, 0f, 180f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				vVar0 = { 959,1672f, -3001,823f, -40,6349f };
				break;
			
			case 1:
				vVar0 = { 959,0532f, -3000,635f, -40,6349f };
				break;
			
			case 2:
				vVar0 = { 962,481f, -3003,022f, -40,6349f };
				break;
			}
	}
	return vVar0;
}

int func_248()//Position - 0x1825A
{
	if (func_246("MPOF_AC_EXIT"))
	{
		return 1;
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (func_246("MPOF_AC_PC_EXIT"))
		{
			return 1;
		}
	}
	return 0;
}

int func_249()//Position - 0x18289
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (((((((((((func_246("WHOUSEINPUTTRPC") || func_246("MP_OFF_LAP_PC")) || func_246("OFF_COMP_MIS")) || func_246("SECINPUTTREGPC")) || func_246("OFF_COMP_BDY")) || func_246("OFFLAPTOP")) || func_246("CLBHINPUTTRIGPC")) || func_246("ORINPUTTREGPC")) || func_246("OFF_COMP_CH_PC")) || func_246("OFF_COMP_CHV_PC")) || func_246("IEAPPINPUTTRPC")) || func_246("AHAPRVSESINPTPC"))
		{
			return 1;
		}
	}
	else if (((((((((((func_246("WHOUSEINPUTTRIG") || func_246("MP_OFF_LAP_1")) || func_246("OFF_COMP_MIS")) || func_246("SECINPUTTREG")) || func_246("OFF_COMP_BDY")) || func_246("OFFLAPTOPPC")) || func_246("CLBHINPUTTRIG")) || func_246("ORINPUTTREG")) || func_246("OFF_COMP_CH")) || func_246("OFF_COMP_CHV")) || func_246("IEAPPINPUTTRIG")) || func_246("AHAPRIVSESINPUT"))
	{
		return 1;
	}
	return 0;
}

int func_250()//Position - 0x183EF
{
	if (((func_246("MPOFSEAT_EXIT") || func_246("MPOFSEAT_EXIT_L")) || func_246("MPOFSEAT_EXIT_C")) || func_246("MPOFSEAT_EXIT_R"))
	{
		return 1;
	}
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (((func_246("MPOFSEAT_PCEXIT") || func_246("MPOFSEAT_EXIT_PCL")) || func_246("MPOFSEAT_EXIT_PCC")) || func_246("MPOFSEAT_EXIT_PCR"))
		{
			return 1;
		}
	}
	return 0;
}

void func_251()//Position - 0x18472
{
	Global_68218 = 1;
}

bool func_252()//Position - 0x1847F
{
	return Global_68215;
}

void func_253(bool bParam0, int iParam1)//Position - 0x1848B
{
	func_255();
	func_235(1);
	unk_0x3E80C2F7BC665259(1);
	unk_0x84CDD933AFA470D2();
	func_232(1, 1, 1, 0);
	func_254();
	func_230(12, 1, -1);
	func_229(0);
	unk_0xF0E859A5278D3AA0(1, -1);
	unk_0x9B47B379EE749C38(false);
	unk_0x4255E93FCCDE108E(0);
	func_235(1);
	func_227(1);
	Global_2436181.f_3612 = 1;
	if (bParam0)
	{
		if (!unk_0x78E929955680CA05())
		{
			unk_0xAC58AA6C1340C475(1, iParam1);
		}
	}
}

void func_254()//Position - 0x184F4
{
	func_229(0);
	func_230(4, 1, -1);
	func_230(6, 1, -1);
	func_230(7, 1, -1);
	func_230(3, 1, -1);
	func_230(1, 1, -1);
	func_230(2, 1, -1);
	func_230(11, 1, -1);
	func_230(13, 1, -1);
	func_230(14, 1, -1);
	func_230(16, 1, -1);
}

void func_255()//Position - 0x1854B
{
	Global_1312568 = 1;
	StringCopy(&(Global_1312568.f_1), unk_0x436287B7DB306165(), 24);
	Global_1312568.f_7 = unk_0x8B948C59217A295D(&(Global_1312568.f_1));
}

void func_256(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x18574
{
	int iVar0;
	
	func_258();
	func_22(1);
	func_229(1);
	func_230(12, 1, -1);
	func_257();
	unk_0x22456E02F195550C(0);
	if (bParam0)
	{
		unk_0xBA23FBC333BCB431(unk_0x9EB17624F44A8DA4(), iParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	func_207(unk_0x9EB17624F44A8DA4(), 0, iVar0);
	if (bParam5)
	{
		if (unk_0x6609DF209E7283C5(unk_0xFC1458A37D98B502()))
		{
			unk_0xB8755FBF960E8752(unk_0xFC1458A37D98B502(), 0);
		}
	}
}

void func_257()//Position - 0x18602
{
	Global_17162.f_5 = 1;
}

void func_258()//Position - 0x18610
{
	func_23(0);
	func_22(1);
}

void func_259()//Position - 0x18622
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2512808.f_4856.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_260()//Position - 0x1864A
{
	int iVar0;
	
	iVar0 = func_240();
	if (!unk_0x3AB6A1A9084FB0A4(Local_927.f_887))
	{
		if (iVar0 == 1048844220)
		{
			unk_0x4982ECE0928DA13D(Local_927.f_887, "Male_PA", 0, 0, 64);
		}
		else
		{
			unk_0x4982ECE0928DA13D(Local_927.f_887, "Female_PA_02", 0, 0, 64);
		}
	}
}

void func_261()//Position - 0x1869A
{
	int iVar0;
	
	iVar0 = func_240();
	if (iVar0 == 1048844220)
	{
		unk_0x19DD321D6F31E615("Male_PA", 0, 1);
	}
	else
	{
		unk_0x19DD321D6F31E615("Female_PA_02", 0, 1);
	}
}

void func_262()//Position - 0x186C9
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_240();
	if (iVar0 == 1048844220)
	{
		Local_927.f_887 = unk_0xAC992EFAD62C33BF(4, iVar0, 977,202f, -2997,681f, -40,647f, 0f, 0, false);
	}
	else
	{
		Local_927.f_887 = unk_0xAC992EFAD62C33BF(5, iVar0, 977,202f, -2997,681f, -40,647f, 0f, 0, false);
	}
	iVar1 = Local_927.f_55;
	func_263(&(Local_927.f_887), iVar1);
	unk_0x771A86309E0CA47B(Local_927.f_887, 1);
	unk_0x1A0806871323CD16(Local_927.f_887, true);
}

void func_263(var uParam0, int iParam1)//Position - 0x1874B
{
	if (unk_0x82FF3DFBC3965CC0(*uParam0) == 1048844220)
	{
		switch (func_264(iParam1))
		{
			case 3:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 0, 0, 0);
				break;
			
			case 4:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 1, 3, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 1, 3, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 1, 1, 0);
				break;
			
			case 5:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 0, 4, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 0, 3, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 0, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 0, 2, 0);
				break;
			
			case 0:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 4, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 5, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 3, 0, 0);
				break;
			
			case 1:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 3, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 5, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 3, 1, 0);
				break;
			
			case 2:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 3, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 3, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 0, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 5, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 3, 2, 0);
				break;
			
			case 6:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 4, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 5, 0, 0);
				break;
			
			case 7:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 2, 3, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 1, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 3, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 4, 1, 0);
				break;
			
			case 8:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 0, 5, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 4, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 2, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 4, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 5, 2, 0);
				break;
		}
		unk_0x0B652E456D6A7E32(*uParam0, 2, 0, 0, false);
	}
	else
	{
		switch (func_264(iParam1))
		{
			case 3:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 0, 0, 0);
				break;
			
			case 4:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 1, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 5, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 1, 2, 0);
				break;
			
			case 5:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 1, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 0, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 1, 3, 0);
				break;
			
			case 0:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 2, 0, 0);
				break;
			
			case 1:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 3, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 4, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 1, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 3, 1, 0);
				break;
			
			case 2:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 3, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 1, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 3, 2, 0);
				break;
			
			case 6:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 4, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 1, 3, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 2, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 1, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 4, 0, 0);
				break;
			
			case 7:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 2, 4, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 2, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 0, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 2, 1, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 1, 4, 0);
				break;
			
			case 8:
				unk_0x03924C68EFCBC511(*uParam0, 0, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 2, 0, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 3, 3, 0, 0);
				unk_0x03924C68EFCBC511(*uParam0, 4, 2, 5, 0);
				unk_0x03924C68EFCBC511(*uParam0, 6, 2, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 7, 0, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 8, 2, 2, 0);
				unk_0x03924C68EFCBC511(*uParam0, 11, 1, 5, 0);
				break;
		}
		unk_0x0B652E456D6A7E32(*uParam0, 2, 0, 0, false);
	}
}

int func_264(int iParam0)//Position - 0x18E87
{
	return (Global_1595693[iParam0 /*680*/].f_266.f_67[5] - 1);
}

void func_265()//Position - 0x18EA2
{
	int iVar0;
	
	iVar0 = func_240();
	if (iVar0 == 1048844220)
	{
		unk_0x393584863A2F304E("IMPEXP_INT_L1", 8);
	}
	else
	{
		unk_0x393584863A2F304E("IMPEXP_INT", 8);
	}
}

bool func_266()//Position - 0x18ED1
{
	return unk_0x9A0B2ED5055D3F0B(func_240());
}

void func_267()//Position - 0x18EE1
{
	unk_0x6FF834D85E2DD4C6(func_240());
}

void func_268(var uParam0, bool bParam1)//Position - 0x18EF1
{
	if ((func_270(5, uParam0) || func_270(6, uParam0)) || bParam1)
	{
		if (unk_0xD56F740235B1E8F0(uParam0->f_13))
		{
			unk_0x0DE51FACDA4C8C80(uParam0->f_13);
		}
		if (unk_0x6ADD12BF4D6D2587(uParam0->f_2))
		{
			unk_0x68433819717660CF(&(uParam0->f_2));
		}
		unk_0x3458550DF8E9B453(false, 0, 3000, 1, 0, 0);
		unk_0x02934BABFD4CD384(uParam0->f_5, 0);
		func_219(1, 0);
		func_234(0, 1, 1, 0);
		if (bParam1)
		{
			func_269(7, uParam0);
		}
		else
		{
			func_269(3, uParam0);
		}
		Global_1669535.f_31 = 0;
	}
}

void func_269(int iParam0, var uParam1)//Position - 0x18F7F
{
	if (iParam0 != uParam1->f_1)
	{
		uParam1->f_1 = iParam0;
	}
}

bool func_270(int iParam0, var uParam1)//Position - 0x18F96
{
	return uParam1->f_1 == iParam0;
}

void func_271()//Position - 0x18FA5
{
	if (((func_15(unk_0x9EB17624F44A8DA4()) && !unk_0xC80D31E4B587871C(Local_924[unk_0x9EB17624F44A8DA4() /*24*/], 3)) && !unk_0x0332D718DB2E6381()) && !unk_0xF491DD47B88AA84E())
	{
		if (unk_0x9EB17624F44A8DA4() == Local_927.f_55)
		{
			func_272("CUST_GAR_LEAVEH", -1);
		}
		else
		{
			func_272("CUST_GAR_LEAVEHb", -1);
		}
		unk_0x872F1C1F8587CCC7(&(Local_924[unk_0x9EB17624F44A8DA4() /*24*/]), 3);
	}
}

void func_272(char* sParam0, int iParam1)//Position - 0x1900F
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_273()//Position - 0x19026
{
	if (unk_0xC80D31E4B587871C(Local_297.f_1, 0))
	{
		if (!unk_0xC80D31E4B587871C(Local_924[unk_0x9EB17624F44A8DA4() /*24*/], 2))
		{
			func_277();
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_924[unk_0x9EB17624F44A8DA4() /*24*/], 2))
	{
		func_276();
	}
	if (unk_0xC80D31E4B587871C(Local_297.f_1, 1))
	{
		if (!unk_0xC80D31E4B587871C(Local_924[unk_0x9EB17624F44A8DA4() /*24*/], 4))
		{
			func_275();
		}
	}
	else if (unk_0xC80D31E4B587871C(Local_924[unk_0x9EB17624F44A8DA4() /*24*/], 4))
	{
		func_274();
	}
}

void func_274()//Position - 0x190A6
{
	if (unk_0xC80D31E4B587871C(Local_924[unk_0x9EB17624F44A8DA4() /*24*/], 4))
	{
		unk_0x452336926718D62A(&iLocal_779);
		unk_0x0EE72DB1CD8A3B86(&(Local_924[unk_0x9EB17624F44A8DA4() /*24*/]), 4);
	}
}

int func_275()//Position - 0x190D4
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = 1790162299;
	vVar1 = { 962,63f, -2994,804f, -47f };
	vVar2 = { 0f, 0f, 0f };
	if (func_11(iVar0))
	{
		if (unk_0x1887812F0A3EB4F6(1) && !unk_0xC80D31E4B587871C(Local_924[unk_0x9EB17624F44A8DA4() /*24*/], 4))
		{
			iLocal_779 = unk_0x5E35CF35E65D69B9(iVar0, vVar1, 0, false, 1);
			unk_0x59AF3B40AE222194(iLocal_779, vVar2, 2, 1);
			unk_0xB3A8974D2C811672(iLocal_779, false, 0);
			unk_0xEDC33A771FAEB393(iLocal_779, true);
			unk_0x872F1C1F8587CCC7(&(Local_924[unk_0x9EB17624F44A8DA4() /*24*/]), 4);
			unk_0x14776E43F90DD454(iVar0);
			return 1;
		}
	}
	return 0;
}

void func_276()//Position - 0x19169
{
	if (unk_0xC80D31E4B587871C(Local_924[unk_0x9EB17624F44A8DA4() /*24*/], 2))
	{
		unk_0x452336926718D62A(&iLocal_778);
		unk_0x0EE72DB1CD8A3B86(&(Local_924[unk_0x9EB17624F44A8DA4() /*24*/]), 2);
	}
}

int func_277()//Position - 0x19197
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = joaat("prop_box_ammo05b");
	vVar1 = { 954,847f, -2999,912f, -46,5f };
	vVar2 = { 0f, 0f, 0f };
	if (func_11(iVar0))
	{
		if (unk_0x1887812F0A3EB4F6(1) && !unk_0xC80D31E4B587871C(Local_924[unk_0x9EB17624F44A8DA4() /*24*/], 2))
		{
			iLocal_778 = unk_0x5E35CF35E65D69B9(iVar0, vVar1, 0, false, 1);
			unk_0x59AF3B40AE222194(iLocal_778, vVar2, 2, 1);
			unk_0xB3A8974D2C811672(iLocal_778, false, 0);
			unk_0xEDC33A771FAEB393(iLocal_778, true);
			unk_0x872F1C1F8587CCC7(&(Local_924[unk_0x9EB17624F44A8DA4() /*24*/]), 2);
			unk_0x14776E43F90DD454(iVar0);
			return 1;
		}
	}
	return 0;
}

void func_278()//Position - 0x1922C
{
	if (func_281())
	{
		if (Local_927.f_875 != 1)
		{
			Local_927.f_875 = 1;
		}
	}
	if (Local_927.f_875)
	{
		func_279();
	}
}

void func_279()//Position - 0x19259
{
	switch (Local_927.f_878)
	{
		case 0:
			if (!unk_0x3E9CABD07B829173() && !unk_0x2D0EF1D268F33F25())
			{
				unk_0xAE83ED4C9081AE6F(500);
				func_207(unk_0x9EB17624F44A8DA4(), 0, 0);
			}
			if (unk_0x3E9CABD07B829173())
			{
				Local_927.f_878 = 1;
			}
			break;
		
		case 1:
			if (Global_25505 != 1)
			{
				func_242(1);
			}
			Local_927.f_878 = 2;
			break;
		
		case 2:
			if (unk_0x2C2E1E35924B9FF2(Local_927.f_874))
			{
				func_280(1);
			}
			func_192(&(Local_927.f_876), 0, 0);
			Local_927.f_878 = 4;
			break;
		
		case 4:
			if (unk_0x1A595E6882473810(Local_927.f_874))
			{
				if (unk_0x3E9CABD07B829173())
				{
					if (func_187(&(Local_927.f_876), 2000, 0))
					{
						unk_0x59C3AC31C7544A28(500);
						func_207(unk_0x9EB17624F44A8DA4(), 1, 0);
						if (Local_927.f_55 == unk_0x9EB17624F44A8DA4())
						{
							Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_111.f_43 = 0;
						}
						Local_927.f_875 = 0;
						Local_927.f_878 = 0;
						func_73(&(Local_927.f_876));
					}
				}
			}
			break;
	}
}

void func_280(bool bParam0)//Position - 0x19366
{
	int iVar0;
	
	iVar0 = unk_0xC0765AFBFA616644(974,9542f, -3000,091f, -35f, "imp_impexp_intwaremed");
	if (unk_0xAE9429EF5E8F7D8A(iVar0, "Basic_style_set"))
	{
		unk_0x9D03737FF3A3886F(iVar0, "Basic_style_set");
	}
	if (unk_0xAE9429EF5E8F7D8A(iVar0, "Branded_style_set"))
	{
		unk_0x9D03737FF3A3886F(iVar0, "Branded_style_set");
	}
	if (unk_0xAE9429EF5E8F7D8A(iVar0, "Urban_style_set"))
	{
		unk_0x9D03737FF3A3886F(iVar0, "Urban_style_set");
	}
	switch (Global_1595693[Local_927.f_55 /*680*/].f_266.f_111.f_44)
	{
		case 0:
			if (!unk_0xAE9429EF5E8F7D8A(iVar0, "Basic_style_set"))
			{
				unk_0xE4B2AFF0C4EE2A76(iVar0, "Basic_style_set");
				unk_0xD6D1AAEFAE7423E0(iVar0, "Basic_style_set", 8);
			}
			break;
		
		case 2:
			if (!unk_0xAE9429EF5E8F7D8A(iVar0, "Branded_style_set"))
			{
				unk_0xE4B2AFF0C4EE2A76(iVar0, "Branded_style_set");
				unk_0xD6D1AAEFAE7423E0(iVar0, "Branded_style_set", 1);
			}
			break;
		
		case 1:
			if (!unk_0xAE9429EF5E8F7D8A(iVar0, "Urban_style_set"))
			{
				unk_0xE4B2AFF0C4EE2A76(iVar0, "Urban_style_set");
				unk_0xD6D1AAEFAE7423E0(iVar0, "Urban_style_set", 0);
			}
			break;
		
		default:
			if (!unk_0xAE9429EF5E8F7D8A(iVar0, "Basic_style_set"))
			{
				unk_0xE4B2AFF0C4EE2A76(iVar0, "Basic_style_set");
				unk_0xD6D1AAEFAE7423E0(iVar0, "Basic_style_set", 8);
			}
			break;
	}
	if (bParam0)
	{
		unk_0x9CAF59533FADA559(iVar0);
	}
	Local_927.f_879 = Global_1595693[Local_927.f_55 /*680*/].f_266.f_111.f_44;
}

int func_281()//Position - 0x194B4
{
	if ((((((Local_927.f_879 != -1 && Global_1595693[Local_927.f_55 /*680*/].f_266.f_111.f_44 != -1) && !func_284()) && !unk_0x08D525BE62A22AE0()) && !func_283(unk_0x9EB17624F44A8DA4())) && func_57(unk_0x9EB17624F44A8DA4())) && func_282(Local_927.f_55) == Local_927.f_2)
	{
		return Local_927.f_879 != Global_1595693[Local_927.f_55 /*680*/].f_266.f_111.f_44;
	}
	return 0;
}

int func_282(int iParam0)//Position - 0x19542
{
	if (iParam0 == func_36())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_111;
}

int func_283(int iParam0)//Position - 0x19565
{
	if (iParam0 != func_36() && func_816(iParam0, 1, 1))
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 3);
	}
	return 0;
}

bool func_284()//Position - 0x19599
{
	return unk_0x8B7838D25C063186() != 0;
}

void func_285()//Position - 0x195A7
{
	int iVar0;
	int iVar1;
	
	if (Local_927.f_55 != unk_0x9EB17624F44A8DA4())
	{
		if (func_816(unk_0x9EB17624F44A8DA4(), 1, 1) && Local_927.f_1 == 1)
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
				if (func_286(iVar0))
				{
					if (Local_927.f_55 != func_36())
					{
						if (func_816(Local_927.f_55, 0, 1))
						{
							if (!unk_0x8EE3A848975DDF21(iVar0, -1, 0))
							{
								iVar1 = unk_0x317536BCEA8FA6B0(iVar0, -1, 0);
								if (unk_0x6ADD12BF4D6D2587(iVar1) && unk_0x1417A5CC924DE120(iVar1))
								{
									if (unk_0xDF35170AEEFB473B(iVar1) != Local_927.f_55)
									{
										if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) != 1 && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) != 0)
										{
											unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
										}
									}
								}
							}
							else if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) != 1 && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) != 0)
							{
								unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
							}
						}
						else if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) != 1 && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) != 0)
						{
							unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
						}
					}
				}
			}
		}
		if (Local_927.f_55 != func_36())
		{
			if (func_816(Local_927.f_55, 1, 1))
			{
				if (!unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(Local_927.f_55), 0) || !unk_0x8EE3A848975DDF21(unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(Local_927.f_55), 0), -2, 0))
				{
					unk_0x4FB260623DD93924(0, 23, 1);
				}
			}
		}
	}
}

int func_286(int iParam0)//Position - 0x1972D
{
	switch (unk_0x82FF3DFBC3965CC0(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

void func_287()//Position - 0x1977E
{
	if ((unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()) && !Global_1312416.f_6) && !func_289(1))
	{
		func_288();
		unk_0x872F1C1F8587CCC7(&(Local_924[unk_0x9EB17624F44A8DA4() /*24*/]), 6);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_924[unk_0x9EB17624F44A8DA4() /*24*/]), 6);
	}
}

void func_288()//Position - 0x197CB
{
	Global_17162.f_6 = 1;
}

bool func_289(bool bParam0)//Position - 0x197D9
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

void func_290()//Position - 0x19802
{
	Global_1677782 = 0;
	if (Local_927.f_55 == unk_0x9EB17624F44A8DA4())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			iLocal_780 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1);
			if (iLocal_780 != iLocal_781)
			{
				if (unk_0xA0BF73C5030D3F60(iLocal_780))
				{
					iLocal_781 = iLocal_780;
					unk_0xB4EE449F8D361B88(iLocal_780, 0);
					unk_0xF80DF4F5C0773B3B(iLocal_780, 0);
				}
				else
				{
					unk_0xC8DAB4CEBB9AB263(iLocal_780);
				}
			}
			if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xAC6FC114B15F95EC(iLocal_780) && unk_0xFC1458A37D98B502() == unk_0x317536BCEA8FA6B0(iLocal_780, -1, 0))
				{
					if (func_291())
					{
						if ((((((((((unk_0xBAE4B95B10A2442D(0, 71) != 0f || unk_0xBAE4B95B10A2442D(0, 72) != 0f) || unk_0xF2B58F79D29425B4(0, 71)) || unk_0x4CD14B4B1E8BD8BA(0, 71)) || unk_0x5A632962B08A1872(0, 71)) || unk_0xE8C126B7ADBB9D63(0, 72)) || unk_0xF2B58F79D29425B4(0, 72)) || unk_0x4CD14B4B1E8BD8BA(0, 72)) || unk_0x5A632962B08A1872(0, 72)) && !Global_1312416.f_6) && !func_289(1))
						{
							Global_1677782 = 1;
							if (unk_0xA0BF73C5030D3F60(iLocal_780))
							{
								unk_0xB4EE449F8D361B88(iLocal_780, 1);
								unk_0xF80DF4F5C0773B3B(iLocal_780, 1);
								unk_0x4FB260623DD93924(0, 75, 1);
							}
							else
							{
								unk_0xC8DAB4CEBB9AB263(iLocal_780);
							}
						}
					}
					else
					{
						unk_0x4FB260623DD93924(0, 72, 1);
						unk_0x4FB260623DD93924(0, 71, 1);
					}
				}
			}
		}
		else if (unk_0xB8DE76287EDC4957(iLocal_781, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iLocal_781))
			{
				unk_0xB4EE449F8D361B88(iLocal_781, 1);
				unk_0x4B71BC2F3CC0D5B4(iLocal_781, unk_0x9EB17624F44A8DA4(), 0);
				iLocal_781 = 0;
			}
			else
			{
				unk_0xC8DAB4CEBB9AB263(iLocal_781);
			}
		}
	}
}

int func_291()//Position - 0x199A3
{
	if (!func_292(iLocal_780))
	{
		return 0;
	}
	if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) == 1 || unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) == 0)
	{
		return 0;
	}
	if (Global_1677773)
	{
		return 0;
	}
	return 1;
}

int func_292(int iParam0)//Position - 0x199F1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if ((iVar1 != unk_0x9EB17624F44A8DA4() && iVar1 != func_36()) && unk_0xDE597476C8B96D1A(iVar1))
		{
			if (func_816(iVar1, 1, 1))
			{
				if (unk_0xA8D0477084E86A92(unk_0x25D049AAC4603E65(iVar1), iParam0, 0))
				{
					if (!unk_0xC80D31E4B587871C(Local_924[iVar1 /*24*/], 6))
					{
						return 0;
					}
				}
				else if (unk_0xA8D0477084E86A92(unk_0x25D049AAC4603E65(iVar1), iParam0, 1) || unk_0x5D67DB68EF61B3E1(unk_0x25D049AAC4603E65(iVar1), iParam0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_293()//Position - 0x19A8E
{
	if (func_296())
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_783) && Local_927.f_55 == unk_0x9EB17624F44A8DA4())
		{
			iLocal_783 = func_294(1006,863f, -2997,735f, -39,2055f, 0);
			unk_0x4B4040A0EC7DBA81(iLocal_783, 357);
			unk_0x62BD54E491535B76(iLocal_783, "IE_UNGRD_GARAGE");
			unk_0x3ED68ABD7299EAA3(iLocal_783, 5);
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(iLocal_783))
	{
		unk_0xE30CF11C0EE14316(&iLocal_783);
	}
}

int func_294(vector3 vParam0, int iParam1)//Position - 0x19AFF
{
	int iVar0;
	
	iVar0 = unk_0x6F4378873333A0C2(vParam0);
	unk_0xA5D25D3F884FF516(iVar0, func_295(unk_0x3A711520F83BAE98(), 1f, 1f));
	unk_0xAAAC88CC20771601(iVar0, iParam1);
	return iVar0;
}

float func_295(bool bParam0, float fParam1, float fParam2)//Position - 0x19B2B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_296()//Position - 0x19B42
{
	if (unk_0x078FCDE51274A1BF(unk_0xFC1458A37D98B502()) != -1392667554 && unk_0x078FCDE51274A1BF(unk_0xFC1458A37D98B502()) != 1488891926)
	{
		return 0;
	}
	return 1;
}

void func_297()//Position - 0x19B73
{
	if (func_325())
	{
		func_323();
	}
	if (func_322())
	{
		func_416();
	}
	if (func_321())
	{
		func_318();
	}
	func_298();
}

void func_298()//Position - 0x19BA0
{
	struct<101> Var0;
	struct<101> Var1;
	int iVar2;
	
	if (Local_927.f_55 != func_36() && unk_0x9EB17624F44A8DA4() != Local_927.f_55)
	{
		if (func_317(Local_927.f_55))
		{
			if (!unk_0xC80D31E4B587871C(Local_927.f_6, 1))
			{
				Var0.f_9 = 49;
				Var0.f_59 = 2;
				Var0.f_78 = -1;
				Var0.f_79 = -1;
				Var0.f_96 = -1;
				Var0.f_97 = 1;
				Var0.f_99 = 132;
				Var0.f_100 = -1;
				Var1.f_9 = 49;
				Var1.f_59 = 2;
				Var1.f_78 = -1;
				Var1.f_79 = -1;
				Var1.f_96 = -1;
				Var1.f_97 = 1;
				Var1.f_99 = 132;
				Var1.f_100 = -1;
				func_314(Global_1595693[Local_927.f_55 /*680*/].f_266.f_275, &Var0);
				iVar2 = 0;
				while (iVar2 <= 39)
				{
					if (unk_0x6ADD12BF4D6D2587(Local_927.f_545[iVar2]))
					{
						func_302(Local_927.f_545[iVar2], &Var1);
						if (((((Var1.f_66 == Var0.f_66 && Var1 == Var0) && Var1.f_5 == Var0.f_5) && Var1.f_6 == Var0.f_6) && Var1.f_7 == Var0.f_7) && Var1.f_8 == Var0.f_8)
						{
							func_299(iVar2, 0, 0);
							Local_927.f_545.f_328 = iVar2;
							if (Local_927.f_545.f_82[iVar2] == 0)
							{
								unk_0x872F1C1F8587CCC7(&(Local_927.f_6), 1);
							}
						}
					}
					iVar2++;
				}
			}
		}
		else if (unk_0xC80D31E4B587871C(Local_927.f_6, 1))
		{
			if (unk_0x6ADD12BF4D6D2587(Local_927.f_545[Local_927.f_545.f_328]))
			{
				func_299(Local_927.f_545.f_328, 1, 1);
				if (Local_927.f_545.f_82[Local_927.f_545.f_328] == 1)
				{
					unk_0x0EE72DB1CD8A3B86(&(Local_927.f_6), 1);
				}
			}
		}
	}
}

void func_299(int iParam0, bool bParam1, bool bParam2)//Position - 0x19D6B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_301(iParam0);
	if (unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Local_927.f_545.f_123[iParam0]))
	{
		iVar0 = Local_927.f_545[iParam0];
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			iVar1 = unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Local_927.f_545.f_123[iParam0]));
			iVar2 = system::round(((system::to_float(iVar1) / 1000f) * 255f));
			if (bParam1)
			{
				iVar2 = (255 - system::round(((system::to_float(iVar1) / 1000f) * 255f)));
			}
			unk_0xCFA0B475EBE9E2B7(iVar0, iVar2, 0);
		}
	}
	else
	{
		iVar3 = Local_927.f_545[iParam0];
		if (unk_0x6ADD12BF4D6D2587(iVar3))
		{
			if (bParam1)
			{
				unk_0xCFA0B475EBE9E2B7(iVar3, 255, 0);
				if (unk_0x3B0047CED068C463(unk_0x82FF3DFBC3965CC0(iVar3)))
				{
					unk_0x14776E43F90DD454(unk_0x82FF3DFBC3965CC0(iVar3));
				}
				Local_927.f_545.f_82[iParam0] = 1;
			}
			else
			{
				unk_0xCFA0B475EBE9E2B7(iVar3, 0, 0);
				if (bParam2)
				{
					if (unk_0xA0BF73C5030D3F60(iVar3))
					{
						func_300(iParam0);
					}
				}
				Local_927.f_545.f_82[iParam0] = 0;
			}
		}
		else if (bParam1)
		{
			Local_927.f_545.f_82[iParam0] = 1;
		}
		else
		{
			Local_927.f_545.f_82[iParam0] = 0;
		}
		Local_927.f_545.f_41[iParam0] = 0;
	}
}

int func_300(int iParam0)//Position - 0x19EA9
{
	int iVar0;
	
	iVar0 = Local_927.f_545[iParam0];
	if (unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xA0BF73C5030D3F60(iVar0))
	{
		unk_0xC91FE17AD7353B70(&iVar0);
		Local_927.f_545[iParam0] = 0;
		return 1;
	}
	return 0;
}

void func_301(int iParam0)//Position - 0x19EE7
{
	if (Local_927.f_545.f_41[iParam0] == 0)
	{
		Local_927.f_545.f_123[iParam0] = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 1000);
		Local_927.f_545.f_41[iParam0] = 1;
	}
}

void func_302(int iParam0, var uParam1)//Position - 0x19F23
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_312(iParam0, uParam1);
		unk_0x0EE72DB1CD8A3B86(&(uParam1->f_95), 0);
		if (unk_0xC80D31E4B587871C(uParam1->f_77, 11))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_95), 0);
		}
		if (func_114(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_95), 0);
		}
		if (func_107(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_95), 0);
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = unk_0xDAAE9CE720D2EF80(iParam0);
		uParam1->f_79 = unk_0xD53F3A29BCE2580E(iParam0);
		uParam1->f_80 = unk_0x7D797917CA22961D(iParam0);
		unk_0x12B311F35E40AD17(iParam0, &(uParam1->f_97));
		unk_0xB7A419E1CA09377D(iParam0, &(uParam1->f_99));
		uParam1->f_98 = unk_0x35023A4761A06697(iParam0);
		iVar0 = func_304(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		unk_0x0EE72DB1CD8A3B86(&(uParam1->f_95), 3);
		if (!iVar0 == func_36())
		{
			unk_0x1D52B46CB20A5CF3(iVar0, &(uParam1->f_81), 13);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_95), 1);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_95), 1);
		}
		if (iVar0 == unk_0x9EB17624F44A8DA4())
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_303(iParam0))
				{
					unk_0x872F1C1F8587CCC7(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_95), 2);
		}
	}
}

int func_303(int iParam0)//Position - 0x1A054
{
	if (Global_2512808.f_284 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0, var uParam1, var uParam2)//Position - 0x1A06D
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0) && unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		if (func_311(iParam0, 1))
		{
			*uParam1 = 1;
			if (unk_0x6C5223DB5E5CFD9B("PV_Slot", 3))
			{
				if (unk_0xB80A4DA4C06A76F1(iParam0, "PV_Slot"))
				{
					*uParam2 = unk_0x2786E663D1846FFC(iParam0, "PV_Slot");
				}
			}
			return func_310(iParam0);
		}
		else if (func_309(iParam0, 1))
		{
			return func_308(iParam0);
		}
		else if (func_307(iParam0, 1))
		{
			*uParam1 = 2;
			return func_305(iParam0);
		}
		else if (!unk_0x8EE3A848975DDF21(iParam0, -1, 0))
		{
			iVar0 = unk_0x317536BCEA8FA6B0(iParam0, -1, 0);
			if (unk_0x6ADD12BF4D6D2587(iVar0))
			{
				if (unk_0x1417A5CC924DE120(iVar0))
				{
					*uParam1 = 3;
					return unk_0xDF35170AEEFB473B(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return unk_0x9EB17624F44A8DA4();
}

int func_305(int iParam0)//Position - 0x1A137
{
	int iVar0;
	
	iVar0 = unk_0x2786E663D1846FFC(iParam0, "Veh_Modded_By_Player");
	return func_306(iVar0, 0, 1, 0);
}

int func_306(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1A154
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = unk_0xF6A72924028F588B(iVar1);
			if (func_816(iVar0, 0, 1) || (iParam1 && unk_0x6974F612FDEC1ADA(iVar0)))
			{
				if (iParam0 == unk_0xDFD4F88AAFDE2371(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_816(iParam3, 0, 1) || (iParam1 && unk_0x6974F612FDEC1ADA(iParam3)))
	{
		if (iParam0 == unk_0xDFD4F88AAFDE2371(iParam3))
		{
			return iParam3;
		}
	}
	return func_36();
}

int func_307(int iParam0, bool bParam1)//Position - 0x1A1DF
{
	if (Global_70856)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && (!bParam1 || unk_0xB8DE76287EDC4957(iParam0, 0)))
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_308(int iParam0)//Position - 0x1A21E
{
	int iVar0;
	
	if (!func_309(iParam0, 1))
	{
		return func_36();
	}
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar0 = unk_0x2786E663D1846FFC(iParam0, "Player_Truck");
		return func_306(iVar0, 0, 1, 0);
	}
	return func_36();
}

int func_309(int iParam0, bool bParam1)//Position - 0x1A25D
{
	if (Global_70856)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && (!bParam1 || unk_0xB8DE76287EDC4957(iParam0, 0)))
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_310(int iParam0)//Position - 0x1A29C
{
	int iVar0;
	
	if (!func_311(iParam0, 1))
	{
		return func_36();
	}
	iVar0 = unk_0x2786E663D1846FFC(iParam0, "Player_Vehicle");
	return func_306(iVar0, 0, 1, 0);
}

int func_311(int iParam0, bool bParam1)//Position - 0x1A2CB
{
	if (Global_70856)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && (!bParam1 || unk_0xB8DE76287EDC4957(iParam0, 0)))
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_312(int iParam0, var uParam1)//Position - 0x1A30A
{
	int iVar0;
	
	if (unk_0xB8DE76287EDC4957(iParam0, 0))
	{
		func_176(uParam1);
		uParam1->f_66 = unk_0x82FF3DFBC3965CC0(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xF2D2D6860D636A58(iParam0), 16);
		*uParam1 = unk_0xBB95820E68A4EB0D(iParam0);
		unk_0xAEC96F2E5A91C606(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x0DA0B030029E4E6E(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x7869E6E4E193E666(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x55F371CF3DB9BFA1(iParam0);
		uParam1->f_67 = unk_0x7E3C3BFAB9ADD960(iParam0);
		uParam1->f_69 = unk_0x0260F35A831D6738(iParam0);
		uParam1->f_70 = unk_0x37956F2B588E40E6(iParam0);
		unk_0xFBAEDCD645F4B3F7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x063C5BF33FA1D85E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x378B727FB0126407(iParam0, 2))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
		}
		if (unk_0x378B727FB0126407(iParam0, 3))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
		}
		if (unk_0x378B727FB0126407(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
		}
		if (unk_0x378B727FB0126407(iParam0, 1))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_140(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x965BEFCC45024E92(iParam0, 0))
		{
			uParam1->f_68 = unk_0xBFAC036AADDA5F9F(iParam0);
		}
		if (unk_0x849A8CFD71854E02(uParam1->f_66))
		{
			if (unk_0xEF8C0B8E0D7402FE(iParam0))
			{
				switch (unk_0xCD44B25535473ABE(iParam0))
				{
					case 3:
					case 0:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 23);
						unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x84EE59E8804FCC8C(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 9);
		}
		if (unk_0xE7F7942A19E7A681(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 10);
		}
		if (unk_0x47833BA8B6BB150B(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 13);
			unk_0x91A0B42E2753BEF7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x11C2F368CD69AADB(iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 12);
		}
		func_313(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x7C7056D6F2A31BF6(iParam0, iVar0 + 1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam1->f_77), func_143(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3F7A17ABD44B7297(iParam0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 11);
		}
		if (unk_0xB80A4DA4C06A76F1(iParam0, "IgnoredByQuickSave") && unk_0xD5736BCB654EA8FC(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam1->f_77), 27);
		}
	}
}

int func_313(int iParam0, var uParam1, var uParam2)//Position - 0x1A5B5
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB8DE76287EDC4957(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x96E226626970ABA3(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x55F6AB4050FE1F69(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF928889F6E5C7677(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8D462BB6E4814682(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_314(int iParam0, var uParam1)//Position - 0x1A68F
{
	uParam1->f_67 = -1;
	uParam1->f_66 = 0;
	switch (iParam0)
	{
		case 28:
			uParam1->f_66 = joaat("alpha");
			StringCopy(&(uParam1->f_1), "V1S1ONRY", 16);
			uParam1->f_5 = 118;
			uParam1->f_6 = 118;
			uParam1->f_7 = 3;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 24);
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[22] = 1;
			break;
		
		case 82:
			uParam1->f_66 = joaat("banshee2");
			StringCopy(&(uParam1->f_1), "DR1FT3R", 16);
			uParam1->f_5 = 69;
			uParam1->f_6 = 96;
			uParam1->f_7 = 107;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 180;
			uParam1->f_63 = 130;
			uParam1->f_64 = 97;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 5;
			uParam1->f_9[7] = 3;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 5;
			uParam1->f_9[28] = 18;
			uParam1->f_59[0] = 1;
			break;
		
		case 7:
			uParam1->f_66 = joaat("bestiagts");
			StringCopy(&(uParam1->f_1), "BE4STY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 40;
			uParam1->f_6 = 57;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[7] = 1;
			break;
		
		case 37:
			uParam1->f_66 = joaat("btype3");
			StringCopy(&(uParam1->f_1), "L4WLE55", 16);
			*uParam1 = 2;
			uParam1->f_5 = 146;
			uParam1->f_6 = 118;
			uParam1->f_7 = 33;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[5] = 3;
			uParam1->f_9[6] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[9] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[43] = 1;
			uParam1->f_9[44] = 3;
			uParam1->f_9[46] = 2;
			break;
		
		case 76:
			uParam1->f_66 = joaat("cheetah");
			StringCopy(&(uParam1->f_1), "BUZZ3D", 16);
			*uParam1 = 1;
			uParam1->f_5 = 91;
			uParam1->f_6 = 67;
			uParam1->f_7 = 70;
			uParam1->f_8 = 35;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_63 = 174;
			uParam1->f_64 = 239;
			uParam1->f_74 = 255;
			uParam1->f_75 = 5;
			uParam1->f_76 = 190;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 6;
			break;
		
		case 73:
			uParam1->f_66 = joaat("coquette2");
			StringCopy(&(uParam1->f_1), "T0PL3SS", 16);
			uParam1->f_5 = 66;
			uParam1->f_6 = 2;
			uParam1->f_7 = 136;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 203;
			uParam1->f_63 = 54;
			uParam1->f_64 = 148;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			uParam1->f_9[2] = 3;
			uParam1->f_9[4] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 43;
			break;
		
		case 61:
			uParam1->f_66 = joaat("coquette3");
			StringCopy(&(uParam1->f_1), "V1NT4G3", 16);
			uParam1->f_5 = 5;
			uParam1->f_6 = 117;
			uParam1->f_7 = 112;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 20;
			uParam1->f_63 = 20;
			uParam1->f_64 = 20;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 1);
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			break;
		
		case 49:
			uParam1->f_66 = joaat("entityxf");
			StringCopy(&(uParam1->f_1), "IML4TE", 16);
			*uParam1 = 1;
			uParam1->f_5 = 35;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 15;
			uParam1->f_75 = 3;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 26);
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[14] = 33;
			uParam1->f_9[15] = 2;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 23;
			uParam1->f_59[0] = 1;
			break;
		
		case 70:
			uParam1->f_66 = joaat("feltzer2");
			StringCopy(&(uParam1->f_1), "P0W3RFUL", 16);
			*uParam1 = 2;
			uParam1->f_5 = 83;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_75 = 255;
			uParam1->f_76 = 140;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			break;
		
		case 40:
			uParam1->f_66 = joaat("feltzer3");
			StringCopy(&(uParam1->f_1), "M4J3ST1C", 16);
			uParam1->f_5 = 100;
			uParam1->f_6 = 149;
			uParam1->f_7 = 105;
			uParam1->f_8 = 109;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[4] = 1;
			uParam1->f_9[6] = 2;
			uParam1->f_9[23] = 6;
			break;
		
		case 19:
			uParam1->f_66 = joaat("fmj");
			StringCopy(&(uParam1->f_1), "C4TCHM3", 16);
			*uParam1 = 4;
			uParam1->f_5 = 92;
			uParam1->f_6 = 159;
			uParam1->f_7 = 135;
			uParam1->f_8 = 41;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[10] = 2;
			uParam1->f_9[15] = 4;
			uParam1->f_9[23] = 8;
			break;
		
		case 94:
			uParam1->f_66 = joaat("jester");
			StringCopy(&(uParam1->f_1), "H0TP1NK", 16);
			*uParam1 = 2;
			uParam1->f_5 = 135;
			uParam1->f_6 = 54;
			uParam1->f_7 = 67;
			uParam1->f_8 = 140;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_63 = 174;
			uParam1->f_64 = 239;
			uParam1->f_75 = 255;
			uParam1->f_76 = 140;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 2;
			uParam1->f_9[10] = 1;
			uParam1->f_9[14] = 6;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 2;
			break;
		
		case 31:
			uParam1->f_66 = joaat("mamba");
			StringCopy(&(uParam1->f_1), "0LDBLU3", 16);
			uParam1->f_5 = 74;
			uParam1->f_6 = 154;
			uParam1->f_7 = 74;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 2);
			uParam1->f_9[4] = 1;
			uParam1->f_9[23] = 27;
			uParam1->f_59[0] = 1;
			break;
		
		case 88:
			uParam1->f_66 = joaat("massacro");
			StringCopy(&(uParam1->f_1), "TR0P1CAL", 16);
			*uParam1 = 3;
			uParam1->f_5 = 54;
			uParam1->f_6 = 6;
			uParam1->f_7 = 92;
			uParam1->f_8 = 91;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 252;
			uParam1->f_63 = 238;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 14;
			break;
		
		case 79:
			uParam1->f_66 = joaat("nightshade");
			StringCopy(&(uParam1->f_1), "DE4DLY", 16);
			*uParam1 = 3;
			uParam1->f_5 = 147;
			uParam1->f_6 = 119;
			uParam1->f_7 = 34;
			uParam1->f_8 = 35;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 226;
			uParam1->f_63 = 6;
			uParam1->f_64 = 6;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 23;
			break;
		
		case 58:
			uParam1->f_66 = joaat("omnis");
			StringCopy(&(uParam1->f_1), "0BEYM3", 16);
			*uParam1 = 1;
			uParam1->f_5 = 36;
			uParam1->f_6 = 92;
			uParam1->f_7 = 89;
			uParam1->f_8 = 55;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 114;
			uParam1->f_63 = 204;
			uParam1->f_64 = 114;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			uParam1->f_9[4] = 1;
			uParam1->f_9[14] = 45;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 13;
			uParam1->f_59[0] = 1;
			break;
		
		case 16:
			uParam1->f_66 = joaat("osiris");
			StringCopy(&(uParam1->f_1), "OH3LL0", 16);
			uParam1->f_5 = 147;
			uParam1->f_6 = 119;
			uParam1->f_7 = 5;
			uParam1->f_8 = 70;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 15;
			uParam1->f_75 = 3;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[1] = 5;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 13;
			break;
		
		case 25:
			uParam1->f_66 = joaat("pfister811");
			StringCopy(&(uParam1->f_1), "M1DL1F3", 16);
			uParam1->f_5 = 50;
			uParam1->f_6 = 50;
			uParam1->f_7 = 53;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 5;
			uParam1->f_9[4] = 3;
			uParam1->f_9[22] = 1;
			break;
		
		case 1:
			uParam1->f_66 = joaat("prototipo");
			StringCopy(&(uParam1->f_1), "FUTUR3", 16);
			*uParam1 = 1;
			uParam1->f_5 = 146;
			uParam1->f_6 = 35;
			uParam1->f_7 = 145;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 252;
			uParam1->f_63 = 238;
			uParam1->f_74 = 35;
			uParam1->f_75 = 1;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[1] = 2;
			uParam1->f_9[14] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			break;
		
		case 22:
			uParam1->f_66 = joaat("reaper");
			StringCopy(&(uParam1->f_1), "2FA5T4U", 16);
			*uParam1 = 4;
			uParam1->f_5 = 71;
			uParam1->f_6 = 2;
			uParam1->f_7 = 107;
			uParam1->f_8 = 145;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 132;
			uParam1->f_63 = 102;
			uParam1->f_64 = 226;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 1;
			uParam1->f_59[0] = 1;
			break;
		
		case 91:
			uParam1->f_66 = joaat("sabregt2");
			StringCopy(&(uParam1->f_1), "GUNZ0UT", 16);
			uParam1->f_5 = 141;
			uParam1->f_6 = 118;
			uParam1->f_7 = 64;
			uParam1->f_8 = 88;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[24] = 1;
			break;
		
		case 64:
			uParam1->f_66 = joaat("seven70");
			StringCopy(&(uParam1->f_1), "FRU1TY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 84;
			uParam1->f_6 = 3;
			uParam1->f_8 = 138;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 14;
			uParam1->f_59[0] = 1;
			break;
		
		case 13:
			uParam1->f_66 = joaat("sheava");
			StringCopy(&(uParam1->f_1), "B1GB0Y", 16);
			*uParam1 = 3;
			uParam1->f_5 = 29;
			uParam1->f_6 = 34;
			uParam1->f_7 = 35;
			uParam1->f_8 = 1;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 20;
			uParam1->f_63 = 20;
			uParam1->f_64 = 20;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[10] = 1;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 1;
			uParam1->f_59[0] = 1;
			break;
		
		case 52:
			uParam1->f_66 = joaat("sultanrs");
			StringCopy(&(uParam1->f_1), "SN0WFLK3", 16);
			uParam1->f_5 = 111;
			uParam1->f_6 = 112;
			uParam1->f_7 = 4;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 15;
			uParam1->f_9[1] = 7;
			uParam1->f_9[2] = 6;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 5;
			uParam1->f_9[7] = 9;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[23] = 22;
			uParam1->f_59[0] = 1;
			break;
		
		case 10:
			uParam1->f_66 = joaat("t20");
			StringCopy(&(uParam1->f_1), "CAR4M3L", 16);
			*uParam1 = 2;
			uParam1->f_5 = 106;
			uParam1->f_6 = 159;
			uParam1->f_7 = 67;
			uParam1->f_8 = 136;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 180;
			uParam1->f_63 = 130;
			uParam1->f_64 = 97;
			uParam1->f_74 = 255;
			uParam1->f_75 = 50;
			uParam1->f_76 = 100;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			uParam1->f_9[1] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 16;
			break;
		
		case 34:
			uParam1->f_66 = joaat("tampa");
			StringCopy(&(uParam1->f_1), "CH4RG3D", 16);
			*uParam1 = 3;
			uParam1->f_5 = 12;
			uParam1->f_6 = 120;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 20;
			uParam1->f_63 = 20;
			uParam1->f_64 = 20;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[14] = 43;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 30;
			uParam1->f_59[0] = 1;
			break;
		
		case 85:
			uParam1->f_66 = joaat("turismor");
			StringCopy(&(uParam1->f_1), "IN4H4ZE", 16);
			*uParam1 = 1;
			uParam1->f_5 = 145;
			uParam1->f_6 = 119;
			uParam1->f_7 = 70;
			uParam1->f_8 = 140;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 12;
			break;
		
		case 46:
			uParam1->f_66 = joaat("tropos");
			StringCopy(&(uParam1->f_1), "1MS0RAD", 16);
			*uParam1 = 2;
			uParam1->f_5 = 34;
			uParam1->f_6 = 149;
			uParam1->f_8 = 153;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_75 = 255;
			uParam1->f_76 = 140;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 5;
			break;
		
		case 4:
			uParam1->f_66 = joaat("tyrus");
			StringCopy(&(uParam1->f_1), "C1TRUS", 16);
			uParam1->f_5 = 36;
			uParam1->f_6 = 3;
			uParam1->f_7 = 26;
			uParam1->f_8 = 89;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 252;
			uParam1->f_63 = 238;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[4] = 2;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 10;
			uParam1->f_59[0] = 1;
			break;
		
		case 67:
			uParam1->f_66 = joaat("verlierer2");
			StringCopy(&(uParam1->f_1), "PR3C1OUS", 16);
			*uParam1 = 1;
			uParam1->f_5 = 136;
			uParam1->f_6 = 118;
			uParam1->f_7 = 5;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 20;
			uParam1->f_63 = 20;
			uParam1->f_64 = 20;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[20] = 1;
			break;
		
		case 55:
			uParam1->f_66 = joaat("zentorno");
			StringCopy(&(uParam1->f_1), "W1NN1NG", 16);
			*uParam1 = 1;
			uParam1->f_5 = 119;
			uParam1->f_6 = 29;
			uParam1->f_7 = 5;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 1;
			uParam1->f_76 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 2;
			uParam1->f_9[22] = 1;
			break;
		
		case 43:
			uParam1->f_66 = joaat("ztype");
			StringCopy(&(uParam1->f_1), "B1GMON3Y", 16);
			*uParam1 = 1;
			uParam1->f_5 = 159;
			uParam1->f_6 = 146;
			uParam1->f_7 = 160;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[6] = 1;
			uParam1->f_9[23] = 20;
			uParam1->f_59[0] = 1;
			break;
	}
	if (uParam1->f_66 == 0)
	{
		func_315(iParam0, uParam1);
	}
}

void func_315(int iParam0, var uParam1)//Position - 0x1BC61
{
	switch (iParam0)
	{
		case 29:
			uParam1->f_66 = joaat("alpha");
			StringCopy(&(uParam1->f_1), "L0NG80Y", 16);
			uParam1->f_5 = 35;
			uParam1->f_6 = 5;
			uParam1->f_7 = 28;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 1;
			uParam1->f_76 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 26);
			uParam1->f_9[0] = 3;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 1;
			break;
		
		case 83:
			uParam1->f_66 = joaat("banshee2");
			StringCopy(&(uParam1->f_1), "D0M1N0", 16);
			uParam1->f_6 = 111;
			uParam1->f_8 = 158;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 1);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 5;
			uParam1->f_9[6] = 4;
			uParam1->f_9[7] = 2;
			uParam1->f_9[8] = 2;
			break;
		
		case 8:
			uParam1->f_66 = joaat("bestiagts");
			StringCopy(&(uParam1->f_1), "5T34LTH", 16);
			uParam1->f_5 = 149;
			uParam1->f_6 = 57;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 1;
			uParam1->f_9[7] = 3;
			uParam1->f_9[23] = 37;
			break;
		
		case 38:
			uParam1->f_66 = joaat("btype3");
			StringCopy(&(uParam1->f_1), "0LDT1M3R", 16);
			*uParam1 = 3;
			uParam1->f_5 = 100;
			uParam1->f_6 = 52;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 2;
			uParam1->f_9[5] = 3;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[43] = 1;
			uParam1->f_9[44] = 2;
			uParam1->f_9[46] = 1;
			break;
		
		case 77:
			uParam1->f_66 = joaat("cheetah");
			StringCopy(&(uParam1->f_1), "M1DN1GHT", 16);
			uParam1->f_5 = 72;
			uParam1->f_7 = 106;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 3;
			break;
		
		case 74:
			uParam1->f_66 = joaat("coquette2");
			StringCopy(&(uParam1->f_1), "T0FF33", 16);
			*uParam1 = 3;
			uParam1->f_5 = 37;
			uParam1->f_7 = 106;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 1);
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[4] = 4;
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 3;
			break;
		
		case 62:
			uParam1->f_66 = joaat("coquette3");
			StringCopy(&(uParam1->f_1), "W1P30UT", 16);
			uParam1->f_5 = 68;
			uParam1->f_6 = 112;
			uParam1->f_7 = 68;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[23] = 28;
			break;
		
		case 50:
			uParam1->f_66 = joaat("entityxf");
			StringCopy(&(uParam1->f_1), "0V3RFL0D", 16);
			uParam1->f_5 = 70;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[23] = 26;
			break;
		
		case 71:
			uParam1->f_66 = joaat("feltzer2");
			StringCopy(&(uParam1->f_1), "K3YL1M3", 16);
			uParam1->f_5 = 92;
			uParam1->f_7 = 89;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 94;
			uParam1->f_75 = 255;
			uParam1->f_76 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[23] = 43;
			uParam1->f_59[0] = 1;
			break;
		
		case 41:
			uParam1->f_66 = joaat("feltzer3");
			StringCopy(&(uParam1->f_1), "T0UR3R", 16);
			uParam1->f_5 = 34;
			uParam1->f_6 = 7;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[23] = 33;
			break;
		
		case 20:
			uParam1->f_66 = joaat("fmj");
			StringCopy(&(uParam1->f_1), "J0K3R", 16);
			*uParam1 = 1;
			uParam1->f_5 = 35;
			uParam1->f_6 = 111;
			uParam1->f_7 = 25;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 226;
			uParam1->f_63 = 6;
			uParam1->f_64 = 6;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 3;
			uParam1->f_9[1] = 3;
			uParam1->f_9[10] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 36;
			break;
		
		case 95:
			uParam1->f_66 = joaat("jester");
			StringCopy(&(uParam1->f_1), "T0PCL0WN", 16);
			*uParam1 = 1;
			uParam1->f_5 = 52;
			uParam1->f_7 = 5;
			uParam1->f_8 = 151;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 2;
			uParam1->f_9[23] = 6;
			break;
		
		case 32:
			uParam1->f_66 = joaat("mamba");
			StringCopy(&(uParam1->f_1), "BLKM4MB4", 16);
			*uParam1 = 1;
			uParam1->f_6 = 111;
			uParam1->f_7 = 10;
			uParam1->f_8 = 122;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 1);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 2);
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 6;
			break;
		
		case 89:
			uParam1->f_66 = joaat("massacro");
			StringCopy(&(uParam1->f_1), "B4N4N4", 16);
			uParam1->f_5 = 89;
			uParam1->f_6 = 6;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 252;
			uParam1->f_63 = 238;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 4;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 4;
			uParam1->f_9[5] = 2;
			uParam1->f_9[7] = 3;
			uParam1->f_9[8] = 1;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 38;
			break;
		
		case 80:
			uParam1->f_66 = joaat("nightshade");
			StringCopy(&(uParam1->f_1), "TH37OS", 16);
			uParam1->f_5 = 63;
			uParam1->f_6 = 112;
			uParam1->f_7 = 87;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 3;
			uParam1->f_9[2] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[23] = 24;
			break;
		
		case 59:
			uParam1->f_66 = joaat("omnis");
			StringCopy(&(uParam1->f_1), "W1D3B0D", 16);
			*uParam1 = 2;
			uParam1->f_5 = 111;
			uParam1->f_6 = 64;
			uParam1->f_8 = 81;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[23] = 7;
			break;
		
		case 17:
			uParam1->f_66 = joaat("osiris");
			StringCopy(&(uParam1->f_1), "PH4R40H", 16);
			uParam1->f_5 = 40;
			uParam1->f_6 = 1;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 1;
			uParam1->f_76 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 6;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[23] = 28;
			break;
		
		case 26:
			uParam1->f_66 = joaat("pfister811");
			StringCopy(&(uParam1->f_1), "R3G4L", 16);
			uParam1->f_5 = 145;
			uParam1->f_6 = 88;
			uParam1->f_7 = 64;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[23] = 26;
			break;
		
		case 2:
			uParam1->f_66 = joaat("prototipo");
			StringCopy(&(uParam1->f_1), "M4K3B4NK", 16);
			uParam1->f_5 = 111;
			uParam1->f_6 = 147;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[23] = 35;
			break;
		
		case 23:
			uParam1->f_66 = joaat("reaper");
			StringCopy(&(uParam1->f_1), "D34TH4U", 16);
			uParam1->f_5 = 118;
			uParam1->f_6 = 28;
			uParam1->f_7 = 3;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 222;
			uParam1->f_75 = 222;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 16;
			break;
		
		case 92:
			uParam1->f_66 = joaat("sabregt2");
			StringCopy(&(uParam1->f_1), "0R1G1N4L", 16);
			*uParam1 = 1;
			uParam1->f_5 = 88;
			uParam1->f_6 = 33;
			uParam1->f_7 = 105;
			uParam1->f_8 = 33;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 252;
			uParam1->f_63 = 238;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 24);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 2;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 5;
			uParam1->f_59[0] = 1;
			break;
		
		case 65:
			uParam1->f_66 = joaat("seven70");
			StringCopy(&(uParam1->f_1), "4LL0Y5", 16);
			*uParam1 = 4;
			uParam1->f_5 = 51;
			uParam1->f_6 = 3;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[23] = 29;
			break;
		
		case 14:
			uParam1->f_66 = joaat("sheava");
			StringCopy(&(uParam1->f_1), "M0N4RCH", 16);
			*uParam1 = 3;
			uParam1->f_5 = 64;
			uParam1->f_6 = 147;
			uParam1->f_7 = 68;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 226;
			uParam1->f_63 = 6;
			uParam1->f_64 = 6;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 3;
			uParam1->f_9[1] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[10] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 43;
			break;
		
		case 53:
			uParam1->f_66 = joaat("sultanrs");
			StringCopy(&(uParam1->f_1), "F1D3L1TY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 147;
			uParam1->f_6 = 147;
			uParam1->f_7 = 4;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 9;
			uParam1->f_9[1] = 11;
			uParam1->f_9[2] = 6;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 3;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 3;
			uParam1->f_9[8] = 5;
			uParam1->f_9[10] = 4;
			uParam1->f_9[23] = 7;
			break;
		
		case 11:
			uParam1->f_66 = joaat("t20");
			StringCopy(&(uParam1->f_1), "T0PSP33D", 16);
			*uParam1 = 2;
			uParam1->f_5 = 88;
			uParam1->f_6 = 33;
			uParam1->f_7 = 33;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 150;
			uParam1->f_76 = 5;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 3;
			uParam1->f_9[7] = 1;
			uParam1->f_9[23] = 30;
			break;
		
		case 35:
			uParam1->f_66 = joaat("tampa");
			StringCopy(&(uParam1->f_1), "CRU151N", 16);
			*uParam1 = 1;
			uParam1->f_5 = 28;
			uParam1->f_6 = 106;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 16;
			break;
		
		case 47:
			uParam1->f_66 = joaat("tropos");
			StringCopy(&(uParam1->f_1), "31GHT135", 16);
			uParam1->f_5 = 51;
			uParam1->f_6 = 107;
			uParam1->f_7 = 104;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[6] = 1;
			uParam1->f_9[23] = 16;
			break;
		
		case 86:
			uParam1->f_66 = joaat("turismor");
			StringCopy(&(uParam1->f_1), "M1LKYW4Y", 16);
			*uParam1 = 3;
			uParam1->f_5 = 146;
			uParam1->f_6 = 142;
			uParam1->f_7 = 73;
			uParam1->f_8 = 156;
			uParam1->f_69 = 7;
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 22;
			break;
		
		case 5:
			uParam1->f_66 = joaat("tyrus");
			StringCopy(&(uParam1->f_1), "B35TL4P", 16);
			*uParam1 = 1;
			uParam1->f_5 = 12;
			uParam1->f_6 = 3;
			uParam1->f_8 = 38;
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[23] = 13;
			break;
		
		case 68:
			uParam1->f_66 = joaat("verlierer2");
			StringCopy(&(uParam1->f_1), "0UTFR0NT", 16);
			*uParam1 = 4;
			uParam1->f_5 = 36;
			uParam1->f_7 = 32;
			uParam1->f_8 = 156;
			uParam1->f_69 = 7;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 4;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 5;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 2;
			uParam1->f_9[23] = 34;
			break;
		
		case 56:
			uParam1->f_66 = joaat("zentorno");
			StringCopy(&(uParam1->f_1), "0LDN3W5", 16);
			uParam1->f_5 = 34;
			uParam1->f_6 = 28;
			uParam1->f_8 = 45;
			uParam1->f_69 = 7;
			uParam1->f_9[0] = 3;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[23] = 20;
			break;
		
		case 44:
			uParam1->f_66 = joaat("ztype");
			StringCopy(&(uParam1->f_1), "K1NGP1N", 16);
			*uParam1 = 4;
			uParam1->f_5 = 67;
			uParam1->f_6 = 5;
			uParam1->f_7 = 67;
			uParam1->f_8 = 156;
			uParam1->f_69 = 1;
			uParam1->f_9[23] = 28;
			break;
	}
	if (uParam1->f_66 == 0)
	{
		func_316(iParam0, uParam1);
	}
}

void func_316(int iParam0, var uParam1)//Position - 0x1CF00
{
	switch (iParam0)
	{
		case 30:
			uParam1->f_66 = joaat("alpha");
			StringCopy(&(uParam1->f_1), "R31GN", 16);
			*uParam1 = 4;
			uParam1->f_5 = 71;
			uParam1->f_6 = 71;
			uParam1->f_7 = 28;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 24);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 29;
			uParam1->f_59[0] = 1;
			break;
		
		case 84:
			uParam1->f_66 = joaat("banshee2");
			StringCopy(&(uParam1->f_1), "H0WL3R", 16);
			*uParam1 = 4;
			uParam1->f_5 = 138;
			uParam1->f_6 = 138;
			uParam1->f_7 = 89;
			uParam1->f_8 = 138;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 15;
			uParam1->f_75 = 3;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 1);
			uParam1->f_9[0] = 6;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 5;
			uParam1->f_9[6] = 4;
			uParam1->f_9[7] = 6;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 19;
			uParam1->f_59[0] = 1;
			break;
		
		case 9:
			uParam1->f_66 = joaat("bestiagts");
			StringCopy(&(uParam1->f_1), "5M00TH", 16);
			*uParam1 = 2;
			uParam1->f_5 = 65;
			uParam1->f_6 = 57;
			uParam1->f_7 = 53;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 33;
			uParam1->f_59[0] = 1;
			break;
		
		case 39:
			uParam1->f_66 = joaat("btype3");
			StringCopy(&(uParam1->f_1), "V4L0R", 16);
			uParam1->f_5 = 12;
			uParam1->f_6 = 28;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 20;
			uParam1->f_63 = 20;
			uParam1->f_64 = 20;
			uParam1->f_74 = 255;
			uParam1->f_75 = 1;
			uParam1->f_76 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[5] = 2;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 3;
			uParam1->f_9[8] = 2;
			uParam1->f_9[9] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 10;
			uParam1->f_9[43] = 1;
			uParam1->f_9[44] = 2;
			uParam1->f_59[0] = 1;
			break;
		
		case 78:
			uParam1->f_66 = joaat("cheetah");
			StringCopy(&(uParam1->f_1), "B1GC4T", 16);
			*uParam1 = 3;
			uParam1->f_5 = 70;
			uParam1->f_6 = 136;
			uParam1->f_7 = 136;
			uParam1->f_8 = 136;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 203;
			uParam1->f_63 = 54;
			uParam1->f_64 = 148;
			uParam1->f_74 = 255;
			uParam1->f_75 = 50;
			uParam1->f_76 = 100;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 3;
			uParam1->f_59[0] = 1;
			break;
		
		case 75:
			uParam1->f_66 = joaat("coquette2");
			StringCopy(&(uParam1->f_1), "CL45SY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 92;
			uParam1->f_6 = 38;
			uParam1->f_7 = 38;
			uParam1->f_8 = 41;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 1);
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 2;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[23] = 12;
			uParam1->f_59[0] = 1;
			break;
		
		case 63:
			uParam1->f_66 = joaat("coquette3");
			StringCopy(&(uParam1->f_1), "BLKF1N", 16);
			*uParam1 = 4;
			uParam1->f_5 = 35;
			uParam1->f_6 = 107;
			uParam1->f_7 = 25;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 2;
			uParam1->f_59[0] = 1;
			break;
		
		case 51:
			uParam1->f_66 = joaat("entityxf");
			StringCopy(&(uParam1->f_1), "W1DEB0Y", 16);
			*uParam1 = 2;
			uParam1->f_5 = 41;
			uParam1->f_8 = 122;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 226;
			uParam1->f_63 = 6;
			uParam1->f_64 = 6;
			uParam1->f_74 = 255;
			uParam1->f_75 = 1;
			uParam1->f_76 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 26);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 5;
			uParam1->f_59[0] = 1;
			break;
		
		case 72:
			uParam1->f_66 = joaat("feltzer2");
			StringCopy(&(uParam1->f_1), "R4C3R", 16);
			*uParam1 = 1;
			uParam1->f_5 = 70;
			uParam1->f_7 = 70;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[23] = 35;
			uParam1->f_59[0] = 1;
			break;
		
		case 42:
			uParam1->f_66 = joaat("feltzer3");
			StringCopy(&(uParam1->f_1), "R4LLY", 16);
			uParam1->f_5 = 54;
			uParam1->f_6 = 7;
			uParam1->f_7 = 60;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 2;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[23] = 7;
			break;
		
		case 21:
			uParam1->f_66 = joaat("fmj");
			StringCopy(&(uParam1->f_1), "H0T4U", 16);
			*uParam1 = 1;
			uParam1->f_5 = 71;
			uParam1->f_6 = 135;
			uParam1->f_7 = 135;
			uParam1->f_8 = 135;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 203;
			uParam1->f_63 = 54;
			uParam1->f_64 = 148;
			uParam1->f_74 = 255;
			uParam1->f_75 = 50;
			uParam1->f_76 = 100;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 5;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 16;
			break;
		
		case 96:
			uParam1->f_66 = joaat("jester");
			StringCopy(&(uParam1->f_1), "NOF00L", 16);
			uParam1->f_5 = 131;
			uParam1->f_6 = 42;
			uParam1->f_8 = 88;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 4;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 2;
			uParam1->f_9[15] = 4;
			uParam1->f_9[23] = 2;
			uParam1->f_59[0] = 1;
			break;
		
		case 33:
			uParam1->f_66 = joaat("mamba");
			StringCopy(&(uParam1->f_1), "V1P", 16);
			*uParam1 = 4;
			uParam1->f_5 = 51;
			uParam1->f_6 = 120;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 1);
			uParam1->f_9[7] = 1;
			uParam1->f_9[15] = 1;
			uParam1->f_9[23] = 2;
			break;
		
		case 90:
			uParam1->f_66 = joaat("massacro");
			StringCopy(&(uParam1->f_1), "B055", 16);
			*uParam1 = 4;
			uParam1->f_5 = 2;
			uParam1->f_6 = 6;
			uParam1->f_7 = 38;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[7] = 2;
			uParam1->f_9[8] = 1;
			uParam1->f_9[23] = 29;
			uParam1->f_59[0] = 1;
			break;
		
		case 81:
			uParam1->f_66 = joaat("nightshade");
			StringCopy(&(uParam1->f_1), "E4TM3", 16);
			*uParam1 = 1;
			uParam1->f_5 = 88;
			uParam1->f_6 = 12;
			uParam1->f_7 = 70;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 1;
			uParam1->f_9[7] = 4;
			uParam1->f_9[15] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 4;
			uParam1->f_59[0] = 1;
			break;
		
		case 60:
			uParam1->f_66 = joaat("omnis");
			StringCopy(&(uParam1->f_1), "D1RTY", 16);
			uParam1->f_5 = 63;
			uParam1->f_6 = 63;
			uParam1->f_7 = 87;
			uParam1->f_8 = 111;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_65 = 1;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[23] = 2;
			uParam1->f_59[0] = 1;
			break;
		
		case 18:
			uParam1->f_66 = joaat("osiris");
			StringCopy(&(uParam1->f_1), "SL33K", 16);
			*uParam1 = 4;
			uParam1->f_5 = 107;
			uParam1->f_6 = 31;
			uParam1->f_7 = 107;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 3;
			uParam1->f_9[4] = 1;
			uParam1->f_9[8] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 6;
			break;
		
		case 27:
			uParam1->f_66 = joaat("pfister811");
			StringCopy(&(uParam1->f_1), "SL1CK", 16);
			*uParam1 = 1;
			uParam1->f_5 = 12;
			uParam1->f_6 = 38;
			uParam1->f_8 = 138;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 127;
			uParam1->f_74 = 255;
			uParam1->f_75 = 62;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 1;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[15] = 3;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 18;
			break;
		
		case 3:
			uParam1->f_66 = joaat("prototipo");
			StringCopy(&(uParam1->f_1), "TURB0", 16);
			uParam1->f_5 = 70;
			uParam1->f_6 = 111;
			uParam1->f_7 = 70;
			uParam1->f_8 = 70;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 2;
			uParam1->f_9[1] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[23] = 16;
			break;
		
		case 24:
			uParam1->f_66 = joaat("reaper");
			StringCopy(&(uParam1->f_1), "GR1M", 16);
			*uParam1 = 1;
			uParam1->f_5 = 92;
			uParam1->f_6 = 42;
			uParam1->f_7 = 88;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_75 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[15] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 33;
			uParam1->f_59[0] = 1;
			break;
		
		case 93:
			uParam1->f_66 = joaat("sabregt2");
			StringCopy(&(uParam1->f_1), "B0UNC3", 16);
			*uParam1 = 4;
			uParam1->f_5 = 12;
			uParam1->f_6 = 12;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 2;
			uParam1->f_9[2] = 1;
			uParam1->f_9[4] = 3;
			uParam1->f_9[5] = 2;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 36;
			uParam1->f_9[24] = 1;
			uParam1->f_59[0] = 1;
			break;
		
		case 66:
			uParam1->f_66 = joaat("seven70");
			StringCopy(&(uParam1->f_1), "SP33DY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 145;
			uParam1->f_6 = 3;
			uParam1->f_7 = 88;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 3;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 4;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 22;
			break;
		
		case 15:
			uParam1->f_66 = joaat("sheava");
			StringCopy(&(uParam1->f_1), "PR3TTY", 16);
			*uParam1 = 1;
			uParam1->f_5 = 137;
			uParam1->f_6 = 71;
			uParam1->f_7 = 71;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 132;
			uParam1->f_63 = 102;
			uParam1->f_64 = 226;
			uParam1->f_74 = 35;
			uParam1->f_75 = 1;
			uParam1->f_76 = 255;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 0);
			uParam1->f_9[0] = 4;
			uParam1->f_9[1] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 22;
			uParam1->f_59[0] = 1;
			break;
		
		case 54:
			uParam1->f_66 = joaat("sultanrs");
			StringCopy(&(uParam1->f_1), "5H0W0FF", 16);
			*uParam1 = 2;
			uParam1->f_5 = 83;
			uParam1->f_6 = 83;
			uParam1->f_8 = 41;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 5;
			uParam1->f_62 = 255;
			uParam1->f_63 = 127;
			uParam1->f_74 = 255;
			uParam1->f_75 = 62;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 15;
			uParam1->f_9[1] = 14;
			uParam1->f_9[2] = 8;
			uParam1->f_9[3] = 4;
			uParam1->f_9[4] = 4;
			uParam1->f_9[5] = 3;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 10;
			uParam1->f_9[8] = 6;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 2;
			uParam1->f_59[0] = 1;
			break;
		
		case 12:
			uParam1->f_66 = joaat("t20");
			StringCopy(&(uParam1->f_1), "D3V1L", 16);
			*uParam1 = 4;
			uParam1->f_5 = 28;
			uParam1->f_6 = 143;
			uParam1->f_7 = 70;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 1;
			uParam1->f_9[2] = 2;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[23] = 24;
			break;
		
		case 36:
			uParam1->f_66 = joaat("tampa");
			StringCopy(&(uParam1->f_1), "MU5CL3", 16);
			uParam1->f_5 = 89;
			uParam1->f_6 = 64;
			uParam1->f_7 = 88;
			uParam1->f_8 = 64;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_63 = 174;
			uParam1->f_64 = 239;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 3;
			uParam1->f_9[1] = 3;
			uParam1->f_9[2] = 1;
			uParam1->f_9[5] = 1;
			uParam1->f_9[6] = 3;
			uParam1->f_9[7] = 4;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[23] = 14;
			uParam1->f_59[0] = 1;
			break;
		
		case 48:
			uParam1->f_66 = joaat("tropos");
			StringCopy(&(uParam1->f_1), "1985", 16);
			*uParam1 = 2;
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[7] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 3;
			break;
		
		case 87:
			uParam1->f_66 = joaat("turismor");
			StringCopy(&(uParam1->f_1), "TPD4WG", 16);
			uParam1->f_5 = 68;
			uParam1->f_6 = 68;
			uParam1->f_7 = 92;
			uParam1->f_8 = 87;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_75 = 255;
			uParam1->f_76 = 140;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[4] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[15] = 3;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 19;
			uParam1->f_59[0] = 1;
			break;
		
		case 6:
			uParam1->f_66 = joaat("tyrus");
			StringCopy(&(uParam1->f_1), "TR3X", 16);
			*uParam1 = 1;
			uParam1->f_5 = 7;
			uParam1->f_6 = 3;
			uParam1->f_7 = 137;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_65 = 1;
			uParam1->f_69 = 7;
			uParam1->f_62 = 203;
			uParam1->f_63 = 54;
			uParam1->f_64 = 148;
			uParam1->f_74 = 255;
			uParam1->f_75 = 50;
			uParam1->f_76 = 100;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 2;
			uParam1->f_9[4] = 1;
			uParam1->f_9[15] = 2;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 8;
			uParam1->f_59[0] = 1;
			break;
		
		case 69:
			uParam1->f_66 = joaat("verlierer2");
			StringCopy(&(uParam1->f_1), "CURV35", 16);
			*uParam1 = 1;
			uParam1->f_5 = 107;
			uParam1->f_6 = 120;
			uParam1->f_7 = 35;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 3;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[0] = 1;
			uParam1->f_9[1] = 3;
			uParam1->f_9[3] = 1;
			uParam1->f_9[4] = 1;
			uParam1->f_9[5] = 3;
			uParam1->f_9[7] = 4;
			uParam1->f_9[8] = 1;
			uParam1->f_9[10] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 26;
			uParam1->f_59[0] = 1;
			break;
		
		case 57:
			uParam1->f_66 = joaat("zentorno");
			StringCopy(&(uParam1->f_1), "H3R0", 16);
			*uParam1 = 1;
			uParam1->f_5 = 149;
			uParam1->f_6 = 55;
			uParam1->f_8 = 55;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 114;
			uParam1->f_63 = 204;
			uParam1->f_64 = 114;
			uParam1->f_74 = 94;
			uParam1->f_75 = 255;
			uParam1->f_76 = 1;
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 28);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 29);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 30);
			unk_0x872F1C1F8587CCC7(&(uParam1->f_77), 31);
			uParam1->f_9[0] = 5;
			uParam1->f_9[3] = 2;
			uParam1->f_9[4] = 2;
			uParam1->f_9[5] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[20] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 1;
			break;
		
		case 45:
			uParam1->f_66 = joaat("ztype");
			StringCopy(&(uParam1->f_1), "CE0", 16);
			*uParam1 = 1;
			uParam1->f_5 = 120;
			uParam1->f_6 = 42;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 2;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[1] = 1;
			uParam1->f_9[3] = 1;
			uParam1->f_9[6] = 2;
			uParam1->f_9[7] = 1;
			uParam1->f_9[22] = 1;
			uParam1->f_9[23] = 26;
			uParam1->f_59[0] = 1;
			break;
	}
	if (uParam1->f_66 == 0)
	{
	}
}

bool func_317(int iParam0)//Position - 0x1E671
{
	if (iParam0 == func_36())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 18);
}

void func_318()//Position - 0x1E697
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (Local_927.f_8 >= 39)
	{
		Local_927.f_8 = 0;
	}
	iVar0 = Local_927.f_545[Local_927.f_8];
	if (unk_0x6ADD12BF4D6D2587(iVar0) && func_320(iVar0))
	{
		vVar1 = { func_319(Local_297.f_308[Local_927.f_8]) };
		vVar2 = { unk_0xB3328BA8976B416C(iVar0, 1) };
		if (vVar2.z != vVar1.z)
		{
			unk_0xBD8D47FDC6902B2D(iVar0, vVar1, 1, 0, 0, 1);
			unk_0xEDC33A771FAEB393(iVar0, true);
		}
	}
	if (Local_927.f_8 < 39)
	{
		Local_927.f_8++;
		if (Local_927.f_8 >= 39 && !unk_0xC80D31E4B587871C(Local_927, 5))
		{
			unk_0x872F1C1F8587CCC7(&Local_927, 5);
		}
	}
}

Vector3 func_319(int iParam0)//Position - 0x1E74A
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { 978,292f, -2994,195f, -40,66f };
			break;
		
		case 1:
			vVar0 = { 978,292f, -3009,745f, -40,66f };
			break;
		
		case 2:
			vVar0 = { 986,012f, -2997,394f, -40,66f };
			break;
		
		case 3:
			vVar0 = { 986,642f, -2991,874f, -40,66f };
			break;
		
		case 4:
			vVar0 = { 991,082f, -2993,794f, -40,66f };
			break;
		
		case 5:
			vVar0 = { 995,312f, -2991,874f, -40,66f };
			break;
		
		case 6:
			vVar0 = { 1000,722f, -2989,944f, -40,66f };
			break;
		
		case 7:
			vVar0 = { 1000,722f, -2993,004f, -40,66f };
			break;
		
		case 8:
			vVar0 = { 1001,852f, -3003,064f, -40,66f };
			break;
		
		case 9:
			vVar0 = { 997,642f, -3004,954f, -40,66f };
			break;
		
		case 10:
			vVar0 = { 997,642f, -3008,154f, -40,66f };
			break;
		
		case 11:
			vVar0 = { 1001,852f, -3009,714f, -40,66f };
			break;
		
		case 12:
			vVar0 = { 997,642f, -3011,794f, -40,66f };
			break;
		
		case 13:
			vVar0 = { 993,142f, -3006,43f, -40,66f };
			break;
		
		case 15:
			vVar0 = { 1009,211f, -3026,794f, -40,66f };
			break;
		
		case 16:
			vVar0 = { 1004,051f, -3026,794f, -40,66f };
			break;
		
		case 17:
			vVar0 = { 998,456f, -3026,794f, -40,66f };
			break;
		
		case 18:
			vVar0 = { 993,247f, -3026,794f, -40,66f };
			break;
		
		case 19:
			vVar0 = { 1009,211f, -3026,794f, -37,89f };
			break;
		
		case 20:
			vVar0 = { 1004,051f, -3026,794f, -37,89f };
			break;
		
		case 21:
			vVar0 = { 998,456f, -3026,794f, -37,89f };
			break;
		
		case 22:
			vVar0 = { 993,247f, -3026,794f, -37,89f };
			break;
		
		case 23:
			vVar0 = { 980,072f, -3035,894f, -40,66f };
			break;
		
		case 24:
			vVar0 = { 976,05f, -3035,894f, -40,66f };
			break;
		
		case 25:
			vVar0 = { 971,828f, -3035,894f, -40,66f };
			break;
		
		case 26:
			vVar0 = { 967,728f, -3035,894f, -40,66f };
			break;
		
		case 27:
			vVar0 = { 963,46f, -3035,894f, -40,66f };
			break;
		
		case 28:
			vVar0 = { 959,4f, -3035,894f, -40,66f };
			break;
		
		case 29:
			vVar0 = { 954,75f, -3028,694f, -40,66f };
			break;
		
		case 30:
			vVar0 = { 954,75f, -3023,622f, -40,66f };
			break;
		
		case 31:
			vVar0 = { 954,75f, -3018,348f, -40,66f };
			break;
		
		case 32:
			vVar0 = { 980,072f, -3035,894f, -37,89f };
			break;
		
		case 33:
			vVar0 = { 976,05f, -3035,894f, -37,89f };
			break;
		
		case 34:
			vVar0 = { 971,828f, -3035,894f, -37,89f };
			break;
		
		case 35:
			vVar0 = { 967,728f, -3035,894f, -37,89f };
			break;
		
		case 36:
			vVar0 = { 963,46f, -3035,894f, -37,89f };
			break;
		
		case 37:
			vVar0 = { 959,422f, -3035,894f, -37,89f };
			break;
		
		case 38:
			vVar0 = { 954,75f, -3028,694f, -37,89f };
			break;
		
		case 39:
			vVar0 = { 954,75f, -3023,622f, -37,89f };
			break;
		
		case 14:
			vVar0 = { 954,75f, -3018,348f, -37,89f };
			break;
	}
	return vVar0;
}

int func_320(int iParam0)//Position - 0x1EBBD
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_321()//Position - 0x1EBDE
{
	return !unk_0xC80D31E4B587871C(Local_927, 5);
}

bool func_322()//Position - 0x1EBEF
{
	if (Local_927.f_52 != Local_297.f_349)
	{
		Local_927.f_54 = 1;
		Local_927.f_8 = 0;
		Local_927.f_53 = Local_297.f_351;
		Local_927.f_52 = Local_297.f_349;
		if (unk_0x8E1421E2A2A2FBD4())
		{
			Local_297.f_350 = 0;
		}
	}
	return Local_927.f_54;
}

void func_323()//Position - 0x1EC3A
{
	if (unk_0x8E1421E2A2A2FBD4())
	{
		Local_297.f_351 = 1;
		func_324();
	}
}

void func_324()//Position - 0x1EC54
{
	int iVar0;
	
	if (unk_0x8E1421E2A2A2FBD4())
	{
		iVar0 = 0;
		while (iVar0 < 40)
		{
			Local_297.f_267[iVar0] = Global_1595693[Local_927.f_55 /*680*/].f_266.f_111.f_2[iVar0];
			Local_297.f_308[iVar0] = iVar0;
			iVar0++;
		}
		if (Global_1595693[Local_927.f_55 /*680*/].f_266.f_111.f_1 <= 40)
		{
			Local_297.f_349 = Global_1595693[Local_927.f_55 /*680*/].f_266.f_111.f_1;
		}
		else
		{
			Local_297.f_349 = 40;
		}
	}
}

bool func_325()//Position - 0x1ECDF
{
	if (unk_0x8E1421E2A2A2FBD4())
	{
		if (Local_297.f_349 != Global_1595693[Local_927.f_55 /*680*/].f_266.f_111.f_1)
		{
			Local_297.f_350 = 1;
		}
	}
	return Local_297.f_350;
}

void func_326()//Position - 0x1ED17
{
	if (Local_927.f_55 == unk_0x9EB17624F44A8DA4() && func_296())
	{
		if (!unk_0xA6DECE14FC9A8C51(iLocal_782))
		{
			iLocal_782 = func_294(964,7871f, -3004,581f, -40,6349f, 0);
			unk_0x4B4040A0EC7DBA81(iLocal_782, 521);
			unk_0x62BD54E491535B76(iLocal_782, "OR_PC_BLIP");
			unk_0x3ED68ABD7299EAA3(iLocal_782, 5);
		}
	}
	else if (unk_0xA6DECE14FC9A8C51(iLocal_782))
	{
		unk_0xE30CF11C0EE14316(&iLocal_782);
	}
}

void func_327()//Position - 0x1ED88
{
	if (unk_0xC80D31E4B587871C(Local_924[unk_0x622FF3AE4B1D07C3() /*24*/].f_1, 0))
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_924[unk_0x622FF3AE4B1D07C3() /*24*/].f_1), 0);
	}
	if (unk_0x9EB17624F44A8DA4() != -1)
	{
		func_328(&(Local_297.f_2), &(Local_924[unk_0x9EB17624F44A8DA4() /*24*/].f_1), &Local_796, &Global_3932160, &(Local_924[unk_0x622FF3AE4B1D07C3() /*24*/].f_18), &(Local_297.f_57));
	}
}

void func_328(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1EDE6
{
	func_401(uParam0);
	if (((iParam1->f_13 >= 1 && func_34(unk_0x9EB17624F44A8DA4())) && !func_56(unk_0x9EB17624F44A8DA4())) && !unk_0x6ADD12BF4D6D2587(iParam2->f_702))
	{
		if (!func_400(iParam2))
		{
		}
	}
	if (Global_3934112 != iParam1->f_11)
	{
		iParam1->f_11 = Global_3934112;
		unk_0x872F1C1F8587CCC7(iParam1, 16);
	}
	if (unk_0xC80D31E4B587871C(*iParam1, 16))
	{
		iParam1->f_13 = 0;
		unk_0x0EE72DB1CD8A3B86(iParam1, 16);
	}
	if (func_31() || unk_0xC445AB6B86A2138E(unk_0x9EB17624F44A8DA4()))
	{
		func_17(iParam1, iParam2);
		return;
	}
	if (iParam2->f_706 > 5)
	{
		iParam2->f_706 = 0;
	}
	if (iParam2->f_705 > 30)
	{
		iParam2->f_705 = 0;
	}
	if (iParam1->f_13 > 0 || iParam1->f_14 > 0)
	{
		func_391(uParam0, iParam1, iParam2, uParam3, 0);
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (unk_0xDE597476C8B96D1A(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x3DE13AF8F787AC71() == unk_0x87678BB8392EFD41(unk_0x9EB17624F44A8DA4()))
			{
				func_390(uParam0);
			}
		}
	}
	if (iParam1->f_13 != 2)
	{
		if (iParam1->f_3 != 0)
		{
			iParam1->f_3 = 0;
		}
	}
	if (iParam1->f_14 != 3)
	{
		if (iParam1->f_4 != 0)
		{
			iParam1->f_4 = 0;
		}
	}
	if (((((((((uParam3->f_33 == 10 || func_60(unk_0x9EB17624F44A8DA4(), 0)) || func_65(uParam3->f_31)) || func_66(uParam3->f_31, -1)) || func_67(uParam3->f_31)) || func_57(unk_0x9EB17624F44A8DA4())) || func_64(uParam3->f_31)) || func_59(uParam3->f_31, 0, 0)) || func_63(unk_0x9EB17624F44A8DA4())) || (func_58(unk_0x9EB17624F44A8DA4()) && !unk_0xC80D31E4B587871C(*iParam1, 0)))
	{
		if (((uParam0->f_50 > 0 && uParam0->f_52 > 0) && !unk_0xC80D31E4B587871C(*iParam1, 15)) || ((uParam0->f_50 > 0 && !unk_0xC80D31E4B587871C(*iParam1, 15)) && ((((((((func_65(uParam3->f_31) || func_66(uParam3->f_31, -1)) || func_67(uParam3->f_31)) || func_64(uParam3->f_31)) || func_59(uParam3->f_31, 0, 0)) || func_63(unk_0x9EB17624F44A8DA4())) || func_58(unk_0x9EB17624F44A8DA4())) || func_57(unk_0x9EB17624F44A8DA4())) || func_37(unk_0x9EB17624F44A8DA4()))))
		{
			func_386(iParam1, iParam2, uParam3);
			unk_0x872F1C1F8587CCC7(iParam1, 15);
			if (((((((func_65(uParam3->f_31) || func_66(uParam3->f_31, -1)) || func_67(uParam3->f_31)) || func_64(uParam3->f_31)) || func_59(uParam3->f_31, 0, 0)) || func_63(unk_0x9EB17624F44A8DA4())) || func_58(unk_0x9EB17624F44A8DA4())) || func_57(unk_0x9EB17624F44A8DA4()))
			{
				func_384(uParam0, uParam3, 0);
			}
		}
	}
	else if (uParam0->f_50 > 0 && !unk_0xC80D31E4B587871C(*iParam1, 15))
	{
		func_386(iParam1, iParam2, uParam3);
		unk_0x872F1C1F8587CCC7(iParam1, 15);
	}
	if ((iParam2->f_706 % 2) == 0)
	{
		switch (iParam1->f_13)
		{
			case 0:
				if (!Global_1595547)
				{
					iParam1->f_11 = Global_3934112;
					func_378(iParam1);
					if ((uParam0->f_50 > 0 && unk_0xC80D31E4B587871C(*iParam1, 15)) && func_377(iParam1, iParam2, uParam3))
					{
						func_391(uParam0, iParam1, iParam2, uParam3, 0);
						unk_0x872F1C1F8587CCC7(iParam2, 0);
						iParam2->f_4 = ((0f + -36f) / 2f);
						if (func_37(unk_0x9EB17624F44A8DA4()))
						{
							if (!func_373(iParam2))
							{
								return;
							}
						}
						if (func_34(unk_0x9EB17624F44A8DA4()) && !func_400(iParam2))
						{
							return;
						}
						func_372(iParam1, 1);
					}
					else
					{
						if (uParam0->f_50 != 0)
						{
						}
						if (!unk_0xC80D31E4B587871C(*iParam1, 15))
						{
						}
					}
				}
				break;
			
			case 1:
				if (func_356(iParam1, iParam2, uParam3, &(iParam2->f_1), &(iParam1->f_6), &(iParam1->f_3), uParam4, uParam5, 0))
				{
					func_355();
					func_372(iParam1, 2);
				}
				break;
			
			case 2:
				func_353(1);
				unk_0x4973A6BA6E910C25(16);
				if (((((func_331(uParam0, iParam1, iParam2, &(iParam1->f_3), uParam4, 0) || Global_1595547) || Global_1655673) || func_330(iParam1, iParam2)) || func_153(unk_0x9EB17624F44A8DA4()) == 5) || Global_2436181.f_3612 == 1)
				{
					if (Global_2436181.f_3612 == 1)
					{
					}
					if (func_153(unk_0x9EB17624F44A8DA4()) == 5)
					{
					}
					if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					}
					Global_25501 = 0;
					func_20(iParam2);
					func_372(iParam1, 1);
				}
				break;
		}
	}
	else if ((((((((((!unk_0xC80D31E4B587871C(*iParam1, 0) && !func_66(uParam3->f_31, -1)) && !func_65(uParam3->f_31)) && !func_67(uParam3->f_31)) && !func_64(uParam3->f_31)) && !func_59(uParam3->f_31, 0, 0)) && !func_63(unk_0x9EB17624F44A8DA4())) && !func_58(unk_0x9EB17624F44A8DA4())) && !func_57(unk_0x9EB17624F44A8DA4())) && !func_37(unk_0x9EB17624F44A8DA4())) && !func_34(unk_0x9EB17624F44A8DA4()))
	{
		switch (iParam1->f_14)
		{
			case 0:
				if (uParam0->f_50 > 0 && unk_0xC80D31E4B587871C(*iParam1, 15))
				{
					func_391(uParam0, iParam1, iParam2, uParam3, 1);
					unk_0x872F1C1F8587CCC7(iParam2, 0);
					iParam2->f_4 = ((0f + -36f) / 2f);
					func_329(iParam1, 1);
				}
				break;
			
			case 1:
				if (uParam3->f_33 == 10 && func_356(iParam1, iParam2, uParam3, &(iParam2->f_2), &(iParam1->f_5), &(iParam1->f_4), uParam4, uParam5, 1))
				{
					func_355();
					func_329(iParam1, 3);
				}
				break;
			
			case 3:
				func_353(1);
				unk_0x4973A6BA6E910C25(16);
				if (((func_331(uParam0, iParam1, iParam2, &(iParam1->f_4), uParam4, 1) || Global_1595547) || Global_1655673) || func_330(iParam1, iParam2))
				{
					if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
					{
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					}
					func_20(iParam2);
					func_329(iParam1, 1);
				}
				break;
			}
	}
	if (((!unk_0xC80D31E4B587871C(*iParam1, 9) && !unk_0xC80D31E4B587871C(*iParam1, 13)) && !unk_0xC80D31E4B587871C(*iParam1, 10)) && !unk_0xC80D31E4B587871C(Global_2359302, 15))
	{
		if (!bLocal_162)
		{
			iParam2->f_706++;
		}
	}
	iParam2->f_705++;
}

void func_329(int iParam0, int iParam1)//Position - 0x1F4BD
{
	iParam0->f_14 = iParam1;
}

int func_330(int iParam0, int iParam1)//Position - 0x1F4CB
{
	if (!unk_0xC80D31E4B587871C(*iParam0, 0))
	{
		if (unk_0xC80D31E4B587871C(*iParam1, 9))
		{
			return 1;
		}
	}
	return 0;
}

int func_331(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)//Position - 0x1F4F0
{
	int iVar0;
	
	iVar0 = 0;
	func_352();
	func_288();
	unk_0xB4EC0371FF9BD363(0);
	unk_0xD3F2448EEDC2073A(0);
	unk_0x553231E7FC3C570D(19);
	unk_0x553231E7FC3C570D(2);
	unk_0x36853D5037847BF3();
	func_351();
	if (func_350(iParam1))
	{
		if (!unk_0xC80D31E4B587871C(*iParam3, 12))
		{
			if (func_332(uParam0, iParam1, iParam2, iParam3, bParam5))
			{
				iParam2->f_825 = unk_0x9CEC233AE69E2D39(iParam2->f_817, 0f, 0f, IntToFloat(iParam2->f_816), 2, 0, 0, 1065353216, 0, 1065353216);
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iParam2->f_825, iParam2->f_815, iParam2->f_824, 2f, -1,5f, 13, 16, 2f, 0);
				unk_0x9C39944AA129D284(iParam2->f_825);
				unk_0x872F1C1F8587CCC7(iParam3, 12);
			}
		}
		if (unk_0xC80D31E4B587871C(*iParam3, 12))
		{
			func_244(uParam4);
			iVar0 = unk_0x45D90ED1F569A489(iParam2->f_825);
			if (iVar0 >= 0 && unk_0xD56F740235B1E8F0(iVar0))
			{
				if (unk_0x1FB367C588A91451() != 4)
				{
					if (unk_0x463C4747B41E35A3(iVar0) >= 0,35f)
					{
						unk_0x0B0BB26D99CD7575(iParam2->f_825);
						unk_0x0EE72DB1CD8A3B86(iParam3, 8);
						unk_0x0EE72DB1CD8A3B86(iParam3, 12);
						iParam1->f_10 = -1;
						unk_0x0EE72DB1CD8A3B86(iParam3, 2);
						unk_0x0EE72DB1CD8A3B86(iParam3, 3);
						if (bParam5 == 1)
						{
							unk_0x0EE72DB1CD8A3B86(iParam3, 4);
							unk_0x0EE72DB1CD8A3B86(iParam3, 5);
						}
						else
						{
							unk_0x0EE72DB1CD8A3B86(iParam3, 0);
							unk_0x0EE72DB1CD8A3B86(iParam3, 1);
						}
						return 1;
					}
				}
				else if (unk_0x463C4747B41E35A3(iVar0) >= 0,9f)
				{
					unk_0x0B0BB26D99CD7575(iParam2->f_825);
					unk_0x0EE72DB1CD8A3B86(iParam3, 8);
					unk_0x0EE72DB1CD8A3B86(iParam3, 12);
					iParam1->f_10 = -1;
					unk_0x0EE72DB1CD8A3B86(iParam3, 2);
					unk_0x0EE72DB1CD8A3B86(iParam3, 3);
					if (bParam5 == 1)
					{
						unk_0x0EE72DB1CD8A3B86(iParam3, 4);
						unk_0x0EE72DB1CD8A3B86(iParam3, 5);
					}
					else
					{
						unk_0x0EE72DB1CD8A3B86(iParam3, 0);
						unk_0x0EE72DB1CD8A3B86(iParam3, 1);
					}
					return 1;
				}
			}
		}
	}
	else if (func_332(uParam0, iParam1, iParam2, iParam3, bParam5))
	{
		iParam1->f_10 = -1;
		unk_0x0EE72DB1CD8A3B86(iParam3, 2);
		unk_0x0EE72DB1CD8A3B86(iParam3, 3);
		func_244(uParam4);
		if (bParam5 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(iParam3, 4);
			unk_0x0EE72DB1CD8A3B86(iParam3, 5);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(iParam3, 0);
			unk_0x0EE72DB1CD8A3B86(iParam3, 1);
		}
		return 1;
	}
	return 0;
}

int func_332(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1F6F9
{
	int iVar0;
	struct<9> Var1;
	
	if (func_350(iParam1))
	{
		iVar0 = 0;
		if (unk_0xC80D31E4B587871C(*iParam3, 8))
		{
			iVar0 = unk_0x45D90ED1F569A489(iParam2->f_825);
			if (iVar0 >= 0 && unk_0xD56F740235B1E8F0(iVar0))
			{
				if (unk_0x463C4747B41E35A3(iVar0) >= 0,9f)
				{
					unk_0x0EE72DB1CD8A3B86(iParam3, 8);
					iParam2->f_825 = unk_0x9CEC233AE69E2D39(iParam2->f_817, 0f, 0f, IntToFloat(iParam2->f_816), 2, 0, 1, 1065353216, 0, 1065353216);
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iParam2->f_825, iParam2->f_815, iParam2->f_822, 2f, -1,5f, 13, 16, 2f, 0);
					unk_0x9C39944AA129D284(iParam2->f_825);
					unk_0x872F1C1F8587CCC7(iParam3, 11);
				}
			}
		}
	}
	if ((!unk_0x0F30C1F1717A6437() && !func_26(0)) && !unk_0x08D525BE62A22AE0())
	{
		if (unk_0x4C4813CAAD70E814(2))
		{
			iLocal_161 = 51;
		}
		else
		{
			iLocal_161 = 222;
		}
		if (!bParam4)
		{
			if (unk_0xC80D31E4B587871C(*iParam3, 0))
			{
				if (func_349(uParam0, iParam1) == 1)
				{
					unk_0x0EE72DB1CD8A3B86(iParam3, 0);
				}
			}
			if (unk_0xC80D31E4B587871C(*iParam3, 1))
			{
				if (func_349(uParam0, iParam1) == 2)
				{
					unk_0x0EE72DB1CD8A3B86(iParam3, 1);
				}
			}
		}
		else
		{
			if (unk_0xC80D31E4B587871C(*iParam3, 5))
			{
				if (func_348(uParam0) == 4)
				{
					unk_0x0EE72DB1CD8A3B86(iParam3, 5);
				}
			}
			if (unk_0xC80D31E4B587871C(*iParam3, 4))
			{
				if (func_348(uParam0) == 3)
				{
					unk_0x0EE72DB1CD8A3B86(iParam3, 4);
				}
			}
		}
		if (iParam1->f_9 != func_347(uParam0, iParam1))
		{
			unk_0x0EE72DB1CD8A3B86(iParam3, 2);
			unk_0x0EE72DB1CD8A3B86(iParam3, 3);
			iParam1->f_9 = func_347(uParam0, iParam1);
		}
		if (unk_0xE8C126B7ADBB9D63(2, 225))
		{
			unk_0x872F1C1F8587CCC7(iParam2, 0);
			unk_0x0EE72DB1CD8A3B86(iParam1, 6);
			return 1;
		}
		else
		{
			if ((unk_0xE8C126B7ADBB9D63(2, 235) || unk_0xE8C126B7ADBB9D63(2, 234)) || unk_0xE8C126B7ADBB9D63(2, iLocal_161))
			{
				unk_0x0EE72DB1CD8A3B86(iParam3, 2);
				unk_0x0EE72DB1CD8A3B86(iParam3, 3);
				if (bParam4 == 0)
				{
					unk_0x0EE72DB1CD8A3B86(iParam3, 0);
					unk_0x0EE72DB1CD8A3B86(iParam3, 1);
				}
				else
				{
					unk_0x0EE72DB1CD8A3B86(iParam3, 4);
					unk_0x0EE72DB1CD8A3B86(iParam3, 5);
				}
				if (func_350(iParam1))
				{
					if (!unk_0xC80D31E4B587871C(*iParam3, 8))
					{
						if (unk_0xE8C126B7ADBB9D63(2, 235) || unk_0xE8C126B7ADBB9D63(2, 234))
						{
							if (func_349(uParam0, iParam1) == 1 || func_348(uParam0) == 3)
							{
								iParam2->f_825 = unk_0x9CEC233AE69E2D39(iParam2->f_817, 0f, 0f, IntToFloat(iParam2->f_816), 2, 0, 0, 1065353216, 0, 1065353216);
								unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iParam2->f_825, iParam2->f_815, iParam2->f_823, 2f, -1,5f, 13, 16, 2f, 0);
								unk_0x9C39944AA129D284(iParam2->f_825);
								unk_0x872F1C1F8587CCC7(iParam3, 8);
							}
						}
						else
						{
							iParam2->f_825 = unk_0x9CEC233AE69E2D39(iParam2->f_817, 0f, 0f, IntToFloat(iParam2->f_816), 2, 0, 0, 1065353216, 0, 1065353216);
							unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iParam2->f_825, iParam2->f_815, iParam2->f_823, 2f, -1,5f, 13, 16, 2f, 0);
							unk_0x9C39944AA129D284(iParam2->f_825);
							unk_0x872F1C1F8587CCC7(iParam3, 8);
						}
					}
				}
				if (unk_0xE8C126B7ADBB9D63(2, 235))
				{
					unk_0x872F1C1F8587CCC7(iParam3, 2);
				}
				else if (unk_0xE8C126B7ADBB9D63(2, 234))
				{
					unk_0x872F1C1F8587CCC7(iParam3, 3);
				}
				else if (unk_0xE8C126B7ADBB9D63(2, iLocal_161))
				{
					if (bParam4 == 0)
					{
						if (func_349(uParam0, iParam1) == 2)
						{
							unk_0x872F1C1F8587CCC7(iParam3, 0);
						}
						else if (func_349(uParam0, iParam1) == 1)
						{
							unk_0x872F1C1F8587CCC7(iParam3, 1);
						}
					}
					else if (func_348(uParam0) == 4)
					{
						unk_0x872F1C1F8587CCC7(iParam3, 4);
					}
					else if (func_348(uParam0) == 3)
					{
						unk_0x872F1C1F8587CCC7(iParam3, 5);
					}
				}
			}
			if (bParam4 == 0)
			{
				if (unk_0xC80D31E4B587871C(*iParam2, 0) || unk_0x8CFF76532FEF34D4(2))
				{
					func_345(&(iParam2->f_10));
					func_344(unk_0xC9C4B2A22DE54C69(0, 225, true), "HUD_INPUT3", &(iParam2->f_10), 0);
					if (func_349(uParam0, iParam1) == 1)
					{
						func_344(unk_0x715308393E136EA8(0, 19, true), "HUD_INPUT80", &(iParam2->f_10), 0);
						func_344(unk_0xC9C4B2A22DE54C69(0, iLocal_161, true), "HUD_INPUT82", &(iParam2->f_10), 0);
					}
					else if (func_349(uParam0, iParam1) == 2)
					{
						func_344(unk_0xC9C4B2A22DE54C69(0, iLocal_161, true), "HUD_INPUT81", &(iParam2->f_10), 0);
					}
					unk_0x0EE72DB1CD8A3B86(iParam2, 0);
				}
			}
			else if (unk_0xC80D31E4B587871C(*iParam2, 0))
			{
				func_345(&(iParam2->f_10));
				func_344(unk_0xC9C4B2A22DE54C69(0, 225, true), "HUD_INPUT3", &(iParam2->f_10), 0);
				if (func_348(uParam0) == 3)
				{
					func_344(unk_0x715308393E136EA8(0, 19, true), "HUD_INPUT80", &(iParam2->f_10), 0);
					func_344(unk_0xC9C4B2A22DE54C69(0, iLocal_161, true), "HUD_INPUT82", &(iParam2->f_10), 0);
				}
				else if (func_348(uParam0) == 4)
				{
					func_344(unk_0xC9C4B2A22DE54C69(0, iLocal_161, true), "HUD_INPUT81", &(iParam2->f_10), 0);
				}
				unk_0x0EE72DB1CD8A3B86(iParam2, 0);
			}
			Var1 = { func_343() };
			func_342(&(iParam2->f_10), 1f);
			func_334(&(iParam2->f_697), &Var1, &(iParam2->f_10), func_341(&(iParam2->f_10)));
			func_333(1);
		}
	}
	return 0;
}

void func_333(int iParam0)//Position - 0x1FBC9
{
	Global_1359035.f_1079 = iParam0;
}

void func_334(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x1FBDA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || unk_0x8CFF76532FEF34D4(2))
	{
		*uParam2 = 0;
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(false);
				unk_0x271AA5469AF471B3();
			}
			unk_0x008F3E3CC076EA0E(*uParam0, "CLEAR_ALL");
			unk_0x271AA5469AF471B3();
		}
		func_340(uParam2);
	}
	if (Global_1315692 < 2)
	{
		func_339(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x34D11AB5BA7922C2(*uParam0))
		{
			*uParam0 = unk_0xD704C81492296A37("instructional_buttons");
		}
		if (unk_0x34D11AB5BA7922C2(*uParam0))
		{
			unk_0x050CFBB64D7E937F(*uParam0, "CLEAR_ALL");
			if (unk_0xB9D80B12FE4456A5())
			{
				unk_0x008F3E3CC076EA0E(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0x1869584A8A72FEDD(true);
				unk_0x271AA5469AF471B3();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_680)
			{
				if (unk_0xC80D31E4B587871C(uParam2->f_676, iVar0))
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar0);
					if (!unk_0xC80D31E4B587871C(uParam2->f_677, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar2 = uParam2->f_1[iVar0 /*56*/].f_54;
						iVar3 = uParam2->f_1[iVar0 /*56*/].f_55;
						func_338(unk_0xC9C4B2A22DE54C69(iVar1, iVar2, true));
						if (iVar3 < 358)
						{
							func_338(unk_0xC9C4B2A22DE54C69(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*56*/].f_53;
						iVar5 = uParam2->f_1[iVar0 /*56*/].f_54;
						func_338(unk_0x715308393E136EA8(iVar4, iVar5, true));
					}
					if (unk_0xC80D31E4B587871C(uParam2->f_674, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0xFD1DB5DD208735A3(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x9748595E4799A2CF();
					}
					else if (unk_0xC80D31E4B587871C(uParam2->f_675, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x854FACC4E5F40C82(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x9748595E4799A2CF();
					}
					else
					{
						func_337(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						if (unk_0xC80D31E4B587871C(uParam2->f_678, iVar0))
						{
							unk_0x1869584A8A72FEDD(true);
							unk_0xD07D5CD276368D36(uParam2->f_1[iVar0 /*56*/].f_54);
						}
						else
						{
							unk_0x1869584A8A72FEDD(false);
							unk_0xD07D5CD276368D36(358);
						}
					}
					unk_0x271AA5469AF471B3();
				}
				else
				{
					unk_0x008F3E3CC076EA0E(*uParam0, "SET_DATA_SLOT");
					unk_0xD07D5CD276368D36(iVar0);
					func_338(&(uParam2->f_1[iVar0 /*56*/]));
					if (!unk_0xAB019B170BF1309C(&(uParam2->f_1[iVar0 /*56*/].f_16)))
					{
						func_338(&(uParam2->f_1[iVar0 /*56*/].f_16));
					}
					if (unk_0xC80D31E4B587871C(uParam2->f_674, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						if (uParam2->f_681 == iVar0)
						{
							unk_0xFD1DB5DD208735A3(uParam2->f_1[iVar0 /*56*/].f_36, 70);
						}
						else
						{
							unk_0x6223D539BCD39E76(uParam2->f_1[iVar0 /*56*/].f_36);
						}
						unk_0x9748595E4799A2CF();
					}
					else if (unk_0xC80D31E4B587871C(uParam2->f_675, iVar0))
					{
						unk_0x7E099EB35339C80D(&(uParam2->f_1[iVar0 /*56*/].f_32));
						unk_0x854FACC4E5F40C82(&(uParam2->f_1[iVar0 /*56*/].f_37));
						unk_0x9748595E4799A2CF();
					}
					else
					{
						func_337(&(uParam2->f_1[iVar0 /*56*/].f_32));
					}
					if (unk_0xB9D80B12FE4456A5())
					{
						unk_0x1869584A8A72FEDD(false);
						unk_0xD07D5CD276368D36(358);
					}
					unk_0x271AA5469AF471B3();
				}
				iVar0++;
			}
			unk_0x008F3E3CC076EA0E(*uParam0, "SET_MAX_WIDTH");
			unk_0x9499D7329FB840A2(uParam2->f_686);
			unk_0x271AA5469AF471B3();
			unk_0x008F3E3CC076EA0E(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xD07D5CD276368D36(0);
			unk_0x271AA5469AF471B3();
			*uParam2 = 1;
		}
	}
	uParam2->f_682 = 0,05f;
	uParam2->f_683 = 0,045f;
	uParam2->f_684 = 0f;
	uParam2->f_685 = 0f;
	if (*uParam2 == 1)
	{
		func_336(*uParam0, uParam1);
	}
	func_335();
}

void func_335()//Position - 0x1FF58
{
	unk_0x553231E7FC3C570D(7);
	unk_0x553231E7FC3C570D(6);
	unk_0x553231E7FC3C570D(8);
	unk_0x553231E7FC3C570D(9);
}

void func_336(var uParam0, var uParam1)//Position - 0x1FF76
{
	unk_0x28E092B1E386EB67(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_337(char* sParam0)//Position - 0x1FF95
{
	unk_0x7E099EB35339C80D(sParam0);
	unk_0x9748595E4799A2CF();
}

void func_338(char* sParam0)//Position - 0x1FFA7
{
	unk_0x8686005F83E832AE(sParam0);
}

void func_339(int iParam0)//Position - 0x1FFB5
{
	Global_1315692 = iParam0;
}

void func_340(var uParam0)//Position - 0x1FFC3
{
	uParam0->f_679 = 0;
}

int func_341(var uParam0)//Position - 0x1FFD1
{
	return uParam0->f_679;
}

void func_342(var uParam0, float fParam1)//Position - 0x1FFDE
{
	uParam0->f_686 = fParam1;
}

struct<9> func_343()//Position - 0x1FFED
{
	struct<9> Var0;
	
	Var0 = 0,5f;
	Var0.f_1 = 0,5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_344(char* sParam0, char* sParam1, var uParam2, char* sParam3)//Position - 0x20033
{
	int iVar0;
	
	if (uParam2->f_680 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_680;
	StringCopy(&(uParam2->f_1[iVar0 /*56*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*56*/].f_32), sParam1, 16);
	uParam2->f_680++;
}

void func_345(var uParam0)//Position - 0x20083
{
	func_346(uParam0);
	uParam0->f_679 = 1;
}

void func_346(var uParam0)//Position - 0x20097
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*56*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*56*/].f_36 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*56*/].f_37), "", 64);
		uParam0->f_1[iVar0 /*56*/].f_53 = 2;
		uParam0->f_1[iVar0 /*56*/].f_54 = 358;
		uParam0->f_1[iVar0 /*56*/].f_55 = 358;
		iVar0++;
	}
	uParam0->f_674 = 0;
	uParam0->f_675 = 0;
	uParam0->f_676 = 0;
	uParam0->f_678 = 0;
	uParam0->f_677 = 0;
	uParam0->f_679 = 0;
	uParam0->f_680 = 0;
	uParam0->f_682 = 0f;
	uParam0->f_683 = 0f;
	uParam0->f_684 = 0f;
	uParam0->f_685 = 0f;
	uParam0->f_686 = 1f;
}

int func_347(var uParam0, int iParam1)//Position - 0x2016F
{
	if (unk_0xC80D31E4B587871C(*iParam1, 0))
	{
		return uParam0->f_2;
	}
	return uParam0->f_1;
}

int func_348(var uParam0)//Position - 0x20190
{
	return uParam0->f_52;
}

int func_349(var uParam0, int iParam1)//Position - 0x2019C
{
	if (unk_0xC80D31E4B587871C(*iParam1, 0))
	{
		return uParam0->f_51;
	}
	return uParam0->f_50;
}

int func_350(int iParam0)//Position - 0x201BD
{
	if (iParam0->f_12 == 1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_351()//Position - 0x201D9
{
	if (!unk_0x08D525BE62A22AE0() && !unk_0x0F30C1F1717A6437())
	{
		unk_0x0DD783ABAB85FEE2(0);
		unk_0x0DD783ABAB85FEE2(2);
		unk_0x2DB625A7D089C175(2, 225, 1);
		unk_0x2DB625A7D089C175(2, 234, 1);
		unk_0x2DB625A7D089C175(2, 235, 1);
		unk_0x2DB625A7D089C175(2, iLocal_161, 1);
		unk_0x2DB625A7D089C175(2, 199, 1);
		unk_0x2DB625A7D089C175(0, 26, 1);
		unk_0x2DB625A7D089C175(0, 2, 1);
		unk_0x2DB625A7D089C175(0, 1, 1);
	}
}

void func_352()//Position - 0x2023B
{
	Global_2512808.f_4500 = 0;
}

void func_353(bool bParam0)//Position - 0x2024B
{
	if (bParam0)
	{
		if (func_354())
		{
			Global_2447174.f_33 = 1;
		}
	}
	else
	{
		Global_2447174.f_33 = 0;
	}
}

bool func_354()//Position - 0x20270
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

void func_355()//Position - 0x20284
{
	Global_2436181.f_1040.f_10 = 1;
}

int func_356(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, var uParam7, bool bParam8)//Position - 0x20296
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (bParam8)
	{
	}
	if (*uParam4 > 0)
	{
		func_371(0);
	}
	switch (*uParam4)
	{
		case 0:
			if ((((!unk_0xC80D31E4B587871C(*iParam0, 9) && !unk_0xC80D31E4B587871C(*iParam0, 13)) && !unk_0xC80D31E4B587871C(*iParam0, 10)) && !unk_0xC80D31E4B587871C(Global_2359302, 15)) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
			{
				if (bParam8 == 0)
				{
					iVar3 = func_370(iParam0, uParam2);
				}
				else
				{
					iVar3 = 2;
				}
				if (bParam8 == 0)
				{
					if (iParam1->f_703 > iVar3)
					{
						iParam1->f_703 = 0;
					}
				}
				if (bParam8 == 1)
				{
					iParam1->f_704 = iParam1->f_703;
					iParam1->f_703 = 2;
				}
				if (func_368(iParam0, uParam2, iParam1->f_703, iParam1) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1))
				{
					if (func_364((11 + iParam1->f_703), iParam1->f_817, uParam7))
					{
						bLocal_162 = true;
						if (!bVar0)
						{
							if (!Global_1655673 && !unk_0x771D0F8F56A5FE6C("MP_POSITIONED_RADIO_MUTE_SCENE"))
							{
								if (((((func_816(unk_0x9EB17624F44A8DA4(), 1, 1) && !unk_0xC80D31E4B587871C(Global_2436181.f_1083.f_4, 0)) && !func_363()) && !func_330(iParam0, iParam1)) && !func_284()) && !unk_0x8164A5C4CBC21707(unk_0x9EB17624F44A8DA4()))
								{
									if (bParam8 == 1)
									{
									}
									if (func_350(iParam0))
									{
										unk_0x6450931B826B49D9(iParam1->f_815);
										if (unk_0x3A801AA34DD821BE(iParam1->f_815))
										{
											if (!unk_0xC80D31E4B587871C(Global_2359302, 7))
											{
												bVar0 = true;
											}
										}
										else
										{
											unk_0x6450931B826B49D9(iParam1->f_815);
										}
									}
									else
									{
										bVar0 = true;
									}
								}
								else
								{
									if (func_816(unk_0x9EB17624F44A8DA4(), 1, 1))
									{
									}
									if (!unk_0xC80D31E4B587871C(Global_2436181.f_1083.f_4, 0))
									{
									}
									if (!func_363())
									{
									}
									if (!func_330(iParam0, iParam1))
									{
									}
								}
							}
							else
							{
								if (!Global_1655673)
								{
								}
								if (!unk_0x771D0F8F56A5FE6C("MP_POSITIONED_RADIO_MUTE_SCENE"))
								{
								}
							}
						}
					}
					else
					{
						iVar4 = 0;
						while (iVar4 < unk_0xB72D370CB7ABC3EF())
						{
							if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar4)))
							{
								iVar5 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar4));
								if (iVar5 != unk_0x9EB17624F44A8DA4())
								{
									if (func_816(iVar5, 1, 1))
									{
										fVar6 = unk_0xBE3C4023003180FC(func_362(iVar5), func_362(unk_0x9EB17624F44A8DA4()), 1);
										if (fVar6 < 2f && fVar6 != 0f)
										{
										}
									}
								}
							}
							iVar4++;
						}
					}
					if (bVar0)
					{
						if (Global_1595547)
						{
							if (*iParam3 == -1)
							{
								func_361(iParam3, 3, "MPRD_BILL", 0, 0, 0, 0);
							}
						}
						else if (*iParam3 == -1)
						{
							func_361(iParam3, 3, "MPRD_CTXT", 0, 0, 0, 0);
						}
						else if (func_360(*iParam3, 1))
						{
							func_18(iParam3);
							Global_25501 = 1;
							if (func_350(iParam0))
							{
								unk_0x872F1C1F8587CCC7(iParam0, 13);
								iParam0->f_10 = iParam1->f_703;
								*uParam4++;
							}
							else
							{
								iParam0->f_10 = iParam1->f_703;
								unk_0x7FC89099E65488E2(unk_0xFC1458A37D98B502(), func_358(iParam0, uParam2), 0);
								unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), func_358(iParam0, uParam2), -1, 0, 2);
								unk_0x872F1C1F8587CCC7(iParam1, 0);
								unk_0x872F1C1F8587CCC7(&Global_2359302, 15);
								return 1;
							}
						}
					}
				}
				else
				{
					bLocal_162 = false;
					if (bParam8 == 1)
					{
						iParam1->f_703 = iParam1->f_704;
					}
					else
					{
						iParam1->f_703++;
					}
				}
			}
			break;
		
		case 1:
			if (func_357((11 + iParam1->f_703), &iVar1, uParam6, uParam7))
			{
				if ((unk_0xC80D31E4B587871C(*iParam0, 13) && iVar1 == 1) || (iParam0->f_12 && iVar1 == 1))
				{
					vVar7 = { unk_0x4AA2C5A4980B3F34(iParam1->f_815, iParam1->f_820, iParam1->f_817, 0f, 0f, IntToFloat(iParam1->f_816), 0f, 2) };
					vVar8 = { unk_0x09E51060F59912ED(iParam1->f_815, iParam1->f_820, iParam1->f_817, 0f, 0f, IntToFloat(iParam1->f_816), 0, 2) };
					vVar9 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					unk_0x6EF694689373EE8D(unk_0xFC1458A37D98B502(), unk_0x09E51060F59912ED(iParam1->f_815, iParam1->f_820, iParam1->f_817, 0f, 0f, IntToFloat(iParam1->f_816), 0, 2), 1f, 2500, vVar7.z, 0,1f);
					unk_0x0EE72DB1CD8A3B86(iParam0, 13);
					unk_0x872F1C1F8587CCC7(iParam0, 9);
					*uParam4++;
				}
				else if (iVar1 == 2)
				{
					func_244(uParam6);
					unk_0x0EE72DB1CD8A3B86(iParam0, 13);
					unk_0x0EE72DB1CD8A3B86(&Global_2359302, 15);
					unk_0x0EE72DB1CD8A3B86(iParam1, 0);
					*uParam4 = 0;
				}
			}
			break;
		
		case 2:
			if (unk_0xC80D31E4B587871C(*iParam0, 9))
			{
				if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) == 7)
				{
					unk_0x872F1C1F8587CCC7(iParam0, 10);
					iParam1->f_825 = unk_0x9CEC233AE69E2D39(iParam1->f_817, 0f, 0f, IntToFloat(iParam1->f_816), 2, 0, 0, 1065353216, 0, 1065353216);
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iParam1->f_825, iParam1->f_815, iParam1->f_821, 2f, -1,5f, 13, 16, 2f, 0);
					unk_0x9C39944AA129D284(iParam1->f_825);
					unk_0x0EE72DB1CD8A3B86(iParam0, 9);
					*uParam4++;
				}
			}
			break;
		
		case 3:
			if (unk_0xC80D31E4B587871C(*iParam0, 10))
			{
				iVar2 = unk_0x45D90ED1F569A489(iParam1->f_825);
				if (iVar2 >= 0 && unk_0xD56F740235B1E8F0(iVar2))
				{
					if (unk_0x463C4747B41E35A3(iVar2) >= 0,9f)
					{
						if (unk_0xC80D31E4B587871C(*iParam0, 5))
						{
							unk_0x872F1C1F8587CCC7(iParam0, 6);
						}
						unk_0x872F1C1F8587CCC7(iParam1, 0);
						unk_0x872F1C1F8587CCC7(&Global_2359302, 15);
						unk_0x0EE72DB1CD8A3B86(iParam0, 10);
						iParam1->f_825 = unk_0x9CEC233AE69E2D39(iParam1->f_817, 0f, 0f, IntToFloat(iParam1->f_816), 2, 0, 1, 1065353216, 0, 1065353216);
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iParam1->f_825, iParam1->f_815, iParam1->f_822, 2f, -1,5f, 13, 16, 2f, 0);
						unk_0x9C39944AA129D284(iParam1->f_825);
						unk_0x872F1C1F8587CCC7(iParam5, 11);
						*uParam4 = 0;
						return 1;
					}
				}
			}
			break;
	}
	if (!bVar0)
	{
		func_18(iParam3);
	}
	return 0;
}

int func_357(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x2085F
{
	*uParam2 = iParam0;
	if ((*uParam3)[iParam0] != 0)
	{
		if (unk_0xC80D31E4B587871C((*uParam3)[iParam0], unk_0x9EB17624F44A8DA4()))
		{
			*iParam1 = 1;
			return 1;
		}
		else
		{
			*iParam1 = 2;
			return 1;
		}
	}
	return 0;
}

Vector3 func_358(int iParam0, var uParam1)//Position - 0x2089B
{
	vector3 vVar0;
	
	if (!iParam0->f_12)
	{
		switch (uParam1->f_33)
		{
			case 2:
				if (unk_0xC80D31E4B587871C(*iParam0, 0))
				{
					return 176,2662f, -999,429f, -98,8624f;
				}
				else
				{
					return 263,3552f, -994,6862f, -98,9227f;
				}
				break;
			
			case 6:
				if (unk_0xC80D31E4B587871C(*iParam0, 0))
				{
					return 201,9062f, -993,8659f, -98,9293f;
				}
				else
				{
					return 341,5449f, -1001,063f, -99,0576f;
				}
				break;
			
			case 10:
				if (unk_0xC80D31E4B587871C(*iParam0, 0))
				{
					return 230,6372f, -974,8629f, -98,8201f;
				}
				else
				{
					switch (iParam0->f_10)
					{
						case 0:
							if (func_359(uParam1->f_31))
							{
								func_46(uParam1->f_31, 117, &vVar0, 61, 0);
							}
							else
							{
								func_46(uParam1->f_31, 117, &vVar0, -1, 0);
							}
							return vVar0;
							break;
						
						case 1:
							if (func_359(uParam1->f_31))
							{
								func_46(uParam1->f_31, 118, &vVar0, 61, 0);
							}
							else
							{
								func_46(uParam1->f_31, 118, &vVar0, -1, 0);
							}
							return vVar0;
							break;
						}
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_10)
		{
			case 0:
				func_52(iParam0->f_2, 117, &vVar0, 0);
				return vVar0;
				break;
			
			case 1:
				func_52(iParam0->f_2, 118, &vVar0, 0);
				return vVar0;
				break;
			
			case 2:
				func_52(iParam0->f_2, 597, &vVar0, 0);
				return vVar0;
				break;
			}
	}
	return 0f, 0f, 0f;
}

int func_359(int iParam0)//Position - 0x20A39
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 1;
		
		default:
	}
	return 0;
}

int func_360(int iParam0, bool bParam1)//Position - 0x20A6B
{
	int iVar0;
	
	iVar0 = func_19(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5BEF7A5AB8F17255(unk_0x98EC0789D9F0703B()))
	{
		return 0;
	}
	if (func_26(0))
	{
		return 0;
	}
	if (unk_0xA8113D347D14630F())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/] == 1 && Global_36565[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36565[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36565[iVar0 /*32*/].f_5 = 1;
			Global_36565[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36565[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36565[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_361(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x20B23
{
	int iVar0;
	
	if (unk_0x8F38E94BBF3404CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x1E06D00B67177A18())
	{
		if (!*iParam0 == -1)
		{
			func_18(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36565[iVar0 /*32*/])
		{
			Global_36565[iVar0 /*32*/] = 1;
			Global_36565[iVar0 /*32*/].f_1 = Global_36766;
			Global_36766++;
			Global_36565[iVar0 /*32*/].f_4 = 0;
			Global_36565[iVar0 /*32*/].f_29 = 0;
			Global_36565[iVar0 /*32*/].f_5 = 0;
			Global_36565[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36565[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36565[iVar0 /*32*/].f_6 = iParam3;
			Global_36565[iVar0 /*32*/].f_31 = unk_0xBBA15366508D1BDE();
			Global_36565[iVar0 /*32*/].f_7 = 0;
			Global_36565[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0xAB019B170BF1309C(sParam4))
			{
				Global_36565[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36565[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36565[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36565[iVar0 /*32*/].f_12 = 0;
				Global_36565[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36565[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

Vector3 func_362(int iParam0)//Position - 0x20C4E
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

int func_363()//Position - 0x20C61
{
	if (Global_2436181.f_1040.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_364(int iParam0, vector3 vParam1, var uParam2)//Position - 0x20C7B
{
	if (!func_367(iParam0, vParam1, uParam2))
	{
		return 0;
	}
	if (!func_365())
	{
		return 0;
	}
	return 1;
}

int func_365()//Position - 0x20CA4
{
	if (((((((((((((((((!func_816(unk_0x9EB17624F44A8DA4(), 1, 1) || func_366()) || unk_0xFE2BE49C250EFD09(unk_0x9EB17624F44A8DA4())) || unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4())) || unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) || unk_0x1E06D00B67177A18()) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x1C2D46BE328E3124(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0x77F4730139ECE86B(unk_0xFC1458A37D98B502())) || unk_0x1E5BEC57385A771D(unk_0xFC1458A37D98B502())) || unk_0x6728497EE586D1FE(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0xE4A3B62790C25748(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x4FF3A1BB97B00CFC(unk_0xFC1458A37D98B502())) || unk_0x08765A6321A42CA1(unk_0xFC1458A37D98B502())) || unk_0xACB5C13823C09021(unk_0xFC1458A37D98B502(), 0))
	{
		return 0;
	}
	return 1;
}

int func_366()//Position - 0x20DA6
{
	if (Global_4253357.f_770 == 1)
	{
		return 1;
	}
	return 0;
}

int func_367(int iParam0, vector3 vParam1, var uParam2)//Position - 0x20DBE
{
	int iVar0;
	int iVar1;
	
	if ((*uParam2)[iParam0] != 0 && !unk_0xC80D31E4B587871C((*uParam2)[iParam0], unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (unk_0x396220A87B46A7B8(vParam1, 0,05f, 0, 1, 0, 0, 0, 0, 0) || unk_0x396220A87B46A7B8(vParam1, 0,05f, 0, 0, 1, 0, 0, unk_0xFC1458A37D98B502(), 1))
	{
		iVar0 = 0;
		while (iVar0 < unk_0xB72D370CB7ABC3EF())
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
				if (iVar1 != unk_0x9EB17624F44A8DA4())
				{
					if (unk_0x0C88267282FD588F(unk_0x25D049AAC4603E65(iVar1), vParam1, 0,5f, 0,5f, 0,5f, 0, 1, 0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_368(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x20E7C
{
	vector3 vVar0;
	struct<6> Var1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	struct<6> Var6;
	struct<6> Var7;
	struct<4> Var8;
	
	if (Global_1669400 && func_369())
	{
		return 0;
	}
	Var1 = { 0f, 0f, 0f };
	Var1.f_3 = { 0f, 0f, 0f };
	Var1 = { Var1 };
	fVar4 = 0f;
	iVar5 = 0;
	switch (uParam1->f_33)
	{
		case 2:
		case 6:
			unk_0x0EE72DB1CD8A3B86(iParam0, 5);
			break;
	}
	if (func_34(unk_0x9EB17624F44A8DA4()))
	{
		if (!func_56(Global_1595543) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 360,8917f, 4841,154f, -59,99963f, 360,4874f, 4839,927f, -57,69137f, 1,5f, 0, 1, 0))
		{
			uParam3->f_815 = "anim@mp_radio@garage@low";
			uParam3->f_816 = 155;
			uParam3->f_817 = { 360,46f, 4840,405f, -58,96f };
			uParam3->f_820 = "action_a";
			uParam3->f_821 = "enter";
			uParam3->f_822 = "idle_a";
			uParam3->f_823 = "button_press";
			uParam3->f_824 = "exit";
			Global_25500 = 1;
			return 1;
		}
		else if (!func_55(Global_1595543) && unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 363,8896f, 4826,534f, -59,99141f, 363,9043f, 4827,508f, -58,01044f, 1,5f, 0, 1, 0))
		{
			uParam3->f_815 = "anim@mp_radio@garage@low";
			uParam3->f_816 = 0;
			uParam3->f_817 = { 364,14f, 4827,09f, -58,958f };
			uParam3->f_820 = "action_a";
			uParam3->f_821 = "enter";
			uParam3->f_822 = "idle_a";
			uParam3->f_823 = "button_press";
			uParam3->f_824 = "exit";
			Global_25500 = 1;
			return 1;
		}
		Global_25500 = 0;
		return 0;
	}
	if ((((((((((!func_67(uParam1->f_31) && !func_66(uParam1->f_31, -1)) && !func_65(uParam1->f_31)) && !iParam0->f_12) && !func_64(uParam1->f_31)) && !func_59(uParam1->f_31, 1, 0)) && !func_63(unk_0x9EB17624F44A8DA4())) && !func_58(unk_0x9EB17624F44A8DA4())) && !func_57(unk_0x9EB17624F44A8DA4())) && !func_37(unk_0x9EB17624F44A8DA4())) && !func_34(unk_0x9EB17624F44A8DA4()))
	{
		switch (uParam1->f_33)
		{
			case 2:
				if (unk_0xC80D31E4B587871C(*iParam0, 0))
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 176,2736f, -999,4766f, -97,58723f, 176,2674f, -1000,868f, -100,0624f, 1,6875f, 0, 1, 0))
					{
						uParam3->f_815 = "anim@mp_radio@garage@low";
						uParam3->f_816 = 0;
						uParam3->f_817 = { 176,601f, -999,79f, -98,957f };
						uParam3->f_820 = "action_a";
						uParam3->f_821 = "enter";
						uParam3->f_822 = "idle_a";
						uParam3->f_823 = "button_press";
						uParam3->f_824 = "exit";
						return 1;
					}
				}
				else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 263,615f, -994,4068f, -97,69791f, 263,6068f, -996,1709f, -100,0711f, 1,5f, 0, 1, 0))
				{
					uParam3->f_815 = "anim@mp_radio@low_apment";
					uParam3->f_816 = -1;
					uParam3->f_817 = { 263,035f, -995,132f, -99,04f };
					uParam3->f_820 = "action_a_kitchen";
					uParam3->f_821 = "enter_kitchen";
					uParam3->f_822 = "idle_a_kitchen";
					uParam3->f_823 = "button_press_kitchen";
					uParam3->f_824 = "exit_kitchen";
					return 1;
				}
				break;
			
			case 6:
				if (unk_0xC80D31E4B587871C(*iParam0, 0))
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 201,8828f, -993,9427f, -97,58112f, 202,0024f, -995,1277f, -100,0625f, 1,6875f, 0, 1, 0))
					{
						uParam3->f_815 = "anim@mp_radio@garage@medium";
						uParam3->f_816 = 0;
						uParam3->f_817 = { 201,455f, -994,257f, -98,979f };
						uParam3->f_820 = "action_a";
						uParam3->f_821 = "enter";
						uParam3->f_822 = "idle_a";
						uParam3->f_823 = "button_press";
						uParam3->f_824 = "exit";
						return 1;
					}
				}
				else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 340,9294f, -1002,605f, -100,1962f, 340,9887f, -1000,322f, -98,19622f, 1f, 0, 1, 0))
				{
					uParam3->f_815 = "anim@mp_radio@medium_apment";
					uParam3->f_816 = -90;
					uParam3->f_817 = { 341,355f, -1000,652f, -99,14f };
					uParam3->f_820 = "action_a_kitchen";
					uParam3->f_821 = "enter_kitchen";
					uParam3->f_822 = "idle_a_kitchen";
					uParam3->f_823 = "button_press_kitchen";
					uParam3->f_824 = "exit_kitchen";
					return 1;
				}
				break;
			
			case 10:
				if (unk_0xC80D31E4B587871C(*iParam0, 0))
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 231,8411f, -975,6349f, -100,0898f, 230,3515f, -975,6111f, -96,0415f, 2,5f, 0, 1, 0))
					{
						uParam3->f_815 = "anim@mp_radio@garage@high";
						uParam3->f_816 = 0;
						uParam3->f_817 = { 230,302f, -975,685f, -98,979f };
						uParam3->f_820 = "action_a";
						uParam3->f_821 = "enter";
						uParam3->f_822 = "idle_a";
						uParam3->f_823 = "button_press";
						uParam3->f_824 = "exit";
						return 1;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							vVar0 = { uParam3->f_707 };
							vVar2 = { vVar0 };
							vVar0 = { uParam3->f_713 };
							if (func_359(uParam1->f_31))
							{
								uParam3->f_817 = { uParam3->f_737 };
								uParam3->f_816 = system::round(uParam3->f_737.f_3.f_2);
								uParam3->f_815 = "anim@mp_radio@high_life_apment";
								uParam3->f_820 = "action_a_living_room";
								uParam3->f_821 = "enter_living_room";
								uParam3->f_822 = "idle_a_living_room";
								uParam3->f_823 = "button_press_living_room";
								uParam3->f_824 = "exit_living_room";
							}
							else
							{
								uParam3->f_817 = { uParam3->f_737 };
								uParam3->f_816 = system::round(uParam3->f_737.f_3.f_2);
								uParam3->f_815 = "anim@mp_radio@high_apment";
								uParam3->f_820 = "action_a_bedroom";
								uParam3->f_821 = "enter_bedroom";
								uParam3->f_822 = "idle_a_bedroom";
								uParam3->f_823 = "button_press_bedroom";
								uParam3->f_824 = "exit_bedroom";
							}
							vVar3 = { vVar0 };
							fVar4 = 1,8125f;
							break;
						
						case 1:
							vVar0 = { uParam3->f_743 };
							vVar2 = { vVar0 };
							vVar0 = { uParam3->f_749 };
							if (func_359(uParam1->f_31))
							{
								uParam3->f_815 = "anim@mp_radio@high_life_apment";
								uParam3->f_817 = { uParam3->f_755 };
								uParam3->f_816 = system::round(uParam3->f_755.f_3.f_2);
								uParam3->f_820 = "action_a_bedroom";
								uParam3->f_821 = "enter_bedroom";
								uParam3->f_822 = "idle_a_bedroom";
								uParam3->f_823 = "button_press_bedroom";
								uParam3->f_824 = "exit_bedroom";
							}
							else
							{
								uParam3->f_817 = { uParam3->f_755 };
								uParam3->f_816 = system::round(uParam3->f_755.f_3.f_2);
								uParam3->f_815 = "anim@mp_radio@high_apment";
								uParam3->f_820 = "action_a_living_room";
								uParam3->f_821 = "enter_living_room";
								uParam3->f_822 = "idle_a_living_room";
								uParam3->f_823 = "button_press_living_room";
								uParam3->f_824 = "exit_living_room";
							}
							vVar3 = { vVar0 };
							fVar4 = 1,8125f;
							break;
						
						case 2:
							vVar0 = { uParam3->f_761 };
							vVar2 = { vVar0 };
							vVar0 = { uParam3->f_767 };
							if (func_359(uParam1->f_31))
							{
								uParam3->f_817 = { uParam3->f_773 };
								uParam3->f_816 = system::round(uParam3->f_773.f_3.f_2);
								uParam3->f_815 = "anim@mp_radio@high_life_apment";
								uParam3->f_820 = "action_a_study";
								uParam3->f_821 = "enter_study";
								uParam3->f_822 = "idle_a_study";
								uParam3->f_823 = "button_press_study";
								uParam3->f_824 = "exit_study";
							}
							else
							{
								uParam3->f_817 = { uParam3->f_773 };
								uParam3->f_816 = system::round(uParam3->f_773.f_3.f_2);
								uParam3->f_815 = "anim@mp_radio@high_apment";
								uParam3->f_820 = "action_a_study";
								uParam3->f_821 = "enter_study";
								uParam3->f_822 = "idle_a_study";
								uParam3->f_823 = "button_press_study";
								uParam3->f_824 = "exit_study";
							}
							vVar3 = { vVar0 };
							fVar4 = 1f;
							iVar5 = 1;
							break;
					}
					if ((vVar2.x != 0f && vVar2.y != 0f) && vVar2.z != 0f)
					{
						if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vVar2, vVar3, fVar4, 0, 1, 0))
						{
							if (iVar5 == 1)
							{
								if (!unk_0xC80D31E4B587871C(*iParam0, 5))
								{
									unk_0x872F1C1F8587CCC7(iParam0, 5);
								}
								iVar5 = 0;
							}
							return 1;
						}
						else
						{
							iVar5 = 0;
							unk_0x0EE72DB1CD8A3B86(iParam0, 5);
							uParam3->f_817 = { 0f, 0f, 0f };
							uParam3->f_816 = 0;
							uParam3->f_815 = "";
							uParam3->f_820 = "";
							uParam3->f_821 = "";
							uParam3->f_822 = "";
							uParam3->f_823 = "";
							uParam3->f_824 = "";
						}
					}
				}
				break;
			
			case 20:
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), uParam3->f_707, uParam3->f_713, 1,4f, 0, 1, 0))
				{
					uParam3->f_816 = system::round(uParam3->f_737.f_3.f_2);
					uParam3->f_817 = { uParam3->f_737 };
					uParam3->f_815 = "anim@mp_radio@garage@medium";
					uParam3->f_820 = "action_a";
					uParam3->f_821 = "enter";
					uParam3->f_822 = "idle_a";
					uParam3->f_823 = "button_press";
					uParam3->f_824 = "exit";
					return 1;
				}
				break;
		}
	}
	else if ((((((((func_67(uParam1->f_31) || func_66(uParam1->f_31, -1)) || func_65(uParam1->f_31)) || iParam0->f_12) || func_64(uParam1->f_31)) || func_63(unk_0x9EB17624F44A8DA4())) || func_58(unk_0x9EB17624F44A8DA4())) || func_57(unk_0x9EB17624F44A8DA4())) || func_37(unk_0x9EB17624F44A8DA4()))
	{
		switch (iParam2)
		{
			case 0:
				Var6 = { uParam3->f_707 };
				Var7 = { uParam3->f_713 };
				Var8 = { uParam3->f_737 };
				if (func_65(uParam1->f_31))
				{
					if (((Global_3934112 == 1 || Global_3934112 == 4) || Global_3934112 == 5) || Global_3934112 == 8)
					{
						Var6 = { uParam3->f_731 };
						Var7 = { uParam3->f_725 };
						Var8 = { uParam3->f_719 };
					}
					else if (((Global_3934112 == 2 || Global_3934112 == 3) || Global_3934112 == 6) || Global_3934112 == 7)
					{
						Var6 = { uParam3->f_707 };
						Var7 = { uParam3->f_713 };
						Var8 = { uParam3->f_737 };
					}
				}
				vVar0 = { Var6 };
				vVar2 = { vVar0 };
				vVar0 = { Var7 };
				uParam3->f_817 = { Var8 };
				uParam3->f_816 = system::round(Var8.f_3.f_2);
				uParam3->f_815 = "anim@mp_radio@high_apment";
				uParam3->f_820 = "action_a_living_room";
				uParam3->f_821 = "enter_living_room";
				uParam3->f_822 = "idle_a_living_room";
				uParam3->f_823 = "button_press_living_room";
				uParam3->f_824 = "exit_living_room";
				if (iParam0->f_12)
				{
					uParam3->f_815 = "anim@mp_radio@garage@low";
					uParam3->f_817 = { uParam3->f_737 };
					uParam3->f_816 = system::round(uParam3->f_737.f_3.f_2);
					uParam3->f_820 = "action_a";
					uParam3->f_821 = "enter";
					uParam3->f_822 = "idle_a";
					uParam3->f_823 = "button_press";
					uParam3->f_824 = "exit";
				}
				if (func_64(uParam1->f_31))
				{
					uParam3->f_815 = "anim@mp_radio@high_apment";
					uParam3->f_820 = "action_a_bedroom";
					uParam3->f_821 = "enter_bedroom";
					uParam3->f_822 = "idle_a_bedroom";
					uParam3->f_823 = "button_press_bedroom";
					uParam3->f_824 = "exit_bedroom";
				}
				if (func_63(unk_0x9EB17624F44A8DA4()) || func_58(unk_0x9EB17624F44A8DA4()))
				{
					uParam3->f_815 = "anim@mp_radio@high_apment";
					uParam3->f_820 = "action_a_living_room";
					uParam3->f_821 = "enter_living_room";
					uParam3->f_822 = "idle_a_living_room";
					uParam3->f_823 = "button_press_living_room";
					uParam3->f_824 = "exit_living_room";
				}
				if (func_57(unk_0x9EB17624F44A8DA4()))
				{
					uParam3->f_815 = "anim@mp_radio@low_apment";
					uParam3->f_820 = "action_a_kitchen";
					uParam3->f_821 = "enter_kitchen";
					uParam3->f_822 = "idle_a_kitchen";
					uParam3->f_823 = "button_press_kitchen";
					uParam3->f_824 = "exit_kitchen";
				}
				if (func_37(unk_0x9EB17624F44A8DA4()))
				{
					uParam3->f_815 = "anim@mp_radio@garage@medium";
					uParam3->f_820 = "action_a";
					uParam3->f_821 = "enter";
					uParam3->f_822 = "idle_a";
					uParam3->f_823 = "button_press";
					uParam3->f_824 = "exit";
				}
				vVar3 = { vVar0 };
				fVar4 = 1,8125f;
				break;
			
			case 1:
				vVar0 = { uParam3->f_743 };
				vVar2 = { vVar0 };
				vVar0 = { uParam3->f_749 };
				uParam3->f_817 = { uParam3->f_755 };
				uParam3->f_816 = system::round(uParam3->f_755.f_3.f_2);
				uParam3->f_815 = "anim@mp_radio@high_apment";
				uParam3->f_820 = "action_a_living_room";
				uParam3->f_821 = "enter_living_room";
				uParam3->f_822 = "idle_a_living_room";
				uParam3->f_823 = "button_press_living_room";
				uParam3->f_824 = "exit_living_room";
				if (func_65(uParam1->f_31))
				{
					uParam3->f_815 = "anim@mp_radio@high_apment";
					uParam3->f_820 = "action_a_study";
					uParam3->f_821 = "enter_study";
					uParam3->f_822 = "idle_a_study";
					uParam3->f_823 = "button_press_study";
					uParam3->f_824 = "exit_study";
				}
				if (func_37(unk_0x9EB17624F44A8DA4()))
				{
					uParam3->f_815 = "anim@mp_radio@garage@medium";
					uParam3->f_820 = "action_a";
					uParam3->f_821 = "enter";
					uParam3->f_822 = "idle_a";
					uParam3->f_823 = "button_press";
					uParam3->f_824 = "exit";
				}
				vVar3 = { vVar0 };
				fVar4 = 1,8125f;
				break;
			
			case 2:
				vVar0 = { uParam3->f_761 };
				vVar2 = { vVar0 };
				vVar0 = { uParam3->f_767 };
				uParam3->f_817 = { uParam3->f_773 };
				uParam3->f_816 = system::round(uParam3->f_773.f_3.f_2);
				uParam3->f_815 = "anim@mp_radio@high_apment";
				uParam3->f_820 = "action_a_living_room";
				uParam3->f_821 = "enter_living_room";
				uParam3->f_822 = "idle_a_living_room";
				uParam3->f_823 = "button_press_living_room";
				uParam3->f_824 = "exit_living_room";
				if (func_66(uParam1->f_31, -1) || func_65(uParam1->f_31))
				{
					uParam3->f_820 = "action_a_study";
					uParam3->f_821 = "enter_study";
					uParam3->f_822 = "idle_a_study";
					uParam3->f_823 = "button_press_study";
					uParam3->f_824 = "exit_study";
				}
				vVar3 = { vVar0 };
				fVar4 = 1,8125f;
				break;
			
			case 3:
				vVar0 = { uParam3->f_791 };
				vVar2 = { vVar0 };
				vVar0 = { uParam3->f_785 };
				uParam3->f_817 = { uParam3->f_779 };
				uParam3->f_816 = system::round(uParam3->f_779.f_3.f_2);
				uParam3->f_815 = "anim@mp_radio@high_apment";
				uParam3->f_820 = "action_a_living_room";
				uParam3->f_821 = "enter_living_room";
				uParam3->f_822 = "idle_a_living_room";
				uParam3->f_823 = "button_press_living_room";
				uParam3->f_824 = "exit_living_room";
				vVar3 = { vVar0 };
				fVar4 = 1,8125f;
				break;
			
			case 4:
				vVar0 = { uParam3->f_809 };
				vVar2 = { vVar0 };
				vVar0 = { uParam3->f_803 };
				uParam3->f_817 = { uParam3->f_797 };
				uParam3->f_816 = system::round(uParam3->f_797.f_3.f_2);
				uParam3->f_815 = "anim@mp_radio@high_apment";
				uParam3->f_820 = "action_a_living_room";
				uParam3->f_821 = "enter_living_room";
				uParam3->f_822 = "idle_a_living_room";
				uParam3->f_823 = "button_press_living_room";
				uParam3->f_824 = "exit_living_room";
				vVar3 = { vVar0 };
				fVar4 = 1,8125f;
				break;
		}
		if ((vVar2.x != 0f && vVar2.y != 0f) && vVar2.z != 0f)
		{
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vVar2, vVar3, fVar4, 0, 1, 0))
			{
				Global_25500 = 1;
				return 1;
			}
			else
			{
				iVar5 = 0;
				Global_25500 = 0;
				unk_0x0EE72DB1CD8A3B86(iParam0, 5);
				uParam3->f_817 = { 0f, 0f, 0f };
				uParam3->f_816 = 0;
				uParam3->f_815 = "";
				uParam3->f_820 = "";
				uParam3->f_821 = "";
				uParam3->f_822 = "";
				uParam3->f_823 = "";
				uParam3->f_824 = "";
			}
		}
		switch (uParam1->f_33)
		{
			case 10:
				if (unk_0xC80D31E4B587871C(*iParam0, 0))
				{
					if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 231,8411f, -975,6349f, -100,0898f, 230,3515f, -975,6111f, -96,0415f, 2,5f, 0, 1, 0))
					{
						uParam3->f_815 = "anim@mp_radio@garage@high";
						uParam3->f_816 = 0;
						uParam3->f_817 = { 230,302f, -975,685f, -98,979f };
						uParam3->f_820 = "action_a";
						uParam3->f_821 = "enter";
						uParam3->f_822 = "idle_a";
						uParam3->f_823 = "button_press";
						uParam3->f_824 = "exit";
						return 1;
					}
				}
				break;
			}
	}
	return 0;
}

int func_369()//Position - 0x21F15
{
	if (func_63(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xC80D31E4B587871C(Global_1669535.f_16, 0) || unk_0xC80D31E4B587871C(Global_1669535.f_16, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_370(var uParam0, var uParam1)//Position - 0x21F4C
{
	if (func_66(uParam1->f_31, -1))
	{
		return 3;
	}
	if (func_65(uParam1->f_31))
	{
		return 2;
	}
	if (func_67(uParam1->f_31) && !uParam0->f_12)
	{
		return 5;
	}
	if (uParam0->f_12)
	{
		return 3;
	}
	if (func_59(uParam1->f_31, 0, 0))
	{
		return 2;
	}
	if ((((func_64(uParam1->f_31) || func_63(unk_0x9EB17624F44A8DA4())) || func_58(unk_0x9EB17624F44A8DA4())) || func_57(unk_0x9EB17624F44A8DA4())) || func_37(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	if (func_34(unk_0x9EB17624F44A8DA4()))
	{
		return 2;
	}
	if (uParam1->f_33 == 10)
	{
		if (!unk_0xC80D31E4B587871C(*uParam0, 0))
		{
			return 1;
		}
	}
	return 2;
}

void func_371(int iParam0)//Position - 0x22018
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_26(0))
		{
			func_23(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_372(int iParam0, int iParam1)//Position - 0x22041
{
	iParam0->f_13 = iParam1;
}

int func_373(int iParam0)//Position - 0x2204F
{
	if (!unk_0x6ADD12BF4D6D2587(iParam0->f_702))
	{
		if (func_11(-408752065))
		{
			if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
			{
				iParam0->f_702 = unk_0x9A331BBF019DCAD2(-408752065, -1237,322f, -3008,762f, -42,743f, 0, true, 0);
				unk_0x59AF3B40AE222194(iParam0->f_702, 0f, 0f, -90f, 2, 1);
			}
		}
	}
	if (func_374(iParam0->f_698))
	{
		if (!unk_0x6ADD12BF4D6D2587(iParam0->f_701))
		{
			if (func_11(-408752065))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					iParam0->f_701 = unk_0x9A331BBF019DCAD2(-408752065, -1236,81f, -2981,99f, -41,17f, 0, true, 0);
					unk_0x59AF3B40AE222194(iParam0->f_701, 0f, 0f, 90f, 2, 1);
				}
			}
		}
	}
	if (func_374(iParam0->f_698))
	{
		if (!unk_0x6ADD12BF4D6D2587(iParam0->f_701) || !unk_0x6ADD12BF4D6D2587(iParam0->f_702))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0->f_702))
	{
		return 0;
	}
	return 1;
}

bool func_374(int iParam0)//Position - 0x2215E
{
	return (func_376(iParam0) || func_375(iParam0));
}

bool func_375(int iParam0)//Position - 0x22178
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_241.f_1, 1);
}

bool func_376(int iParam0)//Position - 0x22195
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_241.f_1, 0);
}

int func_377(int iParam0, int iParam1, var uParam2)//Position - 0x221B2
{
	int iVar0;
	
	if (func_37(unk_0x9EB17624F44A8DA4()))
	{
		iParam1->f_707 = { -1237,811f, -3008,222f, -43,88727f };
		iParam1->f_713 = { -1237,797f, -3009,318f, -42,13727f };
		iParam1->f_737 = { -1237,647f, -3008,303f, -42,875f };
		iParam1->f_737.f_3 = { 0f, 0f, -88,92f };
		if (func_374(iParam1->f_698))
		{
			iParam1->f_743 = { -1236,293f, -2982,684f, -42,26361f };
			iParam1->f_749 = { -1236,315f, -2981,646f, -39,76361f };
			iParam1->f_755 = { -1236,553f, -2982,447f, -41,25f };
			iParam1->f_755.f_3 = { 0f, 0f, 83,16f };
		}
		return 1;
	}
	if (((((((((!func_67(uParam2->f_31) && !func_66(uParam2->f_31, -1)) && !func_65(uParam2->f_31)) && !iParam0->f_12) && !func_64(uParam2->f_31)) && !func_63(unk_0x9EB17624F44A8DA4())) && !func_58(unk_0x9EB17624F44A8DA4())) && !func_57(unk_0x9EB17624F44A8DA4())) && !func_37(unk_0x9EB17624F44A8DA4())) && !func_34(unk_0x9EB17624F44A8DA4()))
	{
		switch (uParam2->f_33)
		{
			case 10:
				if (unk_0xC80D31E4B587871C(*iParam0, 0))
				{
				}
				else
				{
					if (func_359(uParam2->f_31))
					{
						func_46(uParam2->f_31, 102, &(iParam1->f_707), 61, 0);
					}
					else
					{
						func_46(uParam2->f_31, 102, &(iParam1->f_707), -1, 0);
					}
					if (func_359(uParam2->f_31))
					{
						func_46(uParam2->f_31, 103, &(iParam1->f_713), 61, 0);
					}
					else
					{
						func_46(uParam2->f_31, 103, &(iParam1->f_713), -1, 0);
					}
					if (func_359(uParam2->f_31))
					{
						func_46(uParam2->f_31, 182, &(iParam1->f_737), 61, 0);
					}
					else
					{
						func_46(uParam2->f_31, 182, &(iParam1->f_737), -1, 0);
					}
					if (func_359(uParam2->f_31))
					{
						func_46(uParam2->f_31, 104, &(iParam1->f_743), 61, 0);
					}
					else
					{
						func_46(uParam2->f_31, 104, &(iParam1->f_743), -1, 0);
					}
					if (func_359(uParam2->f_31))
					{
						func_46(uParam2->f_31, 105, &(iParam1->f_749), 61, 0);
					}
					else
					{
						func_46(uParam2->f_31, 105, &(iParam1->f_749), -1, 0);
					}
					if (func_359(uParam2->f_31))
					{
						iParam1->f_815 = "anim@mp_radio@high_life_apment";
						func_46(uParam2->f_31, 183, &(iParam1->f_755), 61, 0);
					}
					else
					{
						func_46(uParam2->f_31, 183, &(iParam1->f_755), -1, 0);
					}
					if (func_359(uParam2->f_31))
					{
						func_46(uParam2->f_31, 169, &(iParam1->f_761), 61, 0);
					}
					else
					{
						func_46(uParam2->f_31, 169, &(iParam1->f_761), -1, 0);
					}
					if (func_359(uParam2->f_31))
					{
						func_46(uParam2->f_31, 170, &(iParam1->f_767), 61, 0);
					}
					else
					{
						func_46(uParam2->f_31, 170, &(iParam1->f_767), -1, 0);
					}
					if (func_359(uParam2->f_31))
					{
						func_46(uParam2->f_31, 181, &(iParam1->f_773), 61, 0);
					}
					else
					{
						func_46(uParam2->f_31, 181, &(iParam1->f_773), -1, 0);
					}
				}
				break;
			
			case 20:
				func_46(uParam2->f_31, 102, &(iParam1->f_707), func_51(uParam2->f_31), 1);
				func_46(uParam2->f_31, 103, &(iParam1->f_713), func_51(uParam2->f_31), 1);
				func_46(uParam2->f_31, 182, &(iParam1->f_737), func_51(uParam2->f_31), 1);
				break;
		}
	}
	else if (func_66(uParam2->f_31, -1))
	{
		func_46(uParam2->f_31, 102, &(iParam1->f_707), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 103, &(iParam1->f_713), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 182, &(iParam1->f_737), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 104, &(iParam1->f_743), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 105, &(iParam1->f_749), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 183, &(iParam1->f_755), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 169, &(iParam1->f_761), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 170, &(iParam1->f_767), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 181, &(iParam1->f_773), func_51(uParam2->f_31), 0);
	}
	else if (func_65(uParam2->f_31))
	{
		func_46(uParam2->f_31, 501, &(iParam1->f_707), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 502, &(iParam1->f_713), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 500, &(iParam1->f_737), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 102, &(iParam1->f_731), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 103, &(iParam1->f_725), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 182, &(iParam1->f_719), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 104, &(iParam1->f_743), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 105, &(iParam1->f_749), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 183, &(iParam1->f_755), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 169, &(iParam1->f_761), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 170, &(iParam1->f_767), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 181, &(iParam1->f_773), func_51(uParam2->f_31), 0);
	}
	else if (func_64(uParam2->f_31))
	{
		func_46(uParam2->f_31, 102, &(iParam1->f_707), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 103, &(iParam1->f_713), func_51(uParam2->f_31), 0);
		func_46(uParam2->f_31, 182, &(iParam1->f_737), func_51(uParam2->f_31), 0);
	}
	else if (func_63(unk_0x9EB17624F44A8DA4()))
	{
		if (iParam0->f_15 == 111)
		{
			iParam1->f_707 = { 994,9379f, -3097,307f, -39,99083f };
			iParam1->f_713 = { 994,9346f, -3098,542f, -38,24083f };
			iParam1->f_737 = { 995,367f, -3097,48f, -39,115f };
			iParam1->f_737.f_3 = { 0f, 0f, -92,843f };
		}
		else if (iParam0->f_15 == 42)
		{
			iParam1->f_707 = { 1049,198f, -3100,077f, -39,99993f };
			iParam1->f_713 = { 1049,168f, -3099,13f, -38,24993f };
			iParam1->f_737 = { 1048,582f, -3100,444f, -39,115f };
			iParam1->f_737.f_3 = { 0f, 0f, 84,6f };
		}
		else if (iParam0->f_15 == 16)
		{
			iParam1->f_707 = { 1088,615f, -3100,932f, -39,99993f };
			iParam1->f_713 = { 1088,619f, -3099,957f, -38,24993f };
			iParam1->f_737 = { 1088,011f, -3100,987f, -39,125f };
			iParam1->f_737.f_3 = { 0f, 0f, 88,2f };
		}
	}
	else if (func_57(unk_0x9EB17624F44A8DA4()))
	{
		iParam1->f_707 = { 965,73f, -2991,764f, -40,59f };
		iParam1->f_713 = { 965,73f, -2990,864f, -38,79f };
		iParam1->f_737 = { 965,89f, -2991,614f, -39,67f };
		iParam1->f_737.f_3 = { 0f, 0f, 86,76f };
	}
	else if (func_67(uParam2->f_31) && !iParam0->f_12)
	{
		iVar0 = iParam0->f_2;
		if (iVar0 == -1)
		{
			return 0;
		}
		func_52(iVar0, 102, &(iParam1->f_707), 0);
		func_52(iVar0, 103, &(iParam1->f_713), 0);
		func_52(iVar0, 182, &(iParam1->f_737), 0);
		func_52(iVar0, 104, &(iParam1->f_743), 0);
		func_52(iVar0, 105, &(iParam1->f_749), 0);
		func_52(iVar0, 183, &(iParam1->f_755), 0);
		func_52(iVar0, 169, &(iParam1->f_761), 0);
		func_52(iVar0, 170, &(iParam1->f_767), 0);
		func_52(iVar0, 181, &(iParam1->f_773), 0);
		func_52(iVar0, 588, &(iParam1->f_791), 0);
		func_52(iVar0, 587, &(iParam1->f_785), 0);
		func_52(iVar0, 589, &(iParam1->f_779), 0);
		func_52(iVar0, 591, &(iParam1->f_809), 0);
		func_52(iVar0, 590, &(iParam1->f_803), 0);
		func_52(iVar0, 592, &(iParam1->f_797), 0);
	}
	else if (iParam0->f_12)
	{
		if (iParam0->f_2 == -1)
		{
			return 0;
		}
		func_52(iParam0->f_2, 555, &(iParam1->f_707), 0);
		func_52(iParam0->f_2, 556, &(iParam1->f_713), 0);
		func_52(iParam0->f_2, 554, &(iParam1->f_737), 0);
		func_52(iParam0->f_2, 594, &(iParam1->f_743), 0);
		func_52(iParam0->f_2, 593, &(iParam1->f_749), 0);
		func_52(iParam0->f_2, 596, &(iParam1->f_761), 0);
		func_52(iParam0->f_2, 595, &(iParam1->f_767), 0);
	}
	return 1;
}

void func_378(int iParam0)//Position - 0x22AB7
{
	if (!unk_0xC80D31E4B587871C(*iParam0, 1))
	{
		if (func_383())
		{
			unk_0x872F1C1F8587CCC7(iParam0, 2);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(iParam0, 2);
		}
		iParam0->f_7 = func_379();
		if (Global_2097152[func_173() /*12130*/].f_5506.f_10)
		{
			unk_0x872F1C1F8587CCC7(iParam0, 4);
		}
		else
		{
			unk_0x0EE72DB1CD8A3B86(iParam0, 4);
		}
		iParam0->f_8 = Global_2097152[func_173() /*12130*/].f_5506.f_11;
		unk_0x872F1C1F8587CCC7(iParam0, 1);
	}
}

int func_379()//Position - 0x22B2A
{
	if (func_34(unk_0x9EB17624F44A8DA4()) && !func_380(18159, -1, -1))
	{
		return 14;
	}
	return Global_2097152[func_173() /*12130*/].f_5506.f_5[0];
}

int func_380(int iParam0, int iParam1, int iParam2)//Position - 0x22B64
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_96();
	}
	iVar1 = func_382(iParam0, iParam1);
	uVar2 = func_381(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xDDC963E2AB1431C4(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_381(int iParam0)//Position - 0x22BA1
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_382(int iParam0, int iParam1)//Position - 0x22E61
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_96();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_383()//Position - 0x23103
{
	if (func_34(unk_0x9EB17624F44A8DA4()) && !func_380(18159, -1, -1))
	{
		return 0;
	}
	return Global_2097152[func_173() /*12130*/].f_5506.f_2[0];
}

void func_384(var uParam0, var uParam1, int iParam2)//Position - 0x2313C
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	
	if (((((((func_66(uParam1->f_31, -1) || func_65(uParam1->f_31)) || func_64(uParam1->f_31)) || func_63(unk_0x9EB17624F44A8DA4())) || func_58(unk_0x9EB17624F44A8DA4())) || func_57(unk_0x9EB17624F44A8DA4())) || func_37(unk_0x9EB17624F44A8DA4())) || func_34(unk_0x9EB17624F44A8DA4()))
	{
		sVar0 = unk_0xC45B242943C8D6AD(uParam0->f_1);
		if (unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			if (func_63(unk_0x9EB17624F44A8DA4()))
			{
				sVar1 = func_45(uParam1->f_31, 1, 1, uParam0->f_53, 0, 0, 0, 0);
			}
			else if (func_58(unk_0x9EB17624F44A8DA4()))
			{
				sVar1 = func_45(uParam1->f_31, 1, 0, 0, 1, uParam0->f_54, 0, 0);
			}
			else if (func_57(unk_0x9EB17624F44A8DA4()))
			{
				sVar1 = func_45(uParam1->f_31, 1, 0, 0, 0, uParam0->f_54, 1, 0);
			}
			else
			{
				sVar1 = func_45(uParam1->f_31, 1, 0, 0, 0, 0, 0, 0);
			}
			unk_0x4A3AC662F0E3AD0B(sVar1, unk_0x29AB7D6D0DE18055(uParam0->f_22));
			unk_0xD4BB744A696E8ABF(sVar1, iParam2);
			unk_0xF90C8EA056948B11("SE_DLC_APT_Custom_Bedroom", sVar0);
		}
		if (unk_0x918CA1BFFAA03556(uParam0->f_21))
		{
			unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 2, 0, 0, 0, 0, 0, 0), unk_0x29AB7D6D0DE18055(uParam0->f_21));
			unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 2, 0, 0, 0, 0, 0, 0), iParam2);
			unk_0xF90C8EA056948B11("SE_DLC_APT_Custom_Bedroom", sVar0);
		}
		if (unk_0x918CA1BFFAA03556(uParam0->f_23))
		{
			unk_0x4A3AC662F0E3AD0B(func_45(uParam1->f_31, 3, 0, 0, 0, 0, 0, 0), unk_0x29AB7D6D0DE18055(uParam0->f_23));
			unk_0xD4BB744A696E8ABF(func_45(uParam1->f_31, 3, 0, 0, 0, 0, 0, 0), iParam2);
			unk_0xF90C8EA056948B11("SE_DLC_APT_Custom_Bedroom", sVar0);
		}
	}
	else if (func_59(uParam1->f_31, 0, 0) && func_385(unk_0x9EB17624F44A8DA4(), 0))
	{
		sVar2 = func_45(uParam1->f_31, 5, 0, 0, 0, 0, 0, 0);
		if (unk_0x918CA1BFFAA03556(uParam0->f_21))
		{
			unk_0x4A3AC662F0E3AD0B(sVar2, unk_0x29AB7D6D0DE18055(uParam0->f_21));
			unk_0xD4BB744A696E8ABF(sVar2, iParam2);
			unk_0xF90C8EA056948B11(sVar2, unk_0xC45B242943C8D6AD(uParam0->f_1));
		}
	}
	else if (func_59(uParam1->f_31, 0, 0) && !func_385(unk_0x9EB17624F44A8DA4(), 0))
	{
		sVar3 = func_45(uParam1->f_31, 4, 0, 0, 0, 0, 0, 0);
		if (unk_0x918CA1BFFAA03556(uParam0->f_22))
		{
			unk_0x4A3AC662F0E3AD0B(sVar3, unk_0x29AB7D6D0DE18055(uParam0->f_22));
			unk_0xD4BB744A696E8ABF(sVar3, iParam2);
			unk_0xF90C8EA056948B11(sVar3, unk_0xC45B242943C8D6AD(uParam0->f_1));
		}
	}
	else if (func_67(uParam1->f_31) && !uParam0->f_49)
	{
		if (unk_0x918CA1BFFAA03556(uParam0->f_5))
		{
			unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Bar", unk_0x29AB7D6D0DE18055(uParam0->f_5));
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bar", iParam2);
		}
		if (unk_0x918CA1BFFAA03556(uParam0->f_6))
		{
			unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Bedroom", unk_0x29AB7D6D0DE18055(uParam0->f_6));
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom", iParam2);
		}
		if (unk_0x918CA1BFFAA03556(uParam0->f_7))
		{
			unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Bedroom_02", unk_0x29AB7D6D0DE18055(uParam0->f_7));
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom_02", iParam2);
		}
		if (unk_0x918CA1BFFAA03556(uParam0->f_8))
		{
			unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Bedroom_03", unk_0x29AB7D6D0DE18055(uParam0->f_8));
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom_03", iParam2);
		}
	}
	else if (uParam0->f_49)
	{
		if (unk_0x918CA1BFFAA03556(uParam0->f_24))
		{
			unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Exterior_01", unk_0x29AB7D6D0DE18055(uParam0->f_24));
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_01", iParam2);
		}
		if (unk_0x918CA1BFFAA03556(uParam0->f_25))
		{
			unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Exterior_02", unk_0x29AB7D6D0DE18055(uParam0->f_25));
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_02", iParam2);
		}
		if (unk_0x918CA1BFFAA03556(uParam0->f_26))
		{
			unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Exterior_03", unk_0x29AB7D6D0DE18055(uParam0->f_26));
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_03", iParam2);
		}
		if (unk_0x918CA1BFFAA03556(uParam0->f_27))
		{
			unk_0x4A3AC662F0E3AD0B("SE_DLC_APT_Yacht_Exterior_04", unk_0x29AB7D6D0DE18055(uParam0->f_27));
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_04", iParam2);
		}
	}
}

bool func_385(int iParam0, bool bParam1)//Position - 0x234EA
{
	if (Global_1595537 != func_36())
	{
		if (!func_62(Global_1595537))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x9EB17624F44A8DA4() != Global_1595537)
			{
				if (unk_0xC80D31E4B587871C(Global_2422736[Global_1595537 /*420*/].f_210, 24) || func_61(Global_1595537))
				{
					return 1;
				}
			}
		}
	}
	if (iParam0 == func_36())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 24);
}

void func_386(int iParam0, int iParam1, var uParam2)//Position - 0x23563
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	unk_0xD4BB744A696E8ABF(func_389(2), 0);
	unk_0xD4BB744A696E8ABF(func_389(6), 0);
	unk_0xD4BB744A696E8ABF(func_389(10), 0);
	unk_0xD4BB744A696E8ABF(func_388(2, 0, 0), 0);
	unk_0xD4BB744A696E8ABF(func_388(6, 0, 0), 0);
	if (func_67(uParam2->f_31) && !iParam0->f_12)
	{
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bar", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom_02", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom_03", 0);
	}
	else if (func_67(uParam2->f_31) && iParam0->f_12)
	{
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_01", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_02", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_03", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_04", 0);
	}
	else if (func_66(uParam2->f_31, 77))
	{
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_A_Bedroom", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_A_Heist_Room", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_A_Living_Room", 0);
	}
	else if (func_66(uParam2->f_31, 73))
	{
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_B_Bedroom", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_B_Heist_Room", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_B_Living_Room", 0);
	}
	else if (func_65(uParam2->f_31))
	{
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Custom_Bedroom", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Custom_Heist_Room", 0);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Custom_Living_Room", 0);
	}
	else if (func_64(uParam2->f_31))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 0, 0), 0);
	}
	else if (func_63(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 1, iParam0->f_15, 0, 0, 0, 0), 0);
	}
	else if (func_59(uParam2->f_31, 0, 0))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 4, 0, 0, 0, 0, 0, 0), 0);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 5, 0, 0, 0, 0, 0, 0), 0);
	}
	else if (func_58(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 0, 0, 1, iParam0->f_16, 0, 0), 0);
	}
	else if (func_57(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 0, 0, 0, iParam0->f_16, 1, 0), 0);
	}
	else if (func_37(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 0, 0), 0);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 0, 1), 0);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 0), 0);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 1), 0);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 2), 0);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 3), 0);
		if (func_387(iParam1->f_698))
		{
			unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 3, 0, 0, 0, 0, 0, 0), 1);
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 3, 0, 0, 0, 0, 0, 0), "radio_01_class_rock");
		}
		else
		{
			unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 3, 0, 0, 0, 0, 0, 0), 0);
		}
	}
	else if (func_34(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xD4BB744A696E8ABF(func_45(-1, 1, 0, 0, 0, 0, 0, 0), 0);
		unk_0xD4BB744A696E8ABF(func_45(-1, 1, 0, 0, 0, 0, 0, 1), 0);
	}
	iVar0 = 0;
	while (iVar0 < 118)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			sVar2 = func_388(10, iVar0, iVar1);
			if (!unk_0xAB019B170BF1309C(sVar2))
			{
				unk_0xD4BB744A696E8ABF(sVar2, 0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

bool func_387(int iParam0)//Position - 0x2389D
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_241.f_1, 2);
}

char* func_388(int iParam0, int iParam1, int iParam2)//Position - 0x238BA
{
	switch (iParam0)
	{
		case 2:
			return "SE_MP_AP_RAD_v_studio_lo_living";
			break;
		
		case 6:
			return "SE_MP_AP_RAD_v_apart_midspaz_lounge";
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_1_1";
							break;
						
						case 1:
							return "SE_MP_APT_1_2";
							break;
						
						case 2:
							return "SE_MP_APT_1_3";
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_2_1";
							break;
						
						case 1:
							return "SE_MP_APT_2_2";
							break;
						
						case 2:
							return "SE_MP_APT_2_3";
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_3_1";
							break;
						
						case 1:
							return "SE_MP_APT_3_2";
							break;
						
						case 2:
							return "SE_MP_APT_3_3";
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_4_1";
							break;
						
						case 1:
							return "SE_MP_APT_4_2";
							break;
						
						case 2:
							return "SE_MP_APT_4_3";
							break;
					}
					break;
				
				case 61:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_NEW_4_1";
							break;
						
						case 1:
							return "SE_MP_APT_NEW_4_2";
							break;
						
						case 2:
							return "SE_MP_APT_NEW_4_3";
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_5_1";
							break;
						
						case 1:
							return "SE_MP_APT_5_2";
							break;
						
						case 2:
							return "SE_MP_APT_5_3";
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_6_1";
							break;
						
						case 1:
							return "SE_MP_APT_6_2";
							break;
						
						case 2:
							return "SE_MP_APT_6_3";
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_7_1";
							break;
						
						case 1:
							return "SE_MP_APT_7_2";
							break;
						
						case 2:
							return "SE_MP_APT_7_3";
							break;
					}
					break;
				
				case 34:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_8_1";
							break;
						
						case 1:
							return "SE_MP_APT_8_2";
							break;
						
						case 2:
							return "SE_MP_APT_8_3";
							break;
					}
					break;
				
				case 62:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_NEW_1_1";
							break;
						
						case 1:
							return "SE_MP_APT_NEW_1_2";
							break;
						
						case 2:
							return "SE_MP_APT_NEW_1_3";
							break;
					}
					break;
				
				case 35:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_9_1";
							break;
						
						case 1:
							return "SE_MP_APT_9_2";
							break;
						
						case 2:
							return "SE_MP_APT_9_3";
							break;
					}
					break;
				
				case 36:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_10_1";
							break;
						
						case 1:
							return "SE_MP_APT_10_2";
							break;
						
						case 2:
							return "SE_MP_APT_10_3";
							break;
					}
					break;
				
				case 37:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_11_1";
							break;
						
						case 1:
							return "SE_MP_APT_11_2";
							break;
						
						case 2:
							return "SE_MP_APT_11_3";
							break;
					}
					break;
				
				case 38:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_12_1";
							break;
						
						case 1:
							return "SE_MP_APT_12_2";
							break;
						
						case 2:
							return "SE_MP_APT_12_3";
							break;
					}
					break;
				
				case 39:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_13_1";
							break;
						
						case 1:
							return "SE_MP_APT_13_2";
							break;
						
						case 2:
							return "SE_MP_APT_13_3";
							break;
					}
					break;
				
				case 65:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_NEW_5_1";
							break;
						
						case 1:
							return "SE_MP_APT_NEW_5_2";
							break;
						
						case 2:
							return "SE_MP_APT_NEW_5_3";
							break;
					}
					break;
				
				case 40:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_14_1";
							break;
						
						case 1:
							return "SE_MP_APT_14_2";
							break;
						
						case 2:
							return "SE_MP_APT_14_3";
							break;
					}
					break;
				
				case 41:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_15_1";
							break;
						
						case 1:
							return "SE_MP_APT_15_2";
							break;
						
						case 2:
							return "SE_MP_APT_15_3";
							break;
					}
					break;
				
				case 63:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_NEW_2_1";
							break;
						
						case 1:
							return "SE_MP_APT_NEW_2_2";
							break;
						
						case 2:
							return "SE_MP_APT_NEW_2_3";
							break;
					}
					break;
				
				case 42:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_16_1";
							break;
						
						case 1:
							return "SE_MP_APT_16_2";
							break;
						
						case 2:
							return "SE_MP_APT_16_3";
							break;
					}
					break;
				
				case 43:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_17_1";
							break;
						
						case 1:
							return "SE_MP_APT_17_2";
							break;
						
						case 2:
							return "SE_MP_APT_17_3";
							break;
					}
					break;
				
				case 64:
					switch (iParam2)
					{
						case 0:
							return "SE_MP_APT_NEW_3_1";
							break;
						
						case 1:
							return "SE_MP_APT_NEW_3_2";
							break;
						
						case 2:
							return "SE_MP_APT_NEW_3_3";
							break;
					}
					break;
			}
			break;
	}
	return "";
}

char* func_389(int iParam0)//Position - 0x23E7D
{
	switch (iParam0)
	{
		case 2:
			return "SE_MP_GARAGE_S_RADIO";
			break;
		
		case 6:
			return "SE_MP_GARAGE_M_RADIO";
			break;
		
		case 10:
			return "SE_MP_GARAGE_L_RADIO";
			break;
	}
	return "";
}

void func_390(var uParam0)//Position - 0x23EC0
{
	if (uParam0->f_50 > 0)
	{
		if (uParam0->f_50 == 1)
		{
			if (!Global_2097152[func_173() /*12130*/].f_5506.f_2[0])
			{
				Global_2097152[func_173() /*12130*/].f_5506.f_2[0] = 1;
				Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_529 = -1;
			}
		}
		if (uParam0->f_50 == 2)
		{
			if (Global_2097152[func_173() /*12130*/].f_5506.f_2[0])
			{
				Global_2097152[func_173() /*12130*/].f_5506.f_2[0] = 0;
				Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_529 = -1;
			}
		}
		if (uParam0->f_1 != Global_2097152[func_173() /*12130*/].f_5506.f_5[0])
		{
			Global_2097152[func_173() /*12130*/].f_5506.f_5[0] = uParam0->f_1;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_528 = -1;
		}
	}
	if (uParam0->f_51 > 0)
	{
		if (uParam0->f_51 == 1)
		{
			if (!Global_2097152[func_173() /*12130*/].f_5506.f_10)
			{
				Global_2097152[func_173() /*12130*/].f_5506.f_10 = 1;
			}
		}
		if (uParam0->f_51 == 2)
		{
			if (Global_2097152[func_173() /*12130*/].f_5506.f_10)
			{
				Global_2097152[func_173() /*12130*/].f_5506.f_10 = 0;
			}
		}
		if (uParam0->f_2 != Global_2097152[func_173() /*12130*/].f_5506.f_11)
		{
			Global_2097152[func_173() /*12130*/].f_5506.f_11 = uParam0->f_2;
		}
	}
}

void func_391(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x24022
{
	bool bVar0;
	
	bVar0 = iParam4;
	switch (func_349(uParam0, iParam1))
	{
		case 1:
			if (iParam2->f_3 != func_347(uParam0, iParam1))
			{
				iParam2->f_3 = func_347(uParam0, iParam1);
				if (iParam1->f_13 == 2)
				{
					if ((((func_63(unk_0x9EB17624F44A8DA4()) || func_58(unk_0x9EB17624F44A8DA4())) || func_57(unk_0x9EB17624F44A8DA4())) || func_60(unk_0x9EB17624F44A8DA4(), 0)) || func_37(unk_0x9EB17624F44A8DA4()))
					{
						unk_0x4AFBCBFDE748D4E0(-1, "Retune_Low", "MP_RADIO_SFX", 1);
					}
					else if (!func_67(uParam3->f_31) && !func_64(uParam3->f_31))
					{
						unk_0x4AFBCBFDE748D4E0(-1, func_399(iParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					else
					{
						unk_0x4AFBCBFDE748D4E0(-1, "Retune_High", "MP_RADIO_SFX", 1);
					}
				}
				bVar0 = true;
			}
			if (unk_0xC80D31E4B587871C(*iParam2, 6))
			{
				unk_0x0EE72DB1CD8A3B86(iParam2, 6);
			}
			if (!unk_0xC80D31E4B587871C(*iParam2, 4))
			{
				if (iParam1->f_13 == 2)
				{
					if ((((func_63(unk_0x9EB17624F44A8DA4()) || func_58(unk_0x9EB17624F44A8DA4())) || func_57(unk_0x9EB17624F44A8DA4())) || func_60(unk_0x9EB17624F44A8DA4(), 0)) || func_37(unk_0x9EB17624F44A8DA4()))
					{
						unk_0x4AFBCBFDE748D4E0(-1, "Retune_Low", "MP_RADIO_SFX", 1);
					}
					else if (!func_67(uParam3->f_31) && !func_64(uParam3->f_31))
					{
						unk_0x4AFBCBFDE748D4E0(-1, func_399(iParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					else
					{
						unk_0x4AFBCBFDE748D4E0(-1, "Retune_High", "MP_RADIO_SFX", 1);
					}
				}
				bVar0 = true;
				unk_0x872F1C1F8587CCC7(iParam2, 4);
			}
			if (bVar0)
			{
				func_395(iParam1, iParam2, uParam3, 1, iParam2->f_3, 0);
			}
			break;
		
		case 2:
			if (unk_0xC80D31E4B587871C(*iParam2, 4))
			{
				unk_0x0EE72DB1CD8A3B86(iParam2, 4);
			}
			if (!unk_0xC80D31E4B587871C(*iParam2, 6))
			{
				if (iParam1->f_13 == 2)
				{
					if (((func_63(unk_0x9EB17624F44A8DA4()) || func_58(unk_0x9EB17624F44A8DA4())) || func_57(unk_0x9EB17624F44A8DA4())) || func_60(unk_0x9EB17624F44A8DA4(), 0))
					{
						unk_0x4AFBCBFDE748D4E0(-1, "Off_Low", "MP_RADIO_SFX", 1);
					}
					else if (!func_67(uParam3->f_31) && !func_64(uParam3->f_31))
					{
						unk_0x4AFBCBFDE748D4E0(-1, func_394(iParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					else
					{
						unk_0x4AFBCBFDE748D4E0(-1, "Off_High", "MP_RADIO_SFX", 1);
					}
				}
				bVar0 = true;
				unk_0x872F1C1F8587CCC7(iParam2, 6);
			}
			if (bVar0)
			{
				func_395(iParam1, iParam2, uParam3, 0, iParam2->f_3, 0);
			}
			break;
	}
	if (!unk_0xC80D31E4B587871C(*iParam1, 0) && !func_37(unk_0x9EB17624F44A8DA4()))
	{
		switch (func_348(uParam0))
		{
			case 3:
				if (iParam2->f_3 != func_347(uParam0, iParam1))
				{
					iParam2->f_3 = func_347(uParam0, iParam1);
					if (iParam1->f_14 == 3)
					{
						unk_0x4AFBCBFDE748D4E0(-1, func_399(iParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					bVar0 = true;
				}
				if (unk_0xC80D31E4B587871C(*iParam2, 12))
				{
					unk_0x0EE72DB1CD8A3B86(iParam2, 12);
				}
				if (!unk_0xC80D31E4B587871C(*iParam2, 11))
				{
					if (iParam1->f_14 == 3)
					{
						unk_0x4AFBCBFDE748D4E0(-1, func_393(iParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					bVar0 = true;
					unk_0x872F1C1F8587CCC7(iParam2, 11);
					if ((func_38() && !func_392()) && !unk_0x4916190900E76373())
					{
						unk_0xE859EF37EA7362D3("DLC_MPHEIST_LOBBY_FADE_IN_RADIO_SCENE");
					}
				}
				if (bVar0)
				{
					func_395(iParam1, iParam2, uParam3, 1, iParam2->f_3, 1);
				}
				break;
			
			case 4:
				if (unk_0xC80D31E4B587871C(*iParam2, 11))
				{
					unk_0x0EE72DB1CD8A3B86(iParam2, 11);
				}
				if (!unk_0xC80D31E4B587871C(*iParam2, 12))
				{
					if (iParam1->f_14 == 3)
					{
						unk_0x4AFBCBFDE748D4E0(-1, func_394(iParam1, uParam3->f_33), "MP_RADIO_SFX", 1);
					}
					bVar0 = true;
					unk_0x872F1C1F8587CCC7(iParam2, 12);
				}
				if (bVar0)
				{
					func_395(iParam1, iParam2, uParam3, 0, iParam2->f_3, 1);
				}
				break;
			}
	}
	if (func_349(uParam0, iParam1) == 1 || func_348(uParam0) == 3)
	{
		if (iParam2->f_3 != func_347(uParam0, iParam1))
		{
			iParam2->f_3 = func_347(uParam0, iParam1);
		}
	}
	if (unk_0xC80D31E4B587871C(*iParam2, 8))
	{
		if (!unk_0xC80D31E4B587871C(*iParam2, 9))
		{
			unk_0x872F1C1F8587CCC7(iParam2, 9);
			func_395(iParam1, iParam2, uParam3, 1, iParam2->f_3, 0);
		}
	}
	else if (unk_0xC80D31E4B587871C(*iParam2, 9))
	{
		unk_0x0EE72DB1CD8A3B86(iParam2, 9);
	}
	if (func_330(iParam1, iParam2))
	{
		if (!unk_0xC80D31E4B587871C(*iParam2, 10))
		{
			unk_0xE859EF37EA7362D3("MP_APT_STRIPPER_SCENE");
			unk_0x872F1C1F8587CCC7(iParam2, 10);
		}
	}
	else if (unk_0xC80D31E4B587871C(*iParam2, 10))
	{
		unk_0xE02E32C69260FBB7("MP_APT_STRIPPER_SCENE");
		unk_0x0EE72DB1CD8A3B86(iParam2, 10);
	}
}

bool func_392()//Position - 0x244C1
{
	return Global_2447174.f_580;
}

char* func_393(var uParam0, int iParam1)//Position - 0x244D0
{
	if (func_34(unk_0x9EB17624F44A8DA4()))
	{
		return "On_High";
	}
	switch (iParam1)
	{
		case 2:
			if (unk_0xC80D31E4B587871C(*uParam0, 0))
			{
				return "On_Low";
			}
			else
			{
				return "On_Low";
			}
			break;
		
		case 6:
			if (unk_0xC80D31E4B587871C(*uParam0, 0))
			{
				return "On_High";
			}
			else
			{
				return "On_Low";
			}
			break;
		
		case 10:
			if (unk_0xC80D31E4B587871C(*uParam0, 0))
			{
				return "On_Low";
			}
			else
			{
				return "On_High";
			}
			break;
	}
	return "";
}

char* func_394(var uParam0, int iParam1)//Position - 0x24564
{
	if (func_34(unk_0x9EB17624F44A8DA4()))
	{
		return "Off_High";
	}
	switch (iParam1)
	{
		case 2:
			if (unk_0xC80D31E4B587871C(*uParam0, 0))
			{
				return "Off_Low";
			}
			else
			{
				return "Off_Low";
			}
			break;
		
		case 6:
			if (unk_0xC80D31E4B587871C(*uParam0, 0))
			{
				return "Off_High";
			}
			else
			{
				return "Off_Low";
			}
			break;
		
		case 10:
			if (unk_0xC80D31E4B587871C(*uParam0, 0))
			{
				return "Off_Low";
			}
			else
			{
				return "Off_High";
			}
			break;
	}
	return "";
}

void func_395(var uParam0, int iParam1, var uParam2, bool bParam3, var uParam4, bool bParam5)//Position - 0x245F8
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	unk_0x872F1C1F8587CCC7(iParam1, 0);
	if (func_330(uParam0, iParam1))
	{
		sVar1 = "HIDDEN_RADIO_STRIP_CLUB";
		iVar2 = 1;
	}
	else
	{
		sVar1 = unk_0xC45B242943C8D6AD(uParam4);
		iVar2 = bParam3;
	}
	if (bParam5)
	{
	}
	func_398(uParam2);
	if (func_67(uParam2->f_31) && !uParam0->f_12)
	{
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bar", iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11("SE_DLC_APT_Yacht_Bar", sVar1);
		}
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom", iVar2);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom_02", iVar2);
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Bedroom_03", iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11("SE_DLC_APT_Yacht_Bedroom", sVar1);
			unk_0xF90C8EA056948B11("SE_DLC_APT_Yacht_Bedroom_02", sVar1);
			unk_0xF90C8EA056948B11("SE_DLC_APT_Yacht_Bedroom_03", sVar1);
		}
	}
	else if (uParam0->f_12)
	{
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_01", iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11("SE_DLC_APT_Yacht_Exterior_01", sVar1);
		}
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_02", iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11("SE_DLC_APT_Yacht_Exterior_02", sVar1);
		}
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_03", iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11("SE_DLC_APT_Yacht_Exterior_03", sVar1);
		}
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Yacht_Exterior_04", iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11("SE_DLC_APT_Yacht_Exterior_04", sVar1);
		}
	}
	else if (func_66(uParam2->f_31, -1))
	{
		if (func_66(uParam2->f_31, 77))
		{
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_A_Bedroom", iVar2);
			if (bParam3)
			{
				unk_0xF90C8EA056948B11("SE_DLC_APT_Stilts_A_Bedroom", sVar1);
			}
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_A_Heist_Room", iVar2);
			if (bParam3)
			{
				unk_0xF90C8EA056948B11("SE_DLC_APT_Stilts_A_Heist_Room", sVar1);
			}
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_A_Living_Room", iVar2);
			if (bParam3)
			{
				unk_0xF90C8EA056948B11("SE_DLC_APT_Stilts_A_Living_Room", sVar1);
			}
		}
		else if (func_66(uParam2->f_31, 73))
		{
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_B_Bedroom", iVar2);
			if (bParam3)
			{
				unk_0xF90C8EA056948B11("SE_DLC_APT_Stilts_B_Bedroom", sVar1);
			}
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_B_Heist_Room", iVar2);
			if (bParam3)
			{
				unk_0xF90C8EA056948B11("SE_DLC_APT_Stilts_B_Heist_Room", sVar1);
			}
			unk_0xD4BB744A696E8ABF("SE_DLC_APT_Stilts_B_Living_Room", iVar2);
			if (bParam3)
			{
				unk_0xF90C8EA056948B11("SE_DLC_APT_Stilts_B_Living_Room", sVar1);
			}
		}
	}
	else if (func_65(uParam2->f_31))
	{
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Custom_Bedroom", iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11("SE_DLC_APT_Custom_Bedroom", sVar1);
		}
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Custom_Heist_Room", iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11("SE_DLC_APT_Custom_Heist_Room", sVar1);
		}
		unk_0xD4BB744A696E8ABF("SE_DLC_APT_Custom_Living_Room", iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11("SE_DLC_APT_Custom_Living_Room", sVar1);
		}
	}
	else if (func_64(uParam2->f_31))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 0, 0), iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 0, 0), sVar1);
		}
	}
	else if (func_63(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 1, uParam0->f_15, 0, 0, 0, 0), iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 1, 1, uParam0->f_15, 0, 0, 0, 0), sVar1);
		}
	}
	else if (func_59(uParam2->f_31, 0, 0) && !func_385(unk_0x9EB17624F44A8DA4(), 0))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 4, 0, 0, 0, 0, 0, 0), iVar2);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 5, 0, 0, 0, 0, 0, 0), 0);
		func_397(88, 1, 0, 0, 0, 0);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 4, 0, 0, 0, 0, 0, 0), sVar1);
		}
	}
	else if (func_59(uParam2->f_31, 0, 0) && func_385(unk_0x9EB17624F44A8DA4(), 0))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 5, 0, 0, 0, 0, 0, 0), iVar2);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 4, 0, 0, 0, 0, 0, 0), 0);
		func_397(88, 1, 0, 0, 0, 0);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 5, 0, 0, 0, 0, 0, 0), sVar1);
		}
	}
	else if (func_58(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 0, 0, 1, uParam0->f_16, 0, 0), iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 1, 0, 0, 1, uParam0->f_16, 0, 0), sVar1);
		}
	}
	else if (func_57(unk_0x9EB17624F44A8DA4()))
	{
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 1, 0), iVar2);
		if (bParam3)
		{
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 1, 0), sVar1);
		}
	}
	else if (func_37(unk_0x9EB17624F44A8DA4()))
	{
		if (func_374(iParam1->f_698))
		{
			unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 0, 0), iVar2);
			unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 0, 1), iVar2);
		}
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 0), iVar2);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 1), iVar2);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 2), iVar2);
		unk_0xD4BB744A696E8ABF(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 3), iVar2);
		if (bParam3)
		{
			if (func_374(iParam1->f_698))
			{
				unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 0, 0), sVar1);
				unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 1, 0, 0, 0, 0, 0, 1), sVar1);
			}
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 0), sVar1);
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 1), sVar1);
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 2), sVar1);
			unk_0xF90C8EA056948B11(func_45(uParam2->f_31, 2, 0, 0, 0, 0, 0, 3), sVar1);
		}
	}
	else if (func_34(unk_0x9EB17624F44A8DA4()))
	{
		if (!func_55(Global_1595543))
		{
			unk_0xD4BB744A696E8ABF(func_45(-1, -1, 0, 0, 0, 0, 0, 0), iVar2);
		}
		if (!func_56(Global_1595543))
		{
			unk_0xD4BB744A696E8ABF(func_45(-1, -1, 0, 0, 0, 0, 0, 1), iVar2);
		}
		if (bParam3)
		{
			if (!func_55(Global_1595543))
			{
				unk_0xF90C8EA056948B11(func_45(-1, -1, 0, 0, 0, 0, 0, 0), sVar1);
			}
			if (!func_56(Global_1595543))
			{
				unk_0xF90C8EA056948B11(func_45(-1, -1, 0, 0, 0, 0, 0, 1), sVar1);
			}
		}
	}
	if ((((((((((!func_67(uParam2->f_31) && !func_66(uParam2->f_31, -1)) && !func_65(uParam2->f_31)) && !uParam0->f_12) && !func_64(uParam2->f_31)) && !func_63(unk_0x9EB17624F44A8DA4())) && !func_58(unk_0x9EB17624F44A8DA4())) && !func_57(unk_0x9EB17624F44A8DA4())) && !func_37(unk_0x9EB17624F44A8DA4())) && !func_34(unk_0x9EB17624F44A8DA4())) || unk_0xC80D31E4B587871C(*uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < func_398(uParam2))
		{
			if (unk_0xC80D31E4B587871C(*uParam0, 0))
			{
				if (!unk_0xAB019B170BF1309C(func_396(uParam0, uParam2, iVar0)))
				{
					unk_0xD4BB744A696E8ABF(func_396(uParam0, uParam2, iVar0), iVar2);
					if (bParam3)
					{
						unk_0xF90C8EA056948B11(func_396(uParam0, uParam2, iVar0), sVar1);
					}
				}
			}
			else if (bParam5 == 1 && iVar0 == 2)
			{
				if (!unk_0xAB019B170BF1309C(func_396(uParam0, uParam2, iVar0)))
				{
					unk_0xD4BB744A696E8ABF(func_396(uParam0, uParam2, iVar0), iVar2);
					if (bParam3)
					{
						unk_0xF90C8EA056948B11(func_396(uParam0, uParam2, iVar0), sVar1);
					}
				}
			}
			else if (bParam5 == 0 && iVar0 != 2)
			{
				if (!unk_0xAB019B170BF1309C(func_396(uParam0, uParam2, iVar0)))
				{
					unk_0xD4BB744A696E8ABF(func_396(uParam0, uParam2, iVar0), iVar2);
					if (bParam3)
					{
						unk_0xF90C8EA056948B11(func_396(uParam0, uParam2, iVar0), sVar1);
					}
				}
			}
			iVar0++;
		}
	}
}

char* func_396(var uParam0, var uParam1, int iParam2)//Position - 0x24D30
{
	if (unk_0xC80D31E4B587871C(*uParam0, 0))
	{
		return func_389(uParam1->f_33);
	}
	else
	{
		return func_388(uParam1->f_33, uParam1->f_31, iParam2);
	}
	return "";
}

void func_397(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x24D66
{
	char* sVar0;
	
	sVar0 = "";
	if (func_51(iParam0) == 88)
	{
		unk_0xD4BB744A696E8ABF("SE_ex_int_office_01a_Radio_01", 0);
		unk_0xD4BB744A696E8ABF("SE_ex_int_office_01b_Radio_01", 0);
		unk_0xD4BB744A696E8ABF("SE_ex_int_office_01c_Radio_01", 0);
		unk_0xD4BB744A696E8ABF("SE_ex_int_office_02a_Radio_01", 0);
		unk_0xD4BB744A696E8ABF("SE_ex_int_office_02b_Radio_01", 0);
		unk_0xD4BB744A696E8ABF("SE_ex_int_office_02c_Radio_01", 0);
		unk_0xD4BB744A696E8ABF("SE_ex_int_office_03a_Radio_01", 0);
		unk_0xD4BB744A696E8ABF("SE_ex_int_office_03b_Radio_01", 0);
		unk_0xD4BB744A696E8ABF("SE_ex_int_office_03c_Radio_01", 0);
		return;
	}
	sVar0 = func_45(iParam0, iParam1, bParam2, iParam3, bParam4, iParam5, 0, 0);
	if (!unk_0xAB019B170BF1309C(sVar0))
	{
		unk_0xD4BB744A696E8ABF(sVar0, 0);
	}
}

int func_398(var uParam0)//Position - 0x24DF8
{
	if (func_359(uParam0->f_31))
	{
		return 3;
	}
	else if (uParam0->f_33 == 10)
	{
		return 3;
	}
	return 1;
}

char* func_399(var uParam0, int iParam1)//Position - 0x24E20
{
	if (func_34(unk_0x9EB17624F44A8DA4()))
	{
		return "Retune_High";
	}
	switch (iParam1)
	{
		case 2:
			if (unk_0xC80D31E4B587871C(*uParam0, 0))
			{
				return "Retune_Low";
			}
			else
			{
				return "Retune_Low";
			}
			break;
		
		case 6:
			if (unk_0xC80D31E4B587871C(*uParam0, 0))
			{
				return "Retune_High";
			}
			else
			{
				return "Retune_Low";
			}
			break;
		
		case 10:
			if (unk_0xC80D31E4B587871C(*uParam0, 0))
			{
				return "Retune_Low";
			}
			else
			{
				return "Retune_High";
			}
			break;
	}
	return "";
}

int func_400(int iParam0)//Position - 0x24EB4
{
	if (Global_1595543 == func_36())
	{
		return 0;
	}
	if (!func_56(Global_1595543))
	{
		if (!unk_0x6ADD12BF4D6D2587(iParam0->f_702))
		{
			iParam0->f_702 = unk_0xCBD07018689DF383(360,5515f, 4840,098f, -58,911f, 0,1f, joaat("v_res_fh_speakerdock"), 0, 0, 0);
			if (unk_0x6ADD12BF4D6D2587(iParam0->f_702))
			{
				unk_0x4A3AC662F0E3AD0B("se_xm_int_02_lounge_radio", iParam0->f_702);
			}
		}
	}
	if (!func_55(Global_1595543))
	{
		if (!unk_0x6ADD12BF4D6D2587(iParam0->f_701))
		{
			if (func_11(joaat("v_res_fh_speakerdock")))
			{
				if (unk_0xF51EA69EE19061E6(0, 0, 1, 0))
				{
					iParam0->f_701 = unk_0x9A331BBF019DCAD2(joaat("v_res_fh_speakerdock"), 363,9f, 4827,32f, -58,912f, 0, false, 0);
					unk_0x59AF3B40AE222194(iParam0->f_701, 0f, 0f, 0f, 2, 1);
					unk_0x4A3AC662F0E3AD0B("se_xm_int_02_bedroom_radio", iParam0->f_701);
				}
			}
		}
	}
	if (!func_55(Global_1595543) && !func_56(Global_1595543))
	{
		return (unk_0x6ADD12BF4D6D2587(iParam0->f_702) && unk_0x6ADD12BF4D6D2587(iParam0->f_701));
	}
	if (!func_56(Global_1595543))
	{
		return unk_0x6ADD12BF4D6D2587(iParam0->f_702);
	}
	if (!func_55(Global_1595543))
	{
		return unk_0x6ADD12BF4D6D2587(iParam0->f_701);
	}
	return 0;
}

void func_401(var uParam0)//Position - 0x24FF2
{
	if (Global_1595543 == func_36())
	{
		return;
	}
	if ((func_34(unk_0x9EB17624F44A8DA4()) && unk_0x9EB17624F44A8DA4() == Global_1595543) && uParam0->f_50 == 1)
	{
		func_402(18159, 1, -1, 1);
	}
}

int func_402(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x25037
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_96();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(iVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_403(bool bParam0)//Position - 0x25503
{
	Global_1669535.f_17 = bParam0;
	if (bParam0)
	{
		unk_0xF6A03465FF2E4928(0);
	}
}

void func_404(int iParam0)//Position - 0x2551D
{
	Local_927.f_1 = iParam0;
}

void func_405(bool bParam0, bool bParam1)//Position - 0x2552C
{
	Global_1669535.f_18 = bParam0;
	if (!bParam0)
	{
		if (bParam1)
		{
			Global_1669535.f_27 = 0;
		}
	}
}

bool func_406()//Position - 0x2554E
{
	return Global_1669535.f_27;
}

int func_407()//Position - 0x2555C
{
	if (!func_406())
	{
		return 0;
	}
	if (!unk_0xC80D31E4B587871C(Local_927, 0))
	{
		if (Local_927.f_55 == unk_0x9EB17624F44A8DA4())
		{
			func_409(0, 0, 1, 0, 1, 0, 0);
		}
		unk_0x872F1C1F8587CCC7(&Local_927, 0);
	}
	if (unk_0xC80D31E4B587871C(Local_927, 0))
	{
		if (unk_0x918CA1BFFAA03556(Local_297.f_352[Local_927.f_51]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()) && unk_0xB8DE76287EDC4957(unk_0xF32FBF2453AC1753(Local_297.f_352[Local_927.f_51]), 0))
			{
				if (func_408(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_297.f_352[Local_927.f_51]), 0))
				{
					return 1;
				}
				else if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -1794415470) != 1 && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -1794415470) != 0)
				{
					unk_0xBB0358802AA14401(unk_0xFC1458A37D98B502(), unk_0xF32FBF2453AC1753(Local_297.f_352[Local_927.f_51]), Global_1669522);
				}
			}
		}
	}
	return 0;
}

int func_408(int iParam0, int iParam1, int iParam2)//Position - 0x25649
{
	if (unk_0x6ADD12BF4D6D2587(iParam0) && !unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0x6ADD12BF4D6D2587(iParam1) && !unk_0x191BE1BC8F26F3C1(iParam1, 0))
		{
			if (unk_0xA8D0477084E86A92(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_409(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x2568F
{
	if (func_414() < 0 && Global_1678582)
	{
		return;
	}
	if (func_413(35))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_412(2);
	}
	else
	{
		func_412(1);
	}
	if (bParam1)
	{
		func_412(11);
	}
	if (bParam2)
	{
		func_412(32);
		if (bParam3)
		{
			if (func_414() >= 0 && unk_0xC80D31E4B587871C(Global_1320310[func_414() /*141*/].f_102, 0))
			{
				func_412(33);
			}
		}
		else
		{
			func_411(33);
		}
		if (func_414() >= 0)
		{
			if (func_410(Global_1320310[func_414() /*141*/].f_66))
			{
				func_412(40);
			}
		}
	}
	else if (bParam5)
	{
		func_412(37);
	}
	if (bParam4)
	{
		func_412(36);
	}
	if (func_413(36))
	{
		if (func_413(2))
		{
			func_411(36);
		}
	}
	if (bParam6)
	{
		func_412(38);
	}
	if (unk_0x3A711520F83BAE98())
	{
		Global_2512808.f_372 = unk_0xD1952A425B78FFC0();
	}
}

int func_410(int iParam0)//Position - 0x25784
{
	if (iParam0 == -1881846085)
	{
		return 1;
	}
	return 0;
}

void func_411(int iParam0)//Position - 0x2579B
{
	if (iParam0 < 32)
	{
		if (unk_0xC80D31E4B587871C(Global_2436181.f_502.f_1, iParam0))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2436181.f_502.f_1), iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2436181.f_502.f_2, (iParam0 - 32)))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2436181.f_502.f_2), (iParam0 - 32));
	}
}

void func_412(int iParam0)//Position - 0x257F5
{
	if (iParam0 < 32)
	{
		if (!unk_0xC80D31E4B587871C(Global_2436181.f_502.f_1, iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_502.f_1), iParam0);
		}
	}
	else if (!unk_0xC80D31E4B587871C(Global_2436181.f_502.f_2, (iParam0 - 32)))
	{
		unk_0x872F1C1F8587CCC7(&(Global_2436181.f_502.f_2), (iParam0 - 32));
	}
}

bool func_413(int iParam0)//Position - 0x25851
{
	if (iParam0 < 32)
	{
		return unk_0xC80D31E4B587871C(Global_2436181.f_502.f_1, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2436181.f_502.f_2, (iParam0 - 32));
}

int func_414()//Position - 0x25887
{
	return Global_2097152[func_173() /*12130*/].f_7676.f_2;
}

bool func_415(var uParam0)//Position - 0x2589F
{
	return unk_0xC80D31E4B587871C(uParam0->f_6, 0);
}

void func_416()//Position - 0x258B0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	
	if (func_435(unk_0x9EB17624F44A8DA4(), 1))
	{
		iVar1 = func_434();
	}
	else if (func_433(unk_0x9EB17624F44A8DA4()))
	{
		iVar1 = unk_0x98EC0789D9F0703B();
	}
	iVar0 = Global_1595693[iVar1 /*680*/].f_266.f_111.f_1;
	if (Local_927.f_9[Local_927.f_8] != Local_297.f_267[Local_927.f_8])
	{
		if (Local_297.f_267[Local_927.f_8] > 0 && Local_297.f_267[Local_927.f_8] < 97)
		{
			iVar4 = Local_297.f_267[Local_927.f_8];
			bVar2 = func_432(Local_927.f_8);
			bVar3 = func_431(Local_927.f_8);
			if (func_428(iVar4, Local_927.f_8, bVar2, bVar3))
			{
				func_427();
			}
		}
		else if (Local_297.f_267[Local_927.f_8] >= 0 + 1000 && Local_297.f_267[Local_927.f_8] <= 97 + 1000)
		{
			bVar5 = func_432(Local_927.f_8);
			bVar6 = func_431(Local_927.f_8);
			if (func_418(Local_297.f_267[Local_927.f_8], Local_927.f_8, bVar5, bVar6))
			{
				func_427();
			}
		}
		else
		{
			if (Local_297.f_267[Local_927.f_8] == 0)
			{
				func_300(Local_927.f_8);
				func_417(Local_927.f_8);
			}
			func_427();
		}
	}
	else
	{
		func_427();
	}
	if (Global_1669519 == iVar0)
	{
		Global_1669518 = 1;
	}
}

int func_417(int iParam0)//Position - 0x25A16
{
	int iVar0;
	
	iVar0 = Local_927.f_545.f_164[iParam0];
	if (unk_0x6ADD12BF4D6D2587(iVar0) && unk_0xA0BF73C5030D3F60(iVar0))
	{
		unk_0x452336926718D62A(&iVar0);
		Local_927.f_545.f_164[iParam0] = 0;
		return 1;
	}
	return 0;
}

int func_418(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x25A58
{
	switch (Local_927.f_50)
	{
		case 0:
			if (bParam3 && bParam2)
			{
				Local_927.f_50 = 1;
			}
			else if (!bParam3)
			{
				func_425(iParam1, 0);
				if (Local_927.f_545.f_246[iParam1] == 0)
				{
					Local_927.f_50 = 1;
				}
			}
			else if (!bParam2)
			{
				func_299(iParam1, 0, 1);
				if (Local_927.f_545.f_82[iParam1] == 0)
				{
					Local_927.f_50 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_424(iParam1))
			{
				if (func_419(iParam0, iParam1, Local_927.f_53, 1))
				{
					Local_927.f_50 = 2;
				}
			}
			break;
		
		case 2:
			if (Local_927.f_53)
			{
				func_425(iParam1, 1);
				if (Local_927.f_545.f_246[iParam1] == 1)
				{
					Local_927.f_50 = 0;
					return 1;
				}
			}
			else
			{
				Local_927.f_50 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_419(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x25B3C
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	vVar0 = { func_319(Local_297.f_308[iParam1]) };
	vVar1 = { func_423(Local_297.f_308[iParam1]) };
	bVar3 = false;
	if (iParam0 <= 0 + 1000 || iParam0 >= 97 + 1000)
	{
		iVar2 = 1171954070;
	}
	else
	{
		iVar2 = func_421(iParam0);
	}
	if (func_431(iParam1))
	{
		if (unk_0x3B0047CED068C463(iVar2))
		{
			unk_0x6FF834D85E2DD4C6(iVar2);
			if (unk_0x9A0B2ED5055D3F0B(iVar2))
			{
				iVar4 = unk_0x5E35CF35E65D69B9(iVar2, vVar0, 0, false, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar4))
				{
					unk_0x59AF3B40AE222194(iVar4, vVar1, 2, 1);
					if (func_420(iParam1))
					{
						if (unk_0x9BCF64CDF59129DE(iVar4, -898844432))
						{
							unk_0xEDC33A771FAEB393(iVar4, bParam3);
						}
						else
						{
							bVar3 = true;
						}
					}
					else if (unk_0x9BCF64CDF59129DE(iVar4, 1418193004))
					{
						unk_0xEDC33A771FAEB393(iVar4, bParam3);
					}
					else
					{
						bVar3 = true;
					}
					if (bVar3)
					{
						unk_0xBD8D47FDC6902B2D(iVar4, func_319(iParam1), 1, 0, 0, 1);
						unk_0x59AF3B40AE222194(iVar4, func_423(iParam1), 2, 1);
						bVar3 = false;
					}
					Local_927.f_545.f_164[iParam1] = iVar4;
					iVar5 = unk_0x63A6486593EC7EC3(0, 4);
					unk_0x1FDB61334B28882B(iVar4, iVar5);
					if (bParam2)
					{
						unk_0xCFA0B475EBE9E2B7(iVar4, 0, 0);
					}
					else
					{
						unk_0x14776E43F90DD454(iVar2);
						Local_927.f_545.f_246[iParam1] = 1;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_420(int iParam0)//Position - 0x25C8A
{
	switch (iParam0)
	{
		case 14:
		case 19:
		case 20:
		case 21:
		case 22:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			return 1;
		
		default:
	}
	return 0;
}

int func_421(int iParam0)//Position - 0x25CEC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 - 1000);
	iVar2 = iVar0;
	iVar3 = func_422(iVar2);
	switch (iVar3)
	{
		case joaat("cheetah"):
		case joaat("entityxf"):
		case joaat("fmj"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("osiris"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("reaper"):
		case joaat("seven70"):
		case joaat("sheava"):
		case joaat("t20"):
		case joaat("turismor"):
		case joaat("tyrus"):
		case joaat("zentorno"):
			iVar1 = 1171954070;
			break;
		
		case joaat("bestiagts"):
		case joaat("feltzer2"):
		case joaat("omnis"):
		case joaat("sultanrs"):
		case joaat("verlierer2"):
			iVar1 = -239044249;
			break;
		
		case joaat("nightshade"):
		case joaat("sabregt2"):
		case joaat("tampa"):
			iVar1 = -2063295939;
			break;
		
		case joaat("banshee2"):
		case joaat("coquette2"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("mamba"):
		case joaat("tropos"):
			iVar1 = 726001049;
			break;
		
		case joaat("btype3"):
			iVar1 = -556906753;
			break;
		
		case joaat("alpha"):
		case joaat("ztype"):
			iVar1 = -758434067;
			break;
		
		default:
			iVar1 = 1171954070;
			break;
	}
	return iVar1;
}

int func_422(int iParam0)//Position - 0x25E17
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return joaat("prototipo");
		
		case 4:
		case 5:
		case 6:
			return joaat("tyrus");
		
		case 7:
		case 8:
		case 9:
			return joaat("bestiagts");
		
		case 10:
		case 11:
		case 12:
			return joaat("t20");
		
		case 13:
		case 14:
		case 15:
			return joaat("sheava");
		
		case 16:
		case 17:
		case 18:
			return joaat("osiris");
		
		case 19:
		case 20:
		case 21:
			return joaat("fmj");
		
		case 22:
		case 23:
		case 24:
			return joaat("reaper");
		
		case 25:
		case 26:
		case 27:
			return joaat("pfister811");
		
		case 28:
		case 29:
		case 30:
			return joaat("alpha");
		
		case 31:
		case 32:
		case 33:
			return joaat("mamba");
		
		case 34:
		case 35:
		case 36:
			return joaat("tampa");
		
		case 37:
		case 38:
		case 39:
			return joaat("btype3");
		
		case 40:
		case 41:
		case 42:
			return joaat("feltzer3");
		
		case 43:
		case 44:
		case 45:
			return joaat("ztype");
		
		case 46:
		case 47:
		case 48:
			return joaat("tropos");
		
		case 49:
		case 50:
		case 51:
			return joaat("entityxf");
		
		case 52:
		case 53:
		case 54:
			return joaat("sultanrs");
		
		case 55:
		case 56:
		case 57:
			return joaat("zentorno");
		
		case 58:
		case 59:
		case 60:
			return joaat("omnis");
		
		case 61:
		case 62:
		case 63:
			return joaat("coquette3");
		
		case 64:
		case 65:
		case 66:
			return joaat("seven70");
		
		case 67:
		case 68:
		case 69:
			return joaat("verlierer2");
		
		case 70:
		case 71:
		case 72:
			return joaat("feltzer2");
		
		case 73:
		case 74:
		case 75:
			return joaat("coquette2");
		
		case 76:
		case 77:
		case 78:
			return joaat("cheetah");
		
		case 79:
		case 80:
		case 81:
			return joaat("nightshade");
		
		case 82:
		case 83:
		case 84:
			return joaat("banshee2");
		
		case 85:
		case 86:
		case 87:
			return joaat("turismor");
		
		case 88:
		case 89:
		case 90:
			return joaat("massacro");
		
		case 91:
		case 92:
		case 93:
			return joaat("sabregt2");
		
		case 94:
		case 95:
		case 96:
			return joaat("jester");
		
		default:
	}
	return 0;
}

Vector3 func_423(int iParam0)//Position - 0x26167
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 1:
			vVar0 = { 0f, 0f, 0f };
			break;
		
		case 2:
			vVar0 = { 0f, 0f, 230f };
			break;
		
		case 3:
			vVar0 = { 0f, 0f, 0f };
			break;
		
		case 4:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 5:
			vVar0 = { 0f, 0f, 0f };
			break;
		
		case 6:
			vVar0 = { 0f, 0f, 270f };
			break;
		
		case 7:
			vVar0 = { 0f, 0f, 90f };
			break;
		
		case 8:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 9:
			vVar0 = { 0f, 0f, 90f };
			break;
		
		case 10:
			vVar0 = { 0f, 0f, 270f };
			break;
		
		case 11:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 12:
			vVar0 = { 0f, 0f, 65f };
			break;
		
		case 13:
			vVar0 = { 0f, 0f, 180f };
			break;
		
		case 14:
			vVar0 = { 0f, 0f, -90f };
			break;
		
		case 29:
			vVar0 = { 0f, 0f, -90f };
			break;
		
		case 30:
			vVar0 = { 0f, 0f, -90f };
			break;
		
		case 31:
			vVar0 = { 0f, 0f, -90f };
			break;
		
		case 38:
			vVar0 = { 0f, 0f, -90f };
			break;
		
		case 39:
			vVar0 = { 0f, 0f, -90f };
			break;
	}
	return vVar0;
}

int func_424(int iParam0)//Position - 0x262FE
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	vVar0 = { func_319(Local_297.f_308[iParam0]) };
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if (func_816(iVar2, 1, 1))
			{
				if (func_154(func_362(iVar2), vVar0, 2,5f, 0))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_425(int iParam0, bool bParam1)//Position - 0x2636D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_426(iParam0);
	if (unk_0x8E0AF3533D0F22BA(unk_0xD1952A425B78FFC0(), Local_927.f_545.f_287[iParam0]))
	{
		iVar0 = Local_927.f_545.f_164[iParam0];
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			iVar1 = unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), Local_927.f_545.f_287[iParam0]));
			iVar2 = system::round(((system::to_float(iVar1) / 1000f) * 255f));
			if (bParam1)
			{
				iVar2 = (255 - system::round(((system::to_float(iVar1) / 1000f) * 255f)));
			}
			unk_0xCFA0B475EBE9E2B7(iVar0, iVar2, 0);
		}
	}
	else
	{
		iVar3 = Local_927.f_545.f_164[iParam0];
		if (unk_0x6ADD12BF4D6D2587(iVar3))
		{
			if (bParam1)
			{
				unk_0xCFA0B475EBE9E2B7(iVar3, 255, 0);
				if (unk_0x3B0047CED068C463(unk_0x82FF3DFBC3965CC0(iVar3)))
				{
					unk_0x14776E43F90DD454(unk_0x82FF3DFBC3965CC0(iVar3));
				}
				Local_927.f_545.f_246[iParam0] = 1;
			}
			else
			{
				unk_0xCFA0B475EBE9E2B7(iVar3, 0, 0);
				if (unk_0xA0BF73C5030D3F60(iVar3))
				{
					func_300(iParam0);
				}
				Local_927.f_545.f_246[iParam0] = 0;
			}
		}
		else if (bParam1)
		{
			Local_927.f_545.f_246[iParam0] = 1;
		}
		else
		{
			Local_927.f_545.f_246[iParam0] = 0;
		}
		Local_927.f_545.f_205[iParam0] = 0;
	}
}

void func_426(int iParam0)//Position - 0x264AC
{
	if (Local_927.f_545.f_205[iParam0] == 0)
	{
		Local_927.f_545.f_287[iParam0] = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 1000);
		Local_927.f_545.f_205[iParam0] = 1;
	}
}

void func_427()//Position - 0x264E9
{
	if (Local_927.f_8 < 40)
	{
		Local_927.f_9[Local_927.f_8] = Local_297.f_267[Local_927.f_8];
	}
	if (Local_927.f_8 >= 39)
	{
		Local_927.f_53 = 0;
		Local_927.f_54 = 0;
		Local_927.f_8 = 0;
		if (unk_0x8E1421E2A2A2FBD4())
		{
			Local_297.f_351 = 0;
		}
	}
	else
	{
		Global_1669519++;
		Local_927.f_8++;
	}
}

int func_428(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x26557
{
	switch (Local_927.f_50)
	{
		case 0:
			if (bParam2 && bParam3)
			{
				Local_927.f_50 = 1;
			}
			else if (!bParam2)
			{
				func_299(iParam1, 0, 1);
				if (Local_927.f_545.f_82[iParam1] == 0)
				{
					Local_927.f_50 = 1;
				}
			}
			else if (!bParam3)
			{
				func_425(iParam1, 0);
				if (Local_927.f_545.f_246[iParam1] == 0)
				{
					Local_927.f_50 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_424(iParam1))
			{
				if (func_429(iParam0, iParam1, Local_927.f_53, 1))
				{
					Local_927.f_50 = 2;
				}
			}
			break;
		
		case 2:
			if (Local_927.f_53)
			{
				func_299(iParam1, 1, 1);
				if (Local_927.f_545.f_82[iParam1] == 1)
				{
					Local_927.f_50 = 0;
					return 1;
				}
			}
			else
			{
				Local_927.f_50 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_429(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2663C
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar0 = { func_319(Local_297.f_308[iParam1]) };
	vVar1 = { func_423(Local_297.f_308[iParam1]) };
	if (func_432(iParam1))
	{
		iVar2 = func_430(iParam0, vVar0, 0, 0, 0);
		if (unk_0x6ADD12BF4D6D2587(iVar2))
		{
			unk_0xBD8D47FDC6902B2D(iVar2, func_319(iParam1), 1, 0, 0, 1);
			unk_0x59AF3B40AE222194(iVar2, vVar1, 2, 1);
			unk_0x4BEFCD5DAE410A90(iVar2, 2);
			unk_0xEDC33A771FAEB393(iVar2, bParam3);
			Local_927.f_545[iParam1] = iVar2;
			if (bParam2)
			{
				unk_0xCFA0B475EBE9E2B7(iVar2, 0, 0);
			}
			else
			{
				Local_927.f_545.f_82[iParam1] = 1;
			}
			return 1;
		}
	}
	return 0;
}

int func_430(int iParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4)//Position - 0x266E2
{
	struct<101> Var0;
	int iVar1;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	func_314(iParam0, &Var0);
	unk_0x6FF834D85E2DD4C6(Var0.f_66);
	if (unk_0x9A0B2ED5055D3F0B(Var0.f_66))
	{
		iVar1 = unk_0xEA60F3B426BB095B(Var0.f_66, vParam1, fParam2, iParam3, iParam4, 0);
		func_89(iVar1, &Var0, 1, 1, 0);
	}
	return iVar1;
}

bool func_431(int iParam0)//Position - 0x2675E
{
	return Local_927.f_545.f_164[iParam0] == 0;
}

bool func_432(int iParam0)//Position - 0x26774
{
	return Local_927.f_545[iParam0] == 0;
}

bool func_433(int iParam0)//Position - 0x26788
{
	return func_282(iParam0) != 0;
}

int func_434()//Position - 0x26798
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

bool func_435(int iParam0, bool bParam1)//Position - 0x267AD
{
	if (!bParam1)
	{
		if (func_436(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_36();
}

int func_436(int iParam0)//Position - 0x267D8
{
	if (iParam0 != func_36())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_36())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_437(int iParam0)//Position - 0x2680D
{
	return Local_927.f_1 == iParam0;
}

void func_438()//Position - 0x2681D
{
	bool bVar0;
	bool bVar1;
	
	if (func_437(7))
	{
		return;
	}
	if (Global_2405047.f_2640 || unk_0xC80D31E4B587871C(Global_1669535, 27))
	{
		return;
	}
	if (func_449())
	{
		if (!func_448() && func_437(0))
		{
			bVar0 = true;
		}
	}
	else if (func_437(1))
	{
		if ((((!func_447() && !func_252()) && !unk_0x3E9CABD07B829173()) && !unk_0x0DBDCC9C5537E157()) && !func_446())
		{
			if (func_445())
			{
				bVar0 = (unk_0x4B64A8D052027742() % 60) == false;
			}
			else if (func_444(0))
			{
				bVar0 = func_442();
			}
		}
		if (func_441())
		{
			if (Local_924[unk_0x9EB17624F44A8DA4() /*24*/].f_1.f_13 != 0)
			{
				func_17(&(Local_924[unk_0x9EB17624F44A8DA4() /*24*/].f_1), &Local_796);
				if (func_440())
				{
					func_30();
				}
			}
		}
	}
	if (bVar0)
	{
		if (Local_927.f_883 == 0)
		{
			if (func_445() || Local_927.f_55 == unk_0x9EB17624F44A8DA4())
			{
				bVar1 = func_439();
				if (!bVar1)
				{
					Local_927.f_882 = 1;
					unk_0x872F1C1F8587CCC7(&(Local_924[unk_0x622FF3AE4B1D07C3() /*24*/]), 0);
					if (func_437(1))
					{
						if (!unk_0xC80D31E4B587871C(Local_927, 1))
						{
							unk_0x872F1C1F8587CCC7(&Local_927, 1);
						}
					}
				}
			}
			else if (func_444(0))
			{
				if (func_442())
				{
					Local_927.f_882 = 1;
					if (func_437(1))
					{
						if (!unk_0xC80D31E4B587871C(Local_927, 1))
						{
							unk_0x872F1C1F8587CCC7(&Local_927, 1);
						}
					}
				}
			}
		}
		else if (Local_927.f_882)
		{
			Local_927.f_882 = 0;
		}
	}
}

int func_439()//Position - 0x269AA
{
	int iVar0;
	
	iVar0 = Global_1368207[func_101(-1)];
	if (unk_0xC80D31E4B587871C(iVar0, 26))
	{
		return 1;
	}
	return 0;
}

bool func_440()//Position - 0x269CF
{
	return Global_2436181.f_1040.f_10;
}

bool func_441()//Position - 0x269E0
{
	return Global_1669535.f_28;
}

int func_442()//Position - 0x269EE
{
	int iVar0;
	
	iVar0 = func_443();
	if (iVar0 > -1)
	{
		if (func_435(unk_0x9EB17624F44A8DA4(), 0))
		{
			return unk_0xC80D31E4B587871C(Local_924[iVar0 /*24*/], 0);
		}
	}
	return 0;
}

int func_443()//Position - 0x26A1E
{
	int iVar0;
	
	if (func_445())
	{
		return unk_0x622FF3AE4B1D07C3();
	}
	if (func_435(unk_0x9EB17624F44A8DA4(), 0))
	{
		iVar0 = func_434();
		if (unk_0x552F39AE86E07792(iVar0))
		{
			if (unk_0xDE597476C8B96D1A(iVar0))
			{
				return unk_0x87678BB8392EFD41(iVar0);
			}
		}
	}
	return -1;
}

bool func_444(bool bParam0)//Position - 0x26A62
{
	return func_435(unk_0x9EB17624F44A8DA4(), bParam0);
}

bool func_445()//Position - 0x26A74
{
	return func_436(unk_0x9EB17624F44A8DA4());
}

bool func_446()//Position - 0x26A84
{
	if ((!unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()) || unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0)) || !func_445())
	{
		return 0;
	}
	return unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 964,4573f, -3003,586f, -39,63488f, 1f, 1f, 1f, 0, 1, 0);
}

int func_447()//Position - 0x26AD3
{
	if (func_441())
	{
		return Global_1669535.f_29 == 0;
	}
	return 0;
}

bool func_448()//Position - 0x26AEE
{
	return Global_1669535.f_21;
}

int func_449()//Position - 0x26AFC
{
	if (func_441())
	{
		return Global_1669535.f_29 == 1;
	}
	return 0;
}

int func_450()//Position - 0x26B17
{
	vector3 vVar0;
	
	if (func_57(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_1669241 == 1)
		{
			if (!func_193(&(Local_927.f_543)))
			{
				func_192(&(Local_927.f_543), 0, 0);
			}
			else if (func_187(&(Local_927.f_543), 8000, 0))
			{
				Global_1669241 = 0;
				func_73(&(Local_927.f_543));
			}
		}
		if (!unk_0xC80D31E4B587871C(Local_927.f_6, 0))
		{
			Local_927.f_324 = "carmod_shop";
			unk_0xD9E2C360120FEB7C(Local_927.f_324);
			if ((unk_0x3B6F9DF9C5FEB3A4(Local_927.f_324) && !unk_0x8F05914DD835E69F(Local_927.f_542)) && !Global_1669241)
			{
				Global_1669243 = Local_927.f_4 + 69;
				if (unk_0x8F38E94BBF3404CD(unk_0x8B948C59217A295D(Local_927.f_324)) < 1)
				{
					if (!unk_0xA357031C5C05DD94(Local_927.f_324, Global_1669243, 1, 0))
					{
						vVar0.y = 0;
						vVar0.x = 45;
						vVar0.z = 3;
						Global_94374 = vVar0.z;
						Local_927.f_542 = system::start_new_script_with_args(Local_927.f_324, &vVar0, 3, 3072);
						unk_0x9D2418D7FC697249(Local_927.f_324);
						unk_0x872F1C1F8587CCC7(&(Local_927.f_6), 0);
						Global_92885.f_18[45] = 1;
						Global_92885.f_67[45] = unk_0x3A711520F83BAE98();
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_451()//Position - 0x26C55
{
	if (func_454())
	{
		if (func_434() != func_36())
		{
			if (func_453(func_434()))
			{
				func_452();
			}
		}
	}
}

void func_452()//Position - 0x26C7E
{
	if (!func_441())
	{
		Global_1669535.f_1897 = 1;
	}
}

bool func_453(int iParam0)//Position - 0x26C96
{
	if (iParam0 == func_36())
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 19);
}

bool func_454()//Position - 0x26CBC
{
	return unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_210, 23);
}

void func_455()//Position - 0x26CD7
{
	func_456(&(Local_927.f_331));
}

void func_456(var uParam0)//Position - 0x26CE9
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	
	if (func_270(0, uParam0))
	{
		if (uParam0->f_24 != 0)
		{
			unk_0x6FF834D85E2DD4C6(uParam0->f_24);
		}
		if (uParam0->f_32 != 0)
		{
			unk_0x6FF834D85E2DD4C6(uParam0->f_32);
		}
		func_269(1, uParam0);
	}
	else if (func_270(1, uParam0))
	{
		if (uParam0->f_24 == 0 && uParam0->f_32 == 0)
		{
			func_269(3, uParam0);
			return;
		}
		if (uParam0->f_24 != 0 && !unk_0x9A0B2ED5055D3F0B(uParam0->f_24))
		{
			return;
		}
		if (uParam0->f_32 != 0 && !unk_0x9A0B2ED5055D3F0B(uParam0->f_32))
		{
			return;
		}
		bVar0 = false;
		bVar1 = false;
		if (uParam0->f_24 != 0)
		{
			uParam0->f_31 = unk_0x9A331BBF019DCAD2(uParam0->f_24, uParam0->f_25, 0, false, 1);
			unk_0x59AF3B40AE222194(uParam0->f_31, uParam0->f_28, 2, 1);
			unk_0xEDC33A771FAEB393(uParam0->f_31, true);
			bVar0 = true;
		}
		if (uParam0->f_32 != 0)
		{
			uParam0->f_39 = unk_0x9A331BBF019DCAD2(uParam0->f_32, uParam0->f_33, 0, false, 1);
			unk_0x59AF3B40AE222194(uParam0->f_39, uParam0->f_36, 2, 1);
			unk_0xEDC33A771FAEB393(uParam0->f_39, true);
			bVar1 = true;
		}
		if (bVar0)
		{
			unk_0x14776E43F90DD454(uParam0->f_24);
		}
		if (bVar1)
		{
			unk_0x14776E43F90DD454(uParam0->f_32);
		}
		func_269(3, uParam0);
	}
	else if (func_270(3, uParam0))
	{
	}
	else if (func_270(2, uParam0))
	{
		if (unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			func_269(7, uParam0);
			return;
		}
		if ((unk_0x3A801AA34DD821BE(uParam0->f_3) && unk_0x6ADD12BF4D6D2587(uParam0->f_2)) && !unk_0x191BE1BC8F26F3C1(uParam0->f_2, 0))
		{
			if (unk_0xF0D051E82D0DB8C2(uParam0->f_2))
			{
				unk_0xF7EE0D57630D91D1(0, true);
				func_253(1, 1);
				func_234(1, 1, 1, 0);
				func_457(uParam0);
				unk_0xEDC33A771FAEB393(uParam0->f_2, false);
				uParam0->f_13 = unk_0x8383F9C605E523B7(uParam0->f_14, uParam0->f_17, 2);
				unk_0x8E628F774C748D93(uParam0->f_2, uParam0->f_13, uParam0->f_3, uParam0->f_4, 1000f, -1000f, 4, 0, 1148846080, 0);
				unk_0x0ADADE14A7CF26EF(uParam0->f_13, uParam0->f_20);
				func_269(4, uParam0);
			}
		}
	}
	else if (func_270(4, uParam0))
	{
		if (unk_0xD56F740235B1E8F0(uParam0->f_13))
		{
			uParam0->f_22 = unk_0x463C4747B41E35A3(uParam0->f_13);
			if (!unk_0xAB019B170BF1309C(uParam0->f_56))
			{
				iVar2 = 0;
				while (iVar2 < 2)
				{
					if ((!unk_0xC80D31E4B587871C(uParam0->f_48, iVar2) && !unk_0xAB019B170BF1309C(uParam0->f_50[iVar2])) && uParam0->f_22 >= uParam0->f_53[iVar2])
					{
						if (!unk_0x191BE1BC8F26F3C1(uParam0->f_2, 0))
						{
							vVar3 = { unk_0xB3328BA8976B416C(uParam0->f_2, 1) };
						}
						unk_0x23A4CE7F9EBB02D4(-1, uParam0->f_50[iVar2], vVar3, uParam0->f_56, 0, 0, 0);
						unk_0x872F1C1F8587CCC7(&(uParam0->f_48), iVar2);
					}
					iVar2++;
				}
			}
			if (uParam0->f_22 > uParam0->f_21)
			{
				func_269(5, uParam0);
			}
		}
	}
	else if (func_270(5, uParam0))
	{
	}
	else if (func_270(7, uParam0))
	{
	}
}

void func_457(var uParam0)//Position - 0x26FCB
{
	if (unk_0x8EA3C8E091EA5BA4(uParam0->f_5))
	{
		unk_0x02934BABFD4CD384(uParam0->f_5, 0);
	}
	uParam0->f_5 = unk_0x03F9D5EC835EE606(26379945, 1);
	unk_0xA6DE0FBA9218D7F0(uParam0->f_5, uParam0->f_6, uParam0->f_9, uParam0->f_12, 0, 1, 1, 2);
	unk_0xFB661BD3E2CB0A49(uParam0->f_5, 1000f);
	unk_0x7E4FCDC8BAD0CF6D(uParam0->f_5, "HAND_SHAKE", uParam0->f_23);
	unk_0x3458550DF8E9B453(true, 0, 3000, 1, 0, 0);
}

bool func_458(int iParam0)//Position - 0x2703A
{
	return Local_297 == iParam0;
}

void func_459()//Position - 0x27048
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC80D31E4B587871C(Local_297.f_362.f_1, 0))
	{
		iVar0 = 0;
		iVar1 = unk_0xF6A72924028F588B(iLocal_777);
		if (func_816(iVar1, 0, 1))
		{
			if (unk_0xDE597476C8B96D1A(iVar1))
			{
				iVar0 = 1;
				if (unk_0xC80D31E4B587871C(Local_297.f_362, iLocal_777))
				{
					if (unk_0xC80D31E4B587871C(Local_924[iVar1 /*24*/].f_19, 0))
					{
						unk_0x0EE72DB1CD8A3B86(&(Local_297.f_362), iLocal_777);
					}
				}
			}
		}
		if (iVar0 == 0)
		{
			if (unk_0xC80D31E4B587871C(Local_297.f_362, iLocal_777))
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_297.f_362), iLocal_777);
			}
		}
		iLocal_777++;
		if (iLocal_777 >= 32)
		{
			iLocal_777 = 0;
			if (Local_297.f_362 == 0)
			{
				unk_0x0EE72DB1CD8A3B86(&(Local_297.f_362.f_1), 0);
			}
		}
	}
}

int func_460()//Position - 0x270FF
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = unk_0x622FF3AE4B1D07C3();
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = unk_0x9EB17624F44A8DA4();
	if (unk_0xC80D31E4B587871C(Local_297.f_362, iVar1) || unk_0xC80D31E4B587871C(Local_925, 0))
	{
		if (func_193(&uLocal_788) && !func_187(&uLocal_788, 5000, 0))
		{
			unk_0x872F1C1F8587CCC7(&(Local_924[iVar1 /*24*/].f_19), 0);
			unk_0x0EE72DB1CD8A3B86(&Local_925, 0);
			func_73(&(Local_925.f_4));
		}
		else if (!unk_0xC80D31E4B587871C(Local_924[iVar1 /*24*/].f_19, 0))
		{
			if (!unk_0xC80D31E4B587871C(Local_925, 0))
			{
				if (func_816(unk_0x9EB17624F44A8DA4(), 1, 1))
				{
					func_207(unk_0x9EB17624F44A8DA4(), 0, 4);
					vVar2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
					Local_925.f_1 = { func_462(vVar2) };
					unk_0x6EF694689373EE8D(unk_0xFC1458A37D98B502(), Local_925.f_1, 1f, 7000, 1193033728, 1056964608);
					func_222(&(Local_925.f_4), 1, 0);
					unk_0x872F1C1F8587CCC7(&Local_925, 0);
				}
			}
			else
			{
				if (func_187(&(Local_925.f_4), 7000, 1) || func_461(Local_925.f_1))
				{
					if (func_816(unk_0x9EB17624F44A8DA4(), 1, 1))
					{
						if (!func_461(Local_925.f_1))
						{
							if (unk_0xBE3C4023003180FC(Local_925.f_1, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 1) > 0,5f)
							{
								unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Local_925.f_1, 1, 0, 0, 1);
							}
						}
					}
					unk_0x872F1C1F8587CCC7(&(Local_924[iVar1 /*24*/].f_19), 0);
					unk_0x0EE72DB1CD8A3B86(&Local_925, 0);
					func_73(&(Local_925.f_4));
					func_207(unk_0x9EB17624F44A8DA4(), 1, 0);
				}
				else if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) != 1 && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) != 0)
				{
					unk_0x6EF694689373EE8D(unk_0xFC1458A37D98B502(), Local_925.f_1, 1f, 7000, 1193033728, 1056964608);
				}
				return 0;
			}
		}
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&(Local_924[iVar1 /*24*/].f_19), 0);
		if (Local_924[iVar1 /*24*/].f_19 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_461(vector3 vParam0)//Position - 0x272FF
{
	if (func_816(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (unk_0xBE3C4023003180FC(vParam0, unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), 0) < 3f)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_462(vector3 vParam0)//Position - 0x27330
{
	if (vParam0.y < -2999f)
	{
		if (vParam0.x < 962,6f)
		{
			vParam0.x = 958,7f;
		}
		else if (vParam0.x < 970,3f)
		{
			vParam0.x = 966,7f;
		}
		else
		{
			vParam0.x = 974,3f;
		}
	}
	else
	{
		vParam0.y = -2999,7f;
	}
	return vParam0;
}

int func_463()//Position - 0x27386
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_190(Local_297.f_352[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == Local_297.f_248)
	{
		return 1;
	}
	return 0;
}

bool func_464(int iParam0, int iParam1)//Position - 0x273CA
{
	bool bVar0;
	
	bVar0 = !unk_0xA357031C5C05DD94("AM_MP_SMPL_INTERIOR_INT", iParam0, 1, 0);
	if (!bVar0 && func_465(iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		unk_0xF6A03465FF2E4928(1);
	}
	return bVar0;
}

int func_465(int iParam0)//Position - 0x27401
{
	if (unk_0x4916190900E76373() && !func_466(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_466(int iParam0)//Position - 0x27421
{
	if (Global_1669535.f_2097)
	{
		if ((func_35(iParam0) == 6 || func_35(iParam0) == 10) || func_35(iParam0) == 9)
		{
			return 1;
		}
	}
	return 0;
}

void func_467(int iParam0)//Position - 0x27461
{
	Global_1669535.f_19 = iParam0;
}

int func_468()//Position - 0x27471
{
	var uVar0;
	
	func_474(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x3A711520F83BAE98())
		{
			return 1;
		}
	}
	if (func_473())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_472())
	{
		return 1;
	}
	if (func_471(157))
	{
		if (!func_470())
		{
			return 1;
		}
	}
	if (func_471(155))
	{
		return 1;
	}
	if (!unk_0xDEC0EB6EAE9BC575())
	{
		return 1;
	}
	if (func_469() != 0)
	{
		if (unk_0x8F38E94BBF3404CD(func_469()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_469()//Position - 0x274FB
{
	switch (func_103())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_470()//Position - 0x2752F
{
	return Global_2447174.f_586;
}

int func_471(int iParam0)//Position - 0x2753E
{
	if (unk_0xDC2E57BF710DF393(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_472()//Position - 0x27555
{
	return Global_2456830;
}

bool func_473()//Position - 0x27561
{
	return Global_2447174.f_581;
}

void func_474(var uParam0)//Position - 0x27570
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		iVar1 = unk_0xA387B84DA2EB1BEE(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0x575EF325DA5E3F04(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1155637934:
					func_475(iVar0);
					break;
				
				case 1662227603:
					unk_0x575EF325DA5E3F04(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_475(int iParam0)//Position - 0x275E3
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x575EF325DA5E3F04(1, iParam0, &vVar0, 3))
	{
		if (func_816(vVar0.y, 1, 1))
		{
			iVar1 = unk_0x25D049AAC4603E65(vVar0.y);
			if (unk_0x6ADD12BF4D6D2587(iVar1))
			{
				if (unk_0x88DDBE9908752BF0(iVar1, 0))
				{
					iVar2 = unk_0xDFD115BB10FE46A9(iVar1, 0);
					if (unk_0x1FE6625767FB8CBF(iVar2, vVar0.z) && unk_0x8C504A60C2F379BD())
					{
						if (func_476(iVar2, &bVar3))
						{
							unk_0x38CCEC620E3BB265(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							unk_0x5380482A432E314E(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_476(int iParam0, var uParam1)//Position - 0x27664
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x9761C10D57B68069(iParam0))
		{
			if (unk_0x828686E167EA3FD3(iParam0))
			{
				if (!unk_0x3C4FA7AE145B3F72(unk_0x82FF3DFBC3965CC0(iParam0)))
				{
					unk_0xDD29FF4BAB8AFF9C(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xCB234F3DD6FF9368(iParam0, 0))
		{
			if (unk_0xA0BF73C5030D3F60(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_477()//Position - 0x276C3
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	if (Local_927.f_888 == 0)
	{
		if (unk_0xC80D31E4B587871C(Global_1669535, 27) && func_484(5))
		{
			if (unk_0xAB019B170BF1309C(Local_927.f_890))
			{
				iVar0 = unk_0x63A6486593EC7EC3(1, 5);
				switch (iVar0)
				{
					case 1:
						Local_927.f_890 = "anim@mp_bedmid@right_var_01";
						break;
					
					case 2:
						Local_927.f_890 = "anim@mp_bedmid@right_var_02";
						break;
					
					case 3:
						Local_927.f_890 = "anim@mp_bedmid@right_var_03";
						break;
					
					case 4:
						Local_927.f_890 = "anim@mp_bedmid@right_var_04";
						break;
					
					default:
						Local_927.f_890 = "anim@mp_bedmid@right_var_01";
						break;
					}
			}
			Global_2486589.f_106 = 1;
			unk_0x6450931B826B49D9(Local_927.f_890);
			Local_927.f_888 = 1;
			unk_0x872F1C1F8587CCC7(&Global_1669535, 28);
		}
	}
	if (Local_927.f_888 > 0)
	{
		vVar1 = { 960,363f, -3006,06f, -39,615f };
		vVar2 = { 0f, 0f, 136,8f };
		func_288();
		func_482();
		unk_0x36853D5037847BF3();
		unk_0x0467A3C1EFB3B8F0();
		if (unk_0x3A801AA34DD821BE(Local_927.f_890))
		{
			if (Local_927.f_888 == 1)
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
					Local_927.f_889 = unk_0x8383F9C605E523B7(vVar1, vVar2, 2);
					unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), Local_927.f_889, Local_927.f_890, "f_sleep_r_loop_bighouse", 1000f, -1000f, 0, 0, 1148846080, 0);
					Local_927.f_888 = 2;
				}
				func_480(5);
				func_479();
				func_478(0);
				Global_2486589.f_106 = 0;
			}
			else if (Local_927.f_888 == 2)
			{
				if (unk_0xD56F740235B1E8F0(Local_927.f_889))
				{
					if (unk_0x463C4747B41E35A3(Local_927.f_889) > 0,025f && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
					{
						if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
						{
							unk_0x0DE51FACDA4C8C80(Local_927.f_889);
							Local_927.f_889 = unk_0x8383F9C605E523B7(vVar1, vVar2, 2);
							unk_0x7122D672EBE0EA6E(Local_927.f_889, 0);
							unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), Local_927.f_889, Local_927.f_890, "f_getout_r_bighouse", 2f, -2f, 261, 0, 1148846080, 0);
							Local_927.f_888 = 3;
							func_207(unk_0x9EB17624F44A8DA4(), 0, 256);
							func_222(&(Local_927.f_891), 0, 0);
						}
					}
				}
				else
				{
					Local_927.f_888 = 3;
				}
			}
			else if (Local_927.f_888 == 3)
			{
				if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), 2116425869) || func_187(&(Local_927.f_891), 10000, 0))
				{
					if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
						unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
						Local_927.f_888 = 0;
						func_73(&(Local_927.f_891));
						unk_0xFCCDDE0E48CF9588(Local_927.f_890);
						unk_0x0EE72DB1CD8A3B86(&Global_1669535, 28);
						func_207(unk_0x9EB17624F44A8DA4(), 1, 0);
					}
				}
			}
		}
	}
}

void func_478(int iParam0)//Position - 0x2797F
{
	if (!Global_2409075 == iParam0)
	{
		Global_2409075.f_1 = 0;
	}
	Global_2409075 = iParam0;
	if (unk_0x3A711520F83BAE98())
	{
		Global_2409075.f_3 = unk_0xD1952A425B78FFC0();
	}
}

void func_479()//Position - 0x279B0
{
	Global_2409075.f_14 = 0;
}

void func_480(int iParam0)//Position - 0x279BF
{
	if (iParam0 == func_481())
	{
		Global_2409075.f_14 = 0;
	}
}

int func_481()//Position - 0x279DA
{
	return Global_2409075;
}

void func_482()//Position - 0x279E6
{
	func_352();
	func_483(4, -1);
	func_483(6, -1);
	func_483(7, -1);
	func_483(3, -1);
	func_483(1, -1);
	func_483(2, -1);
	func_483(11, -1);
	func_483(13, -1);
	func_483(14, -1);
	func_483(16, -1);
}

void func_483(int iParam0, int iParam1)//Position - 0x27A32
{
	unk_0x872F1C1F8587CCC7(&(Global_1357530.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1357530.f_170[iParam1] = 1;
			}
			break;
	}
}

int func_484(int iParam0)//Position - 0x27A68
{
	if (iParam0 == func_481())
	{
		return Global_2409075.f_14;
	}
	return 0;
}

void func_485()//Position - 0x27A83
{
	switch (Local_927.f_880)
	{
		case 0:
			unk_0x128A5DCCD09CCA17("Prop_Screen_IE_Adhawk", 0);
			if (unk_0xA51ADD51711B4A15("Prop_Screen_IE_Adhawk"))
			{
				Local_927.f_880 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x7118556A56307B25("Prop_ImpExp_Lappy_01a"))
			{
				unk_0xD6C700D60B3E88BC("Prop_ImpExp_Lappy_01a", 0);
				if (!unk_0xB3A480393C690E8F(-932756839))
				{
					unk_0xC4ED0C74AE77D371(-932756839);
					if (Local_927.f_880.f_1 == -1)
					{
						Local_927.f_880.f_1 = unk_0x3B46B5E6947B1597("Prop_ImpExp_Lappy_01a");
					}
				}
			}
			Local_927.f_880 = 2;
			break;
		
		case 2:
			unk_0x7913685BF7335C7B(Local_927.f_880.f_1);
			unk_0x73509F6FDA1DB386(73, 73);
			unk_0x5A66A86A47AC3B57(4);
			unk_0xAE8C92295C8F2D18(1);
			unk_0xBA798A085778F91D("Prop_Screen_IE_Adhawk", "Prop_Screen_IE_Adhawk", 0,5f, 0,5f, 1f, 1f, 0f, 255, 255, 255, 255);
			unk_0x189EEBAACC5D380A();
			unk_0x7913685BF7335C7B(unk_0x01AB8D4D92922004());
			break;
	}
}

void func_486(var uParam0, var uParam1)//Position - 0x27B63
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar17;
	
	func_587(uParam1, uParam0);
	func_586(uParam0);
	func_585(uParam0);
	func_584(uParam0);
	if (Global_68219)
	{
		if (!func_193(&(uParam0->f_323)))
		{
			func_192(&(uParam0->f_323), 0, 0);
		}
		else if (func_187(&(uParam0->f_323), 500, 0))
		{
			func_73(&(uParam0->f_323));
			Global_68219 = 0;
		}
	}
	if (uParam0->f_443 || func_581())
	{
		if (*uParam0 >= 4)
		{
			if (!func_440())
			{
				func_355();
			}
		}
		else if (func_440() && !Global_1350989)
		{
			func_30();
		}
	}
	switch (*uParam0)
	{
		case 0:
			func_580(uParam0, uParam1);
			unk_0xA62A78B59413CB35("scr_mp_cig_plane");
			func_243(uParam0, 1);
			break;
		
		case 1:
			if (uParam0->f_443 == 1)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 964,0366f, -3002,607f, -40,58049f, 965,1981f, -3002,61f, -39,14661f, 1f, 0, 1, 0) && !unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()))
				{
					uParam0->f_316 = 0;
					uParam0->f_444 = 1;
					func_243(uParam0, 2);
				}
				else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 964,2057f, -3004,481f, -40,63488f, 965,1243f, -3004,43f, -39,13488f, 1f, 0, 1, 0) && !unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()))
				{
					uParam0->f_316 = 0;
					uParam0->f_444 = 0;
					func_243(uParam0, 2);
				}
				else if (uParam0->f_316 >= 1)
				{
					uParam0->f_316 = 0;
				}
				else
				{
					uParam0->f_316++;
				}
			}
			else if (func_579())
			{
				if (func_576(uParam0))
				{
					uParam0->f_316 = 0;
					func_243(uParam0, 2);
				}
				else if (uParam0->f_316 >= 1)
				{
					uParam0->f_316 = 0;
				}
				else
				{
					uParam0->f_316++;
				}
			}
			else
			{
				vVar2 = { func_4(uParam0->f_316, &(uParam0->f_279)) };
				vVar3 = { func_3(uParam0->f_316, &(uParam0->f_279)) };
				uParam0->f_279.f_31 = { unk_0x9EA50C5EC175E58E(vVar2, (vVar3.z - 0,617f), func_575(1)) };
				uParam0->f_279.f_34 = { unk_0x9EA50C5EC175E58E(vVar2, (vVar3.z - 0,617f), func_575(0)) };
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), uParam0->f_279.f_31, uParam0->f_279.f_34, fLocal_170, 0, 1, 0) && !unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()))
				{
					func_243(uParam0, 2);
				}
				else
				{
					uParam0->f_279.f_31 = { 0f, 0f, 0f };
					uParam0->f_279.f_34 = { 0f, 0f, 0f };
					if (uParam0->f_316 >= 13)
					{
						uParam0->f_316 = 0;
					}
					else
					{
						uParam0->f_316++;
					}
				}
			}
			break;
		
		case 2:
			uParam0->f_434 = (56 + uParam0->f_316);
			if (((((((!func_574(uParam0, uParam0->f_279.f_31, uParam0->f_279.f_34, 1,15f) && uParam1->f_274[uParam0->f_434] == 0) && !func_366()) && func_320(unk_0xFC1458A37D98B502())) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0)) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) && !func_573()) && func_571(uParam0, uParam0->f_316, unk_0x9EB17624F44A8DA4()))
			{
				if ((((unk_0xC80D31E4B587871C(uParam0->f_330, 12) || unk_0xC80D31E4B587871C(uParam0->f_330, 13)) || unk_0xC80D31E4B587871C(uParam0->f_330, 14)) || unk_0xC80D31E4B587871C(uParam0->f_330, 15)) || unk_0xC80D31E4B587871C(uParam0->f_330, 16))
				{
					if (uParam0->f_320 != -1)
					{
						func_18(&(uParam0->f_320));
					}
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 12);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 13);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 14);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 15);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 16);
				}
				if (!func_26(0) && !func_570())
				{
					if (!func_569())
					{
						func_568(uParam0, 0);
					}
				}
				else if (uParam0->f_320 != -1)
				{
					func_18(&(uParam0->f_320));
				}
				if (unk_0xE8C126B7ADBB9D63(2, 51) && !func_570())
				{
					uParam0->f_277 = uParam0->f_316;
					Global_2456857 = uParam0->f_277;
					uParam0->f_435 = uParam0->f_434;
					if (uParam0->f_320 != -1)
					{
						func_18(&(uParam0->f_320));
					}
					if (func_567(uParam0, uParam0->f_277))
					{
						func_566(uParam0, 0);
					}
					if (func_565(uParam0->f_277))
					{
					}
					uParam0->f_1 = 1;
					uParam0->f_2 = -1;
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
					if (func_564(uParam0, uParam0->f_277))
					{
						func_243(uParam0, 3);
					}
					else
					{
						uParam0->f_333 = func_558(uParam0, uParam0->f_277, func_562(), 0);
						unk_0x6450931B826B49D9(uParam0->f_333);
						func_243(uParam0, 4);
					}
				}
			}
			else if (!func_366())
			{
				if (func_581())
				{
					if (func_556())
					{
						if (uParam0->f_320 != -1 && !unk_0xC80D31E4B587871C(uParam0->f_330, 13))
						{
							func_18(&(uParam0->f_320));
						}
						if (uParam0->f_320 == -1)
						{
							func_361(&(uParam0->f_320), 4, func_555(2), 0, 0, 0, 0);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_330), 13);
						}
					}
					else if (!func_436(unk_0x9EB17624F44A8DA4()))
					{
						if (func_554() >= func_553())
						{
							if (uParam0->f_320 != -1 && !unk_0xC80D31E4B587871C(uParam0->f_330, 14))
							{
								func_18(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								func_361(&(uParam0->f_320), 4, func_555(3), 0, 0, 0, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_330), 14);
							}
						}
						else if (func_549(unk_0x9EB17624F44A8DA4()))
						{
							if (uParam0->f_320 != -1 && !unk_0xC80D31E4B587871C(uParam0->f_330, 15))
							{
								func_18(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								func_361(&(uParam0->f_320), 4, func_555(4), 0, 0, 0, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_330), 15);
							}
						}
						else if (unk_0x4916190900E76373())
						{
							if (uParam0->f_320 != -1 && !unk_0xC80D31E4B587871C(uParam0->f_330, 16))
							{
								func_18(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								func_361(&(uParam0->f_320), 4, func_555(0), 0, 0, 0, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_330), 16);
							}
						}
						else
						{
							if (uParam0->f_320 != -1 && !unk_0xC80D31E4B587871C(uParam0->f_330, 12))
							{
								func_18(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								func_361(&(uParam0->f_320), 4, func_555(1), 0, 0, 0, 0);
								unk_0x872F1C1F8587CCC7(&(uParam0->f_330), 12);
							}
						}
					}
					else if (func_547(unk_0x9EB17624F44A8DA4()))
					{
						if (uParam0->f_320 != -1 && !unk_0xC80D31E4B587871C(uParam0->f_330, 16))
						{
							func_18(&(uParam0->f_320));
						}
						if (uParam0->f_320 == -1)
						{
							func_361(&(uParam0->f_320), 4, func_555(0), 0, 0, 0, 0);
							unk_0x872F1C1F8587CCC7(&(uParam0->f_330), 16);
						}
					}
				}
				else
				{
					if (func_565(uParam0->f_316))
					{
						if (uParam0->f_320 == -1)
						{
							func_361(&(uParam0->f_320), 4, "MPJAC_NO_SIT", 0, 0, 0, 0);
						}
					}
					else if (func_567(uParam0, uParam0->f_316))
					{
						if (uParam0->f_320 == -1)
						{
							func_361(&(uParam0->f_320), 4, "MPOFFCH_NO_SIT", 0, 0, 0, 0);
						}
					}
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
				}
			}
			if (uParam0->f_316 == iLocal_163 && (func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17) || func_164(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1)))
			{
				fVar6 = func_546(uParam0);
				if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vVar4, vVar5, 1,4f, 0, 1, 0) || fVar6 > 120f)
				{
					if (uParam0->f_320 != -1)
					{
						func_18(&(uParam0->f_320));
					}
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
					func_243(uParam0, 1);
				}
			}
			else if (uParam0->f_443 == 1)
			{
				if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 964,432f, -3004,828f, -40,63492f, 964,42f, -3002,054f, -39,13492f, 1,5f, 0, 1, 0))
				{
					if (uParam0->f_320 != -1)
					{
						func_18(&(uParam0->f_320));
					}
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
					func_243(uParam0, 1);
				}
			}
			else if (func_579())
			{
				if (!func_576(uParam0))
				{
					if (uParam0->f_320 != -1)
					{
						func_18(&(uParam0->f_320));
					}
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 12);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 13);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 14);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 15);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 16);
					func_243(uParam0, 1);
				}
			}
			else if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), uParam0->f_279.f_31, uParam0->f_279.f_34, fLocal_170, 0, 1, 0))
			{
				if (uParam0->f_320 != -1)
				{
					func_18(&(uParam0->f_320));
				}
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
				func_243(uParam0, 1);
			}
			break;
		
		case 3:
			if (func_544(unk_0xFC1458A37D98B502()))
			{
				unk_0x03924C68EFCBC511(unk_0xFC1458A37D98B502(), 5, 0, 0, 0);
				unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 177, 0);
			}
			uParam0->f_333 = func_558(uParam0, uParam0->f_277, func_562(), 0);
			func_243(uParam0, 4);
			unk_0x6450931B826B49D9(uParam0->f_333);
			func_543(uParam0, uParam1);
			break;
		
		case 4:
			unk_0x6450931B826B49D9(uParam0->f_333);
			func_543(uParam0, uParam1);
			if (!unk_0x3A801AA34DD821BE(uParam0->f_333))
			{
				unk_0x6450931B826B49D9(uParam0->f_333);
				return;
			}
			if (!func_543(uParam0, uParam1))
			{
				return;
			}
			else if (!unk_0x6ADD12BF4D6D2587(uParam0->f_319))
			{
				func_243(uParam0, 12);
			}
			if (func_542(uParam0->f_277))
			{
				if (!func_541(uParam1, uParam0, uParam0->f_277))
				{
					return;
				}
				else
				{
					uParam0->f_433 = unk_0x63A6486593EC7EC3(uParam0->f_431, uParam0->f_432);
					if (((uParam1[uParam0->f_277 /*21*/])->f_3 && (uParam1[uParam0->f_277 /*21*/])->f_4 == 0) || (uParam1[uParam0->f_277 /*21*/])->f_2)
					{
						if (!func_193(&(uParam0->f_325)))
						{
							func_192(&(uParam0->f_325), 1, 0);
						}
					}
				}
			}
			if (func_565(uParam0->f_277))
			{
				unk_0x04562CD765E0C517(joaat("weapon_revolver"), 31, 0);
				if (!unk_0x0A198E59F03B0E6F(joaat("weapon_revolver")))
				{
					unk_0x04562CD765E0C517(joaat("weapon_revolver"), 31, 0);
					return;
				}
				if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0))
				{
					uParam0->f_436 = unk_0x02E026B1C5CE86B4(func_534(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 1, 0, 0, 0, 0, 1, 0));
					unk_0xB2CBFA871D3387B6(unk_0x855B7BD6B441CDEB(uParam0->f_436), 1);
					unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_436), false, 0);
				}
			}
			func_533(uParam0, &vVar0, &fVar1);
			if (func_567(uParam0, uParam0->f_277))
			{
				if (unk_0x8E8C94609BA4BEA9(unk_0x666DEE82C2B4C5B5()) == 4)
				{
					unk_0xBA54D3D84EF38E3D(unk_0xFC1458A37D98B502(), vVar7, 5000, 0, 2);
					unk_0x6EF694689373EE8D(unk_0xFC1458A37D98B502(), vVar0, 1f, 100, fVar1, 0,1f);
				}
				else
				{
					unk_0x6EF694689373EE8D(unk_0xFC1458A37D98B502(), vVar0, 1f, 100, fVar1, 0,1f);
				}
			}
			else
			{
				unk_0x6EF694689373EE8D(unk_0xFC1458A37D98B502(), vVar0, 1f, 100, fVar1, 0,05f);
			}
			unk_0xE6E820C083DA10EB(unk_0xFC1458A37D98B502(), 1, 20, 0);
			func_243(uParam0, 5);
			break;
		
		case 5:
			if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) == 1)
			{
			}
			func_533(uParam0, &vVar0, &fVar1);
			if ((func_154(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1), vVar0, 0,05f, 0) && func_532(unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502()), fVar1, 5f)) || unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) != 1)
			{
				uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
				if ((func_565(uParam0->f_277) && !unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0)) && func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
				{
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "enter_B", 1,5f, -1,5f, 5, 16, 1,5f, 4);
					unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "enter_b_chair", 4f, -4f, 32773);
				}
				else if (!func_531(uParam0))
				{
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "enter", 1,5f, -1,5f, 5, 16, 1,5f, 0);
					unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "enter_chair", 4f, -4f, 32773);
				}
				else
				{
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "enter_left", 1,5f, -1,5f, 5, 16, 1,5f, 0);
					unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "enter_left_chair", 4f, -4f, 32773);
				}
				if ((func_565(uParam0->f_277) && func_64(uParam0->f_277)) && unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0))
				{
					unk_0xF6DCDEEE0FC03E91(unk_0x855B7BD6B441CDEB(uParam0->f_436), uParam0->f_278, uParam0->f_333, "enter_weapon", 4f, -4f, 32773);
				}
				if (func_542(uParam0->f_277))
				{
					if ((uParam1[uParam0->f_277 /*21*/])->f_2)
					{
						unk_0xF6DCDEEE0FC03E91(unk_0x29AB7D6D0DE18055((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_333, "enter_cigar", 4f, -4f, 32773);
					}
					if ((uParam1[uParam0->f_277 /*21*/])->f_3)
					{
						unk_0xF6DCDEEE0FC03E91(unk_0x29AB7D6D0DE18055((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_333, "enter_glass", 4f, -4f, 32773);
					}
				}
				unk_0x9C39944AA129D284(uParam0->f_278);
				func_243(uParam0, 6);
			}
			break;
		
		case 6:
			unk_0x3B60E1A32FD1AE85(uParam0->f_319);
			iVar8 = unk_0x45D90ED1F569A489(uParam0->f_278);
			if (unk_0xD56F740235B1E8F0(iVar8))
			{
				if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -1971887213))
				{
					if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0))
					{
						unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_436), true, 0);
					}
				}
				if (unk_0x463C4747B41E35A3(iVar8) >= 1f)
				{
					if (func_567(uParam0, uParam0->f_277))
					{
						if (unk_0xA265D8071CA2777B(uParam0->f_319) != 0f)
						{
							vVar9 = { unk_0xDB824D597B53CC40(uParam0->f_319, 2) };
							unk_0x59AF3B40AE222194(uParam0->f_319, 0f, 0f, vVar9.z, 2, 1);
						}
						if (unk_0x733545A84ECFD808(uParam0->f_319) != 0f)
						{
							vVar10 = { unk_0xDB824D597B53CC40(uParam0->f_319, 2) };
							unk_0x59AF3B40AE222194(uParam0->f_319, 0f, 0f, vVar10.z, 2, 1);
						}
					}
					if (uParam0->f_438 == 1)
					{
						uParam0->f_438 = 0;
						func_512(unk_0xFC1458A37D98B502(), 0);
						unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055((uParam1[uParam0->f_277 /*21*/])->f_7), false, 0);
						unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055((uParam1[uParam0->f_277 /*21*/])->f_8), true, 0);
					}
					uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
					if (uParam0->f_439)
					{
						uParam0->f_439 = 0;
					}
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "base", 4f, -1,5f, 5, 16, 1148846080, 0);
					unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "base_chair", 4f, -4f, 32773);
					if ((func_565(uParam0->f_277) && unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0)) && func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
					{
						unk_0xF6DCDEEE0FC03E91(unk_0x855B7BD6B441CDEB(uParam0->f_436), uParam0->f_278, uParam0->f_333, "base_weapon", 4f, -4f, 32773);
					}
					if (func_542(uParam0->f_277))
					{
						if ((uParam1[uParam0->f_277 /*21*/])->f_2)
						{
							unk_0xF6DCDEEE0FC03E91(unk_0x29AB7D6D0DE18055((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_333, "base_cigar", 4f, -4f, 32773);
						}
						if ((uParam1[uParam0->f_277 /*21*/])->f_3)
						{
							unk_0xF6DCDEEE0FC03E91(unk_0x29AB7D6D0DE18055((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_333, "base_glass", 4f, -4f, 32773);
						}
					}
					unk_0x9C39944AA129D284(uParam0->f_278);
					if (((func_565(uParam0->f_277) || func_567(uParam0, uParam0->f_277)) || func_542(uParam0->f_277)) || func_511(uParam0->f_277))
					{
						func_243(uParam0, 7);
					}
				}
			}
			if (func_510(uParam0->f_277))
			{
				if (!unk_0xAB019B170BF1309C(uParam0->f_333))
				{
					if (!unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), uParam0->f_333, "enter", 3) && uParam0->f_439 != 1)
					{
					}
				}
			}
			if (func_567(uParam0, uParam0->f_277) || func_565(uParam0->f_277))
			{
				if (!unk_0xAB019B170BF1309C(uParam0->f_333))
				{
					if (!unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), uParam0->f_333, "enter", 3))
					{
					}
				}
			}
			if (((!func_573() && !func_509(uParam0)) && func_511(uParam0->f_277)) && func_508())
			{
				func_243(uParam0, 18);
			}
			break;
		
		case 7:
			iVar11 = unk_0x45D90ED1F569A489(uParam0->f_278);
			if (unk_0xD56F740235B1E8F0(iVar11))
			{
				if (func_193(&(uParam0->f_325)))
				{
					if ((func_187(&(uParam0->f_325), uParam0->f_433, 1) && uParam0->f_1 == 1) && !unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -1322051853))
					{
						iVar12 = 1;
					}
				}
				if (unk_0x463C4747B41E35A3(iVar11) >= 1f || iVar12)
				{
					uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
					uParam0->f_335 = func_504(uParam1, uParam0);
					if (func_503(uParam0, uParam0->f_277, uParam0->f_335))
					{
						(uParam1[uParam0->f_277 /*21*/])->f_4 = 1;
						uParam0->f_438 = 1;
					}
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, func_502(uParam0->f_335), 4f, -1,5f, 5, 16, 1148846080, 0);
					unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, func_501(uParam0->f_335), 4f, -4f, 32773);
					if (func_542(uParam0->f_277))
					{
						if ((uParam1[uParam0->f_277 /*21*/])->f_2)
						{
							unk_0xF6DCDEEE0FC03E91(unk_0x29AB7D6D0DE18055((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_333, func_500(uParam0->f_335), 4f, -4f, 32773);
						}
						if ((uParam1[uParam0->f_277 /*21*/])->f_3)
						{
							unk_0xF6DCDEEE0FC03E91(unk_0x29AB7D6D0DE18055((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_333, func_499(uParam0->f_335), 4f, -4f, 32773);
						}
					}
					if ((func_565(uParam0->f_277) && unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0)) && func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
					{
						unk_0xF6DCDEEE0FC03E91(unk_0x855B7BD6B441CDEB(uParam0->f_436), uParam0->f_278, uParam0->f_333, func_498(uParam0->f_335), 4f, -4f, 32773);
					}
					unk_0x9C39944AA129D284(uParam0->f_278);
					func_243(uParam0, 6);
				}
			}
			if (((!func_573() && !func_509(uParam0)) && func_511(uParam0->f_277)) && func_508())
			{
				func_243(uParam0, 18);
			}
			else if (func_508())
			{
			}
			break;
		
		case 16:
			iVar11 = unk_0x45D90ED1F569A489(uParam0->f_278);
			if (unk_0xD56F740235B1E8F0(iVar11))
			{
				vVar13 = { unk_0xDB824D597B53CC40(uParam0->f_319, 2) };
				vVar14 = { unk_0xB3328BA8976B416C(uParam0->f_319, 1) };
				uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "COMPUTER_ENTER", 4f, -1,5f, 5, 16, 1148846080, 4);
				unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "COMPUTER_ENTER_CHAIR", 4f, -4f, 32773);
				unk_0x9C39944AA129D284(uParam0->f_278);
				uParam0->f_445 = 0;
				func_243(uParam0, 17);
			}
			break;
		
		case 22:
			unk_0x6450931B826B49D9(uParam0->f_333);
			if (unk_0x3A801AA34DD821BE(uParam0->f_333))
			{
				uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "ENTER", 4f, -4f, 5, 16, 1000f, 0);
				unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "ENTER_CHAIR", 4f, -4f, 32773);
				unk_0x9C39944AA129D284(uParam0->f_278);
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
				func_243(uParam0, 6);
			}
			break;
		
		case 17:
			iVar11 = unk_0x45D90ED1F569A489(uParam0->f_278);
			if (unk_0xD56F740235B1E8F0(iVar11))
			{
				if (func_497(unk_0xFC1458A37D98B502()))
				{
					fVar15 = 0,53f;
				}
				else
				{
					fVar15 = 0,22f;
				}
				if ((unk_0x463C4747B41E35A3(iVar11) >= fVar15 && unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), uParam0->f_333, "COMPUTER_ENTER", 3)) && !uParam0->f_445)
				{
					if (func_567(uParam0, uParam0->f_277))
					{
						if ((!func_509(uParam0) && !func_573()) && (!func_57(unk_0x9EB17624F44A8DA4()) || !func_496(unk_0x9EB17624F44A8DA4())))
						{
							func_566(uParam0, 1);
							uParam0->f_445 = 1;
						}
					}
					if (func_511(uParam0->f_277))
					{
					}
				}
				if (unk_0x463C4747B41E35A3(iVar11) >= 1f)
				{
					uParam0->f_445 = 0;
					vVar16 = { unk_0xDB824D597B53CC40(uParam0->f_319, 2) };
					vVar17 = { unk_0xB3328BA8976B416C(uParam0->f_319, 1) };
					uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "COMPUTER_IDLE", 4f, -1,5f, 5, 16, 1148846080, 4);
					unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "COMPUTER_IDLE_CHAIR", 4f, -4f, 32773);
					unk_0x9C39944AA129D284(uParam0->f_278);
				}
			}
			if (!func_573() && unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), uParam0->f_333, "COMPUTER_IDLE", 3))
			{
				unk_0xA55D009D02766A03(unk_0xFC1458A37D98B502(), uParam0->f_319, 1);
				func_243(uParam0, 18);
			}
			break;
		
		case 18:
			iVar11 = unk_0x45D90ED1F569A489(uParam0->f_278);
			if (unk_0xD56F740235B1E8F0(iVar11))
			{
				uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
				if (!func_511(uParam0->f_277))
				{
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "COMPUTER_EXIT", 1000f, -1,5f, 5, 0, 1148846080, 4);
					unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "COMPUTER_EXIT_CHAIR", 1000f, -4f, 32773);
				}
				else
				{
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "EXIT", 4f, -1,5f, 5, 0, 1148846080, 4);
					unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "EXIT_CHAIR", 4f, -4f, 32773);
				}
				unk_0x9C39944AA129D284(uParam0->f_278);
				if (Global_68220 == 1)
				{
					func_243(uParam0, 11);
				}
				else
				{
					if (func_511(uParam0->f_277))
					{
						uParam0->f_333 = func_558(uParam0, uParam0->f_277, func_562(), 0);
					}
					func_243(uParam0, 6);
				}
			}
			break;
		
		case 9:
			uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
			unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "exit", 4f, -4f, 5, 16, 1000f, 0);
			unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "exit_chair", 4f, -4f, 5);
			unk_0x9C39944AA129D284(uParam0->f_278);
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
			if (uParam0->f_328)
			{
				uParam0->f_328 = 0;
				func_495(uParam0);
				uParam0->f_333 = func_494(uParam0);
			}
			if (uParam0->f_327)
			{
				uParam0->f_327 = 0;
				func_493(uParam0);
				uParam0->f_333 = func_494(uParam0);
			}
			uParam0->f_439 = 1;
			func_243(uParam0, 6);
			break;
		
		case 10:
			uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
			if (!func_531(uParam0))
			{
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "enter", 1,5f, -1,5f, 5, 16, 1,5f, 0);
			}
			else
			{
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "enter_LEFT", 1,5f, -1,5f, 5, 16, 1,5f, 0);
			}
			unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "enter_chair", 4f, -4f, 32773);
			unk_0x9C39944AA129D284(uParam0->f_278);
			if (uParam0->f_328)
			{
				uParam0->f_328 = 0;
				func_495(uParam0);
			}
			if (uParam0->f_327)
			{
				uParam0->f_327 = 0;
				func_493(uParam0);
			}
			func_243(uParam0, 6);
			break;
		
		case 11:
			iVar11 = unk_0x45D90ED1F569A489(uParam0->f_278);
			if (unk_0xD56F740235B1E8F0(iVar11))
			{
				if (unk_0x463C4747B41E35A3(iVar11) >= 1f || !unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -1322051853))
				{
					if (!unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -1322051853))
					{
					}
					uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, func_494(uParam0), "exit", 4f, -4f, 5, 0, 1000f, 0);
					unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, func_494(uParam0), "exit_chair", 4f, -4f, 5);
					unk_0x9C39944AA129D284(uParam0->f_278);
					if (func_250() || func_249())
					{
						unk_0x3E80C2F7BC665259(1);
					}
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
					func_243(uParam0, 12);
				}
			}
			break;
		
		case 13:
			unk_0x0B0BB26D99CD7575(uParam0->f_278);
			func_243(uParam0, 15);
			func_489(uParam0, 0);
			break;
		
		case 12:
			unk_0x3B60E1A32FD1AE85(uParam0->f_319);
			iVar11 = unk_0x45D90ED1F569A489(uParam0->f_278);
			if (unk_0xD56F740235B1E8F0(iVar11))
			{
				if (func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
				{
					if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), 203249472))
					{
						if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0))
						{
							unk_0xB3A8974D2C811672(unk_0x29AB7D6D0DE18055(uParam0->f_436), false, 0);
						}
					}
				}
				if ((unk_0x463C4747B41E35A3(iVar11) >= 1f || unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), 364629851)) || unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), 2116425869))
				{
					unk_0x0B0BB26D99CD7575(uParam0->f_278);
					func_243(uParam0, 15);
					func_489(uParam0, 0);
				}
			}
			break;
		
		case 15:
			func_243(uParam0, 1);
			break;
		
		case 26:
			if (!func_543(uParam0, uParam1))
			{
				return;
			}
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_319))
			{
				if (!uParam0->f_442)
				{
					func_487(uParam0);
					uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "COMPUTER_EXIT", 1000f, -1,5f, 5, 0, 1148846080, 4);
					unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "COMPUTER_EXIT_CHAIR", 1000f, -4f, 32773);
					unk_0x9C39944AA129D284(uParam0->f_278);
					uParam0->f_442 = 1;
				}
			}
			if (uParam0->f_442)
			{
				iVar11 = unk_0x45D90ED1F569A489(uParam0->f_278);
				if (unk_0xD56F740235B1E8F0(iVar11))
				{
					if (unk_0x463C4747B41E35A3(iVar11) >= 0,1f)
					{
						uParam0->f_442 = 0;
						unk_0x59C3AC31C7544A28(750);
						func_243(uParam0, 7);
					}
				}
			}
			break;
	}
}

void func_487(var uParam0)//Position - 0x297C7
{
	struct<4> Var0;
	
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_319))
	{
		if (func_488(unk_0x02E026B1C5CE86B4(uParam0->f_319)))
		{
			func_46(uParam0->f_318, 684, &Var0, func_51(uParam0->f_318), 0);
			unk_0xAA93B7B448E10E40(uParam0->f_319, Var0, 0, 0, 1);
			unk_0x59AF3B40AE222194(uParam0->f_319, Var0.f_3, 2, 1);
		}
	}
}

int func_488(var uParam0)//Position - 0x2982A
{
	if (unk_0x93C304998B457C45(uParam0))
	{
		unk_0x04092215B40E1262(uParam0);
		return unk_0xE53FD7AF7F25C0A8(uParam0);
	}
	return 0;
}

void func_489(var uParam0, bool bParam1)//Position - 0x2984C
{
	if (!bParam1)
	{
		if (func_492(unk_0x9EB17624F44A8DA4()))
		{
			bParam1 = true;
		}
		if (func_37(unk_0x9EB17624F44A8DA4()))
		{
			bParam1 = true;
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		unk_0xE6E820C083DA10EB(unk_0xFC1458A37D98B502(), 0, 20, 0);
	}
	Global_68220 = 0;
	if (func_565(uParam0->f_277))
	{
	}
	if (func_252())
	{
		func_251();
	}
	uParam0->f_435 = 0;
	if ((func_250() || func_249()) || func_248())
	{
		unk_0x3E80C2F7BC665259(1);
		if (uParam0->f_320 != -1)
		{
			func_18(&(uParam0->f_320));
		}
	}
	uParam0->f_444 = 0;
	func_566(uParam0, 0);
	func_491(uParam0, bParam1);
	unk_0x2DB625A7D089C175(0, 0, 1);
	func_490(uParam0);
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
	uParam0->f_333 = "";
	unk_0x3657CB418C776691(unk_0x98EC0789D9F0703B(), 0,5f);
	func_243(uParam0, 1);
	func_243(&Global_25505, 1);
	uParam0->f_316 = 0;
	uParam0->f_277 = -1;
	Global_2456857 = -1;
	if (uParam0->f_320 != -1)
	{
		func_18(&(uParam0->f_320));
	}
	if (unk_0x918CA1BFFAA03556(uParam0->f_436))
	{
		if (unk_0xE53FD7AF7F25C0A8(uParam0->f_436))
		{
			func_186(&(uParam0->f_436));
		}
	}
	if (unk_0x918CA1BFFAA03556(uParam0->f_437))
	{
		if (unk_0xE53FD7AF7F25C0A8(uParam0->f_437))
		{
			func_186(&(uParam0->f_437));
		}
	}
	func_73(&(uParam0->f_325));
	Global_68220 = 0;
}

void func_490(var uParam0)//Position - 0x299A9
{
	if (uParam0->f_320 != -1)
	{
		func_18(&(uParam0->f_320));
	}
	if (((((((((((((((((((((((((((((func_246("MPOFSEAT_EXIT") || func_246("MPOFSEAT_EXIT_L")) || func_246("MPOFSEAT_EXIT_C")) || func_246("MPOFSEAT_EXIT_R")) || func_246("MPOFSEAT_PCEXIT")) || func_246("MPOFSEAT_EXIT_PCL")) || func_246("MPOFSEAT_EXIT_PCC")) || func_246("MPOFSEAT_EXIT_PCR")) || func_246("WHOUSEINPUTTRIG")) || func_246("WHOUSEINPUTTRPC")) || func_246("SECINPUTTREG")) || func_246("SECINPUTTREGPC")) || func_246("OFF_COMP_MIS")) || func_246("OFF_COMP_MIS_PC")) || func_246("OFF_COMP_BDY")) || func_246("OFF_COMP_BDY_PC")) || func_246("OFFLAPTOPPC")) || func_246("OFFLAPTOP")) || func_246("MPOF_AC_EXIT")) || func_246("MPOF_AC_PC_EXIT")) || func_246("CLBHINPUTTRIGPC")) || func_246("ORINPUTTREGPC")) || func_246("CLBHINPUTTRIG")) || func_246("ORINPUTTREG")) || func_246("OFF_COMP_CH")) || func_246("OFF_COMP_CH_PC")) || func_246("OFF_COMP_CHV")) || func_246("OFF_COMP_CHV_PC")) || func_246("IEAPPINPUTTRIG")) || func_246("IEAPPINPUTTRPC"))
	{
		unk_0x3E80C2F7BC665259(1);
	}
	unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
}

void func_491(var uParam0, bool bParam1)//Position - 0x29B73
{
	struct<4> Var0;
	
	if (unk_0x6ADD12BF4D6D2587(uParam0->f_319))
	{
		if (func_488(unk_0x02E026B1C5CE86B4(uParam0->f_319)))
		{
			if (uParam0->f_443 == 0 && !bParam1)
			{
				func_46(uParam0->f_318, (678 + uParam0->f_277), &Var0, func_51(uParam0->f_318), 0);
				unk_0xAA93B7B448E10E40(uParam0->f_319, Var0, 0, 0, 1);
				unk_0x59AF3B40AE222194(uParam0->f_319, Var0.f_3, 2, 1);
			}
			else
			{
				unk_0xAA93B7B448E10E40(uParam0->f_319, uParam0->f_279.f_6[0 /*6*/], 0, 0, 1);
				unk_0x59AF3B40AE222194(uParam0->f_319, uParam0->f_279.f_6[0 /*6*/].f_3, 2, 1);
			}
			uParam0->f_319 = 0;
		}
	}
}

int func_492(int iParam0)//Position - 0x29C28
{
	if (iParam0 != func_36())
	{
		if (func_816(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_35(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

void func_493(var uParam0)//Position - 0x29C6E
{
	switch (uParam0->f_1)
	{
		case 0:
			uParam0->f_1 = 1;
			break;
		
		case 1:
			uParam0->f_1 = 2;
			break;
	}
}

char* func_494(var uParam0)//Position - 0x29C9B
{
	char* sVar0;
	
	if (func_567(uParam0, uParam0->f_277))
	{
		sVar0 = func_558(uParam0, uParam0->f_277, func_562(), 0);
	}
	else if (func_510(uParam0->f_277))
	{
		if (func_64(uParam0->f_318))
		{
			switch (uParam0->f_2)
			{
				case -1:
					break;
				
				case 0:
					if (func_562())
					{
						sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_A@BASE@";
					}
					else
					{
						sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_A@BASE@";
					}
					break;
				
				case 1:
					if (func_562())
					{
						sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_b@BASE@";
					}
					else
					{
						sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_b@BASE@";
					}
					break;
				
				case 2:
					if (func_562())
					{
						sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_C@BASE@";
					}
					else
					{
						sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_C@BASE@";
					}
					break;
			}
		}
		else if (func_164(uParam0->f_318, -1))
		{
			if (func_565(uParam0->f_277))
			{
				if (func_562())
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@FEMALE@BASE@";
				}
				else
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@MALE@BASE@";
				}
			}
			else
			{
				switch (uParam0->f_2)
				{
					case -1:
						break;
					
					case 0:
						if (func_562())
						{
							sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_A@BASE@";
						}
						else
						{
							sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_A@BASE@";
						}
						break;
					
					case 1:
						if (func_562())
						{
							sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_B@BASE@";
						}
						else
						{
							sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_B@BASE@";
						}
						break;
					
					case 2:
						if (func_562())
						{
							sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_C@BASE@";
						}
						else
						{
							sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_C@BASE@";
						}
						break;
					}
				}
			}
	}
	return sVar0;
}

void func_495(var uParam0)//Position - 0x29DF3
{
	switch (uParam0->f_1)
	{
		case 1:
			uParam0->f_1 = 0;
			break;
		
		case 2:
			uParam0->f_1 = 1;
			break;
	}
}

bool func_496(int iParam0)//Position - 0x29E20
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_211, 7);
}

int func_497(int iParam0)//Position - 0x29E38
{
	if (((((((((unk_0x82FF3DFBC3965CC0(iParam0) == joaat("mp_f_freemode_01") || unk_0x82FF3DFBC3965CC0(iParam0) == -1301974109) || unk_0x82FF3DFBC3965CC0(iParam0) == 2014985464) || unk_0x82FF3DFBC3965CC0(iParam0) == 1264941816) || unk_0x82FF3DFBC3965CC0(iParam0) == -1215761931) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("s_f_y_sweatshop_01")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("a_f_y_bevhills_04")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("a_f_y_genhot_01")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("a_f_y_scdressy_01")) || unk_0x82FF3DFBC3965CC0(iParam0) == joaat("ig_tracydisanto"))
	{
		return 1;
	}
	return 0;
}

char* func_498(int iParam0)//Position - 0x29EF6
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a_weapon";
			break;
		
		case 1:
			sVar0 = "idle_b_weapon";
			break;
		
		case 2:
			sVar0 = "idle_c_weapon";
			break;
		
		case 3:
			sVar0 = "idle_d_weapon";
			break;
		
		case 4:
			sVar0 = "idle_e_weapon";
			break;
	}
	return sVar0;
}

char* func_499(int iParam0)//Position - 0x29F52
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a_glass";
			break;
		
		case 1:
			sVar0 = "idle_b_glass";
			break;
		
		case 2:
			sVar0 = "idle_c_glass";
			break;
		
		case 3:
			sVar0 = "idle_d_glass";
			break;
		
		case 4:
			sVar0 = "idle_e_glass";
			break;
	}
	return sVar0;
}

char* func_500(int iParam0)//Position - 0x29FAE
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a_cigar";
			break;
		
		case 1:
			sVar0 = "idle_b_cigar";
			break;
		
		case 2:
			sVar0 = "idle_c_cigar";
			break;
		
		case 3:
			sVar0 = "idle_d_cigar";
			break;
		
		case 4:
			sVar0 = "idle_e_cigar";
			break;
	}
	return sVar0;
}

char* func_501(int iParam0)//Position - 0x2A00A
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a_CHAIR";
			break;
		
		case 1:
			sVar0 = "idle_b_CHAIR";
			break;
		
		case 2:
			sVar0 = "idle_c_CHAIR";
			break;
		
		case 3:
			sVar0 = "idle_d_CHAIR";
			break;
		
		case 4:
			sVar0 = "idle_e_CHAIR";
			break;
	}
	return sVar0;
}

char* func_502(int iParam0)//Position - 0x2A066
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "idle_a";
			break;
		
		case 1:
			sVar0 = "idle_b";
			break;
		
		case 2:
			sVar0 = "idle_c";
			break;
		
		case 3:
			sVar0 = "idle_d";
			break;
		
		case 4:
			sVar0 = "idle_e";
			break;
	}
	return sVar0;
}

int func_503(var uParam0, int iParam1, int iParam2)//Position - 0x2A0C2
{
	if ((func_542(iParam1) && uParam0->f_1 == 1) && func_64(uParam0->f_318))
	{
		switch (iParam2)
		{
			case 1:
				return 1;
				break;
			}
	}
	return 0;
}

int func_504(var uParam0, var uParam1)//Position - 0x2A101
{
	int iVar0;
	int iVar1;
	
	if ((uParam1->f_1 == 1 && !func_506(uParam1)) && func_64(uParam1->f_318))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = 3;
	}
	if (((func_542(uParam1->f_277) && ((uParam0[uParam1->f_277 /*21*/])->f_2 == 1 || (uParam0[uParam1->f_277 /*21*/])->f_3 == 1)) && func_193(&(uParam1->f_325))) && uParam1->f_1 == 1)
	{
		if (func_187(&(uParam1->f_325), uParam1->f_433, 1))
		{
			if ((uParam0[uParam1->f_277 /*21*/])->f_3 == 1 && (uParam0[uParam1->f_277 /*21*/])->f_4 == 0)
			{
				iVar0 = 1;
			}
			else if ((uParam0[uParam1->f_277 /*21*/])->f_2 == 1)
			{
				iVar0 = 2;
			}
			func_73(&(uParam1->f_325));
		}
	}
	else
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, iVar1);
		if (func_164(uParam1->f_318, -1))
		{
			if (unk_0x389426B382444F87(uParam1->f_333, "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_A@BASE@", 0, -1) == 0)
			{
				if (uParam1->f_440 == 1)
				{
					iVar0 = 2;
				}
				else
				{
					iVar0 = 1;
				}
				uParam1->f_441 = uParam1->f_440;
				uParam1->f_440 = iVar0;
				return iVar0;
			}
			else if (unk_0x389426B382444F87(uParam1->f_333, "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_B@BASE_R@", 0, -1) == 0)
			{
				if (uParam1->f_440 == 1)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
				uParam1->f_441 = uParam1->f_440;
				uParam1->f_440 = iVar0;
				return iVar0;
			}
			else if (unk_0x389426B382444F87(uParam1->f_333, "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_C@BASE_R@", 0, -1) == 0)
			{
				if (uParam1->f_440 == 0)
				{
					iVar0 = 2;
				}
				else
				{
					iVar0 = 0;
				}
				uParam1->f_441 = uParam1->f_440;
				uParam1->f_440 = iVar0;
				return iVar0;
			}
		}
		while (((iVar0 == uParam1->f_440 || iVar0 == uParam1->f_441) || !func_505(uParam0, uParam1, uParam1->f_277, iVar0)) || (((func_565(uParam1->f_277) && func_64(uParam1->f_318)) && !unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0)) && iVar0 == 1))
		{
			if ((func_565(uParam1->f_277) && !unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0)) && iVar0 == 1)
			{
			}
			iVar0 = unk_0x63A6486593EC7EC3(0, iVar1);
		}
	}
	uParam1->f_441 = uParam1->f_440;
	uParam1->f_440 = iVar0;
	return iVar0;
}

int func_505(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2A355
{
	if ((((func_542(iParam2) || func_511(iParam2)) && uParam1->f_1 == 1) && !func_506(uParam1)) && func_64(uParam1->f_318))
	{
		switch (iParam3)
		{
			case 0:
				return 1;
				break;
			
			case 2:
				if ((uParam0[iParam2 /*21*/])->f_2)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case 1:
				if ((uParam0[iParam2 /*21*/])->f_3 && (uParam0[uParam1->f_277 /*21*/])->f_4 == 0)
				{
					return 1;
				}
				else
				{
					if (!(uParam0[iParam2 /*21*/])->f_3)
					{
					}
					if ((uParam0[uParam1->f_277 /*21*/])->f_4 == 1)
					{
					}
					return 0;
				}
				break;
			}
	}
	return 1;
}

int func_506(var uParam0)//Position - 0x2A417
{
	if (((((unk_0x74C475EB8E73D398(uParam0->f_333, func_507(0, 0)) || unk_0x74C475EB8E73D398(uParam0->f_333, func_507(1, 0))) || unk_0x74C475EB8E73D398(uParam0->f_333, func_507(2, 0))) || unk_0x74C475EB8E73D398(uParam0->f_333, func_507(0, 1))) || unk_0x74C475EB8E73D398(uParam0->f_333, func_507(1, 1))) || unk_0x74C475EB8E73D398(uParam0->f_333, func_507(2, 1)))
	{
		return 1;
	}
	return 0;
}

char* func_507(int iParam0, bool bParam1)//Position - 0x2A49F
{
	char* sVar0;
	
	sVar0 = "";
	if (bParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@";
				break;
			
			case 1:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@";
				break;
			
			case 2:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@";
				break;
			
			case 3:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@";
				break;
			
			case 1:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@";
				break;
			
			case 2:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@";
				break;
			
			case 3:
				sVar0 = "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@";
				break;
			}
	}
	return sVar0;
}

int func_508()//Position - 0x2A53E
{
	if (((((((((((((((((((((((unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_A", 3) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "BASE", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "BASE", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "BASE", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "BASE", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "BASE", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "BASE", 3))
	{
		return 1;
	}
	return 0;
}

bool func_509(var uParam0)//Position - 0x2A770
{
	return uParam0->f_329;
}

int func_510(int iParam0)//Position - 0x2A77D
{
	if (func_542(iParam0) && func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
	{
		return 1;
	}
	else if (iParam0 < 8 && func_164(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

int func_511(int iParam0)//Position - 0x2A7D5
{
	if (func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
	{
		if (iParam0 > 7 && iParam0 < 11)
		{
			return 1;
		}
	}
	return 0;
}

void func_512(int iParam0, int iParam1)//Position - 0x2A80A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return;
	}
	iVar0 = 20000;
	if (unk_0x3A711520F83BAE98())
	{
		iVar0 *= 3;
	}
	else if (unk_0x74C475EB8E73D398(unk_0x436287B7DB306165(), "ob_drinking_shots"))
	{
		iVar0 *= 2;
	}
	if (!func_529(iParam0))
	{
		func_527(iParam0, iVar0, 0);
		func_524(iVar0, iVar0, 0,3f, func_525(), iParam1, 0);
		iVar1 = func_523(iParam0);
		if (iVar1 == -1)
		{
			iVar2 = func_522(iVar1);
			if (!iVar2 == -1)
			{
				Global_36796[iVar2 /*5*/].f_3++;
			}
		}
	}
	else
	{
		iVar3 = func_523(iParam0);
		iVar4 = -1;
		if (iVar3 == -1)
		{
			iVar4 = func_522(iVar3);
			if (!iVar4 == -1)
			{
				Global_36796[iVar4 /*5*/].f_3++;
			}
		}
		Global_36961 = (Global_36961 + iVar0);
		func_519(iParam0, iVar0);
	}
	if (func_518(iParam0) >= 2)
	{
		Global_36966 = 0,25f;
		if (unk_0xAB019B170BF1309C(&Global_36967))
		{
			StringCopy(&Global_36967, "DRUNK", 16);
		}
	}
	iVar5 = func_523(iParam0);
	if (iVar5 == -1)
	{
		iVar6 = func_522(iVar5);
		if (!iVar6 == -1)
		{
		}
		return;
	}
	func_513(1, iVar5, 3, iParam0);
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2A945
{
	func_514(iParam0, iParam1, iParam2, iParam3, 0);
}

void func_514(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2A95A
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_516(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_515();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36877[iVar0 /*5*/] = iParam0;
	Global_36877[iVar0 /*5*/].f_1 = iParam1;
	Global_36877[iVar0 /*5*/].f_2 = iParam2;
	Global_36877[iVar0 /*5*/].f_3 = iParam3;
	Global_36877[iVar0 /*5*/].f_4 = iParam4;
}

int func_515()//Position - 0x2A9D1
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36877[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_516(int iParam0, int iParam1, int iParam2)//Position - 0x2AA02
{
	if (func_517(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_517(int iParam0, int iParam1, int iParam2)//Position - 0x2AA1D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36877[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36877[iVar0 /*5*/])
			{
				if (iParam1 == Global_36877[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_518(int iParam0)//Position - 0x2AA69
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = func_523(iParam0);
	iVar1 = func_522(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36796[iVar1 /*5*/].f_3;
}

void func_519(int iParam0, int iParam1)//Position - 0x2AAAC
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = func_523(iParam0);
	iVar1 = -1;
	if (iVar0 == -1)
	{
		iVar1 = func_521(iParam0);
		if (!iVar1 == -1)
		{
			Global_36770[iVar1 /*5*/].f_3 = (Global_36770[iVar1 /*5*/].f_3 + iParam1);
			Global_36770[iVar1 /*5*/].f_2 = (Global_36770[iVar1 /*5*/].f_2 + iParam1);
		}
		return;
	}
	func_520(1, iVar0, 2, iParam1);
}

void func_520(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2AB2B
{
	func_514(iParam0, iParam1, iParam2, 0, iParam3);
}

int func_521(int iParam0)//Position - 0x2AB40
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36770[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_522(int iParam0)//Position - 0x2AB71
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_523(int iParam0)//Position - 0x2ABA1
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
		{
			return Global_36796[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

void func_524(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x2ABE2
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_36959)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!unk_0x4D09F78E02924CE0())
	{
		unk_0x2269709BAFC7A1E5("DRUNK_SHAKE", fParam3);
	}
	if (!unk_0xE4D04BC85D5121A4())
	{
		unk_0x48256C3D23186EAF("DRUNK_SHAKE", (fParam3 * Global_36958));
	}
	if (unk_0x8EA3C8E091EA5BA4(iParam4))
	{
		unk_0x7E4FCDC8BAD0CF6D(iParam4, "DRUNK_SHAKE", fParam3);
		Global_36960 = iParam4;
	}
	else
	{
		Global_36960 = 0;
	}
	Global_36959 = 1;
	iVar0 = unk_0x53C562FD2B9E3AB0();
	Global_36961 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_36961 = -1;
		}
	}
	Global_36962 = iParam1;
	Global_36963 = fParam2;
	Global_36965 = fParam3;
	Global_36964 = fParam3;
}

float func_525()//Position - 0x2AC9D
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 0,1f;
	iVar1 = func_518(unk_0xFC1458A37D98B502());
	iVar2 = func_526(unk_0xFC1458A37D98B502());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0,1f;
		}
		else
		{
			fVar0 = (system::to_float(iVar1) / system::to_float(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0,1f;
	}
	else
	{
		fVar0 = (system::to_float(iVar2) / system::to_float(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_526(int iParam0)//Position - 0x2AD1C
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = func_523(iParam0);
	iVar1 = func_522(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36796[iVar1 /*5*/].f_4;
}

int func_527(int iParam0, int iParam1, bool bParam2)//Position - 0x2AD5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return 0;
	}
	iVar0 = func_523(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_521(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_528();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_36770[iVar2 /*5*/] = 0;
	Global_36770[iVar2 /*5*/].f_1 = iParam0;
	Global_36770[iVar2 /*5*/].f_2 = iParam1;
	Global_36770[iVar2 /*5*/].f_3 = iParam1;
	Global_36770[iVar2 /*5*/].f_4 = 0;
	if (iParam0 == unk_0xFC1458A37D98B502())
	{
		Global_36991 = 1;
	}
	Global_36769++;
	return 1;
}

int func_528()//Position - 0x2AE1B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_36770[iVar0 /*5*/] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_529(int iParam0)//Position - 0x2AE4A
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_530(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_530(int iParam0)//Position - 0x2AE6B
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36796[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_531(var uParam0)//Position - 0x2AEB4
{
	if (!uParam0->f_443 && !func_581())
	{
		return 0;
	}
	if (!uParam0->f_444)
	{
		return 1;
	}
	return 0;
}

int func_532(float fParam0, float fParam1, float fParam2)//Position - 0x2AEE1
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_533(var uParam0, var uParam1, int iParam2)//Position - 0x2AF56
{
	vector3 vVar0;
	
	if (!func_531(uParam0))
	{
		*uParam1 = { unk_0x09E51060F59912ED(uParam0->f_333, "enter", uParam0->f_279, uParam0->f_279.f_3, 0, 2) };
		vVar0 = { unk_0x4AA2C5A4980B3F34(uParam0->f_333, "enter", uParam0->f_279, uParam0->f_279.f_3, 0f, 2) };
	}
	else
	{
		*uParam1 = { unk_0x09E51060F59912ED(uParam0->f_333, "enter_LEFT", uParam0->f_279, uParam0->f_279.f_3, 0, 2) };
		vVar0 = { unk_0x4AA2C5A4980B3F34(uParam0->f_333, "enter_LEFT", uParam0->f_279, uParam0->f_279.f_3, 0f, 2) };
	}
	*iParam2 = vVar0.z;
}

int func_534(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2AFFE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0xA8388473C755363D(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			iVar3 = unk_0x5088CF774DF6D935(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x29E49EE03BC36422(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0x6407D3750DB405F3(iParam0, iVar2, &iVar3);
			}
		}
	}
	vVar5 = { unk_0xB3328BA8976B416C(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		vVar5 = { iParam4, iParam5, iParam6 };
	}
	while (func_538(iVar2, iVar6) != 0)
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (unk_0xB1C7BCEE5648EB7D(iParam0, iVar2, func_538(iVar2, iVar6)))
			{
				if (func_537(func_538(iVar2, iVar6)))
				{
					iVar7 = unk_0x7FAE56FC172FD992(func_538(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	iVar1 = unk_0xD50A2A2DB03A5CF0(iVar2, iVar3, vVar5, iVar0, 1065353216, iVar7, iParam7, iParam8);
	while (func_538(iVar2, iVar6) != 0)
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			if (unk_0xB1C7BCEE5648EB7D(iParam0, iVar2, func_538(iVar2, iVar6)))
			{
				unk_0x0DF81B88D0C53746(iVar1, func_538(iVar2, iVar6));
				func_535(iVar1, func_538(iVar2, iVar6));
			}
		}
		iVar6++;
	}
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (unk_0xA8388473C755363D(iParam0, iVar2, 0))
		{
			unk_0x63CDEB6D58456C0A(iVar1, unk_0x3CC6ABB1D2EC7E28(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_535(int iParam0, int iParam1)//Position - 0x2B172
{
	int iVar0;
	
	iVar0 = func_536(iParam1);
	if (iVar0 != 0)
	{
		unk_0x0DF81B88D0C53746(iParam0, iVar0);
	}
}

int func_536(int iParam0)//Position - 0x2B190
{
	switch (iParam0)
	{
		case 1550611612:
			return -1258515792;
			break;
		
		case 368550800:
			return 438243936;
			break;
		
		case -1769069349:
			return -455079056;
			break;
		
		case 24902297:
			return 740920107;
			break;
		
		case -228041614:
			return -541616347;
			break;
		
		case -584961562:
			return 1809261196;
			break;
		
		case -1153175946:
			return -1646538868;
			break;
		
		case 1301287696:
			return -1290164948;
			break;
		
		case 1597093459:
			return -964465134;
			break;
		
		case 1769871776:
			return 1135718771;
			break;
		
		case -1827882671:
			return 1253942266;
			break;
		
		case 259780317:
			return -403805974;
			break;
		
		case -1973342474:
			return 691432737;
			break;
		
		case 1996130345:
			return 987648331;
			break;
		
		case -1455657812:
			return -431680535;
			break;
		
		case -1668263084:
			return -847582310;
			break;
		
		case 1308243489:
			return -92592218;
			break;
		
		case 1122574335:
			return -494548326;
			break;
		
		case 1420313469:
			return 730876697;
			break;
		
		case 109848390:
			return 583159708;
			break;
		
		case 593945703:
			return -1928503603;
			break;
		
		case 1142457062:
			return 520557834;
			break;
	}
	return 0;
}

int func_537(int iParam0)//Position - 0x2B316
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == 1623028892)
	{
		return 1;
	}
	return 0;
}

int func_538(int iParam0, int iParam1)//Position - 0x2B4EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					iVar0 = -2067221805;
					break;
				
				case 1:
					iVar0 = -1820405577;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_540(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x16DE9AAC68A15A81(iVar1))
					{
						if (unk_0x768809DD20D4F552(iVar1, iVar2, &Var5))
						{
							if (!func_539(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_539(int iParam0)//Position - 0x2C060
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_540(int iParam0, var uParam1)//Position - 0x2C0FB
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x359D12B4F89DA5D6();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xD10DDFA63A9D9BDA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_541(var uParam0, var uParam1, int iParam2)//Position - 0x2C136
{
	if ((uParam0[iParam2 /*21*/])->f_2 == 1)
	{
		if (unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_5))
		{
			if (func_488((uParam0[iParam2 /*21*/])->f_5))
			{
				unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055((uParam0[iParam2 /*21*/])->f_5), false, 0);
			}
			else if (!func_488((uParam0[iParam2 /*21*/])->f_7))
			{
			}
		}
	}
	if ((uParam0[iParam2 /*21*/])->f_3 == 1)
	{
		if (unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_7) && unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_8))
		{
			if (func_488((uParam0[iParam2 /*21*/])->f_7) && func_488((uParam0[iParam2 /*21*/])->f_8))
			{
				unk_0xB18E1DBC397238E1(unk_0x29AB7D6D0DE18055((uParam0[iParam2 /*21*/])->f_7), false, 0);
			}
			else
			{
				if (!func_488((uParam0[iParam2 /*21*/])->f_8))
				{
				}
				if (!func_488((uParam0[iParam2 /*21*/])->f_7))
				{
				}
			}
		}
	}
	if (unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_8))
	{
		if (unk_0xDE3C98B57A41E603(unk_0x29AB7D6D0DE18055((uParam0[iParam2 /*21*/])->f_8)))
		{
			(uParam0[uParam1->f_277 /*21*/])->f_4 = 1;
		}
	}
	if ((uParam0[iParam2 /*21*/])->f_3 && (uParam0[iParam2 /*21*/])->f_2)
	{
		if ((unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_5) && unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_7)) && unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_8))
		{
			return 1;
		}
		if (!unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_5))
		{
		}
		if (!unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_7))
		{
		}
		if (!func_488((uParam0[iParam2 /*21*/])->f_8))
		{
		}
		return 0;
	}
	if ((uParam0[iParam2 /*21*/])->f_3 && !(uParam0[iParam2 /*21*/])->f_2)
	{
		if (!unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_7) || !unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_8))
		{
		}
		else
		{
			return 1;
		}
		return 0;
	}
	if (!(uParam0[iParam2 /*21*/])->f_3 && (uParam0[iParam2 /*21*/])->f_2)
	{
		if (!unk_0x918CA1BFFAA03556((uParam0[iParam2 /*21*/])->f_5))
		{
		}
		else
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_542(int iParam0)//Position - 0x2C339
{
	if (func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
	{
		if (iParam0 > -1 && iParam0 < 6)
		{
			return 1;
		}
	}
	if (func_164(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1))
	{
		if (iParam0 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_543(var uParam0, var uParam1)//Position - 0x2C38F
{
	if (!unk_0x6ADD12BF4D6D2587(uParam0->f_319))
	{
		if (uParam0->f_443 || func_581())
		{
			if (unk_0x93C304998B457C45(uParam1->f_462[0]))
			{
				if (unk_0xE53FD7AF7F25C0A8(uParam1->f_462[0]))
				{
					uParam0->f_319 = unk_0xE8BC72FED1586931(uParam1->f_462[0]);
					uParam0->f_279 = { unk_0xB3328BA8976B416C(uParam0->f_319, 1) };
					uParam0->f_279.f_3 = { unk_0xDB824D597B53CC40(uParam0->f_319, 2) };
					return 1;
				}
				else
				{
					func_488(uParam1->f_462[uParam0->f_277]);
				}
			}
			else
			{
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_544(int iParam0)//Position - 0x2C433
{
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x4CDD2D1D66ED1DE4(iParam0, 5) != 0 && !func_545(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_545(int iParam0)//Position - 0x2C462
{
	if (unk_0x6C297174CFC8C5B2(unk_0xE1AE92097550A727(iParam0, 5, unk_0x4CDD2D1D66ED1DE4(iParam0, 5), unk_0xDCC2BD4C56470D10(iParam0, 5)), -642523719, 0))
	{
		return 1;
	}
	return 0;
}

float func_546(var uParam0)//Position - 0x2C491
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	func_46(uParam0->f_318, 820, &vVar0, func_51(uParam0->f_318), 0);
	vVar3 = { vVar0 };
	vVar2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	vVar1 = { (vVar3.x - vVar2.x), (vVar3.y - vVar2.y), 0f };
	fVar4 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
	fVar5 = unk_0xA67DD8488EBA5F6D(vVar1.x, vVar1.y);
	fVar6 = unk_0xE97272C977DEADD3((fVar4 - fVar5));
	return fVar6;
}

int func_547(int iParam0)//Position - 0x2C4FC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_548(iParam0, 9);
	}
	return 0;
}

bool func_548(int iParam0, int iParam1)//Position - 0x2C51A
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

bool func_549(int iParam0)//Position - 0x2C535
{
	return func_550(iParam0) > 0;
}

int func_550(int iParam0)//Position - 0x2C545
{
	int iVar0;
	int iVar1;
	
	if (func_816(iParam0, 0, 1))
	{
		if (Global_1627537[iParam0 /*532*/].f_11.f_175 != -1)
		{
			iVar0 = Global_1627537[iParam0 /*532*/].f_11.f_175;
		}
		else
		{
			iVar0 = func_552(joaat("mpply_vipgameplaydisabledtimer"));
		}
		iVar1 = ((iVar0 + func_551()) - unk_0xE3CCAFB1555348DF());
		return iVar1;
	}
	return -1;
}

int func_551()//Position - 0x2C59A
{
	return Global_262145.f_14277;
}

int func_552(int iParam0)//Position - 0x2C5A9
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xFA3CE529DBB66C85(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_553()//Position - 0x2C5C7
{
	return Global_262145.f_11706;
}

int func_554()//Position - 0x2C5D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar2))
		{
			if (func_436(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

char* func_555(int iParam0)//Position - 0x2C613
{
	if (func_492(unk_0x9EB17624F44A8DA4()))
	{
		switch (iParam0)
		{
			case 0:
				return "BUNK_PC_BLCK_M";
			
			case 1:
				return "BUNK_PC_BLCK";
			
			case 2:
				return "BUNK_PC_BLCK2";
			
			case 3:
				return "BUNK_PC_BLCK3";
			
			case 4:
				return "BUNK_PC_BLCK4";
			}
		
		default:
	}
	if (func_37(unk_0x9EB17624F44A8DA4()))
	{
		switch (iParam0)
		{
			case 0:
				return "BUNK_PC_BLCK_M";
			
			case 1:
				return "HANG_PC_BLCK";
			
			case 2:
				return "BUNK_PC_BLCK2";
			
			case 3:
				return "BUNK_PC_BLCK3";
			
			case 4:
				return "BUNK_PC_BLCK4";
			}
		
		default:
	}
	return "UNKNOWN REASON";
}

int func_556()//Position - 0x2C6C5
{
	if (func_557())
	{
		return 1;
	}
	return Global_2447174.f_631;
}

bool func_557()//Position - 0x2C6DF
{
	return Global_1312814 == 10;
}

char* func_558(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x2C6EE
{
	char* sVar0;
	
	if (func_64(uParam0->f_318))
	{
		if (func_567(uParam0, iParam1))
		{
			if (bParam2)
			{
				sVar0 = "ANIM@AMB@OFFICE@BOSS@FEMALE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@OFFICE@BOSS@MALE@";
			}
		}
		else if (func_510(iParam1))
		{
			if (!bParam3)
			{
				sVar0 = func_559(uParam0, iParam1, bParam2);
			}
			else if (bParam2)
			{
				sVar0 = "ANIM@AMB@OFFICE@BOSS@FEMALE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@OFFICE@BOSS@MALE@";
			}
		}
		else if (func_565(iParam1))
		{
			if (bParam2)
			{
				sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@BOSS@FEMALE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@BOSS@MALE@";
			}
		}
		else if (func_511(iParam1))
		{
			sVar0 = func_559(uParam0, iParam1, bParam2);
		}
	}
	else if (func_164(uParam0->f_318, -1))
	{
		if (func_567(uParam0, iParam1))
		{
			if (bParam2)
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@BOSS@FEMALE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@BOSS@MALE@";
			}
		}
		else if (!func_565(iParam1))
		{
			if (!bParam3)
			{
				sVar0 = func_559(uParam0, iParam1, bParam2);
			}
			else if (bParam2)
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@BOSS@FEMALE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@BOSS@MALE@";
			}
		}
		else if (func_565(iParam1))
		{
			if (bParam2)
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@FEMALE@BASE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@MALE@BASE@";
			}
		}
		else if (func_511(iParam1))
		{
			sVar0 = func_559(uParam0, iParam1, bParam2);
		}
	}
	else if (uParam0->f_443 || func_581())
	{
		if (bParam2)
		{
			sVar0 = "ANIM@AMB@CLUBHOUSE@BOSS@FEMALE@";
		}
		else
		{
			sVar0 = "ANIM@AMB@CLUBHOUSE@BOSS@MALE@";
		}
	}
	return sVar0;
}

var func_559(var uParam0, int iParam1, bool bParam2)//Position - 0x2C856
{
	var uVar0;
	
	uVar0 = func_560(uParam0, iParam1, bParam2);
	return uVar0;
}

var func_560(var uParam0, int iParam1, int iParam2)//Position - 0x2C86C
{
	var uVar0;
	
	uVar0 = func_561(uParam0->f_3[iParam1 /*21*/], iParam2);
	uParam0->f_2 = uParam0->f_3[iParam1 /*21*/];
	return uVar0;
}

char* func_561(int iParam0, int iParam1)//Position - 0x2C892
{
	char* sVar0;
	
	sVar0 = "";
	if (func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
	{
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_A@BASE@";
					break;
				
				case 1:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_B@BASE@";
					break;
				
				case 2:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_C@BASE@";
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_A@BASE@";
					break;
				
				case 1:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_B@BASE@";
					break;
				
				case 2:
					sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_C@BASE@";
					break;
				}
		}
	}
	else if (func_164(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1))
	{
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_A@BASE@";
					break;
				
				case 1:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_B@BASE@";
					break;
				
				case 2:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_C@BASE@";
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_A@BASE@";
					break;
				
				case 1:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_B@BASE@";
					break;
				
				case 2:
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_C@BASE@";
					break;
				}
			}
	}
	return sVar0;
}

bool func_562()//Position - 0x2C9B6
{
	return func_563(unk_0x9EB17624F44A8DA4());
}

int func_563(int iParam0)//Position - 0x2C9C6
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_564(var uParam0, int iParam1)//Position - 0x2C9E5
{
	if ((iLocal_163 == iParam1 && func_64(uParam0->f_318)) || func_565(iParam1))
	{
		return 0;
	}
	return 1;
}

int func_565(int iParam0)//Position - 0x2CA14
{
	if (func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
	{
		if (iParam0 == iLocal_164)
		{
			return 1;
		}
	}
	if (func_164(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1))
	{
		if (iParam0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_566(var uParam0, int iParam1)//Position - 0x2CA61
{
	if (uParam0->f_329 != iParam1)
	{
		uParam0->f_329 = iParam1;
	}
}

int func_567(var uParam0, int iParam1)//Position - 0x2CA7A
{
	if (func_64(uParam0->f_318) || func_164(uParam0->f_318, -1))
	{
		if (iParam1 == iLocal_163)
		{
			return 1;
		}
	}
	if (uParam0->f_443)
	{
		if (iParam1 == iLocal_165)
		{
			return 1;
		}
	}
	if (func_492(unk_0x9EB17624F44A8DA4()))
	{
		if (iParam1 == iLocal_166)
		{
			return 1;
		}
	}
	if (func_37(unk_0x9EB17624F44A8DA4()))
	{
		return iParam1 == iLocal_167;
	}
	return 0;
}

void func_568(var uParam0, int iParam1)//Position - 0x2CAE6
{
	if (func_246("MPJAC_NO_SIT") || func_246("MPOFFCH_NO_SIT"))
	{
		func_18(&(uParam0->f_320));
		unk_0x3E80C2F7BC665259(1);
	}
	if (uParam0->f_320 == -1)
	{
		if (iParam1 && func_64(uParam0->f_318))
		{
			func_361(&(uParam0->f_320), 4, "MPTV_WALKOFF", 0, 0, 0, 0);
		}
		else
		{
			func_361(&(uParam0->f_320), 4, "MPJAC_SIT", 0, 0, 0, 0);
		}
	}
}

int func_569()//Position - 0x2CB58
{
	if (func_246("MPJAC_SIT") || func_246("MPTV_WALKOFF"))
	{
		return 1;
	}
	return 0;
}

int func_570()//Position - 0x2CB7E
{
	if (func_246("GB_REACTIVATE"))
	{
		return 1;
	}
	return 0;
}

int func_571(var uParam0, int iParam1, int iParam2)//Position - 0x2CB96
{
	if ((iLocal_163 == iParam1 && func_64(uParam0->f_318)) || (iParam1 == 8 && func_164(uParam0->f_318, -1)))
	{
		if (Global_1595537 == iParam2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_579())
	{
		if (func_581())
		{
			if ((func_436(unk_0x9EB17624F44A8DA4()) && !func_547(unk_0x9EB17624F44A8DA4())) && !func_556())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_565(iParam1) && !uParam0->f_443)
	{
		if (Global_1595537 == iParam2)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (uParam0->f_443 && !func_572())
	{
		return 0;
	}
	return 1;
}

int func_572()//Position - 0x2CC64
{
	if (func_57(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xC80D31E4B587871C(Global_1669535.f_16, 0) || unk_0xC80D31E4B587871C(Global_1669535.f_16, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_573()//Position - 0x2CC9B
{
	if (func_252() || Global_69671)
	{
		return 1;
	}
	return 0;
}

int func_574(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x2CCB9
{
	int iVar0;
	int iVar1;
	
	if (!func_564(uParam0, uParam0->f_316))
	{
		return 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xB72D370CB7ABC3EF())
		{
			if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar0)))
			{
				iVar1 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar0));
				if (iVar1 != unk_0x9EB17624F44A8DA4())
				{
					if (func_816(iVar1, 1, 1))
					{
						if (unk_0x0F3033474C49912D(unk_0x25D049AAC4603E65(iVar1), vParam1, vParam2, fParam3, 0, 1, 0))
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

Vector3 func_575(bool bParam0)//Position - 0x2CD38
{
	if (bParam0)
	{
		return vLocal_168;
	}
	else
	{
		return vLocal_169;
	}
	return 0f, 0f, 0f;
}

int func_576(var uParam0)//Position - 0x2CD59
{
	if (func_492(unk_0x9EB17624F44A8DA4()))
	{
		return func_578(uParam0);
	}
	if (func_37(unk_0x9EB17624F44A8DA4()))
	{
		return func_577(uParam0);
	}
	return 0;
}

int func_577(var uParam0)//Position - 0x2CD8A
{
	if (unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1239,516f, -3001,939f, -43,86696f, -1239,059f, -3001,063f, -42,42946f, 1f, 0, 1, 0))
	{
		uParam0->f_444 = 0;
		return 1;
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), -1240,349f, -3002,046f, -43,86696f, -1240,945f, -3000,921f, -42,42946f, 1f, 0, 1, 0))
	{
		uParam0->f_444 = 1;
		return 1;
	}
	return 0;
}

int func_578(var uParam0)//Position - 0x2CE13
{
	if (unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()))
	{
		return 0;
	}
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 907,2947f, -3206,696f, -98,18789f, 908,212f, -3207,899f, -96,43789f, 1,3125f, 0, 1, 0))
	{
		uParam0->f_444 = 1;
		return 1;
	}
	else if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 909,0947f, -3205,729f, -98,18805f, 909,59f, -3207,126f, -96,4381f, 1f, 0, 1, 0))
	{
		uParam0->f_444 = 0;
		return 1;
	}
	return 0;
}

int func_579()//Position - 0x2CEA0
{
	if (func_492(unk_0x9EB17624F44A8DA4()) || func_37(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	return 0;
}

void func_580(var uParam0, var uParam1)//Position - 0x2CEC6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		uParam0->f_3[iVar0 /*21*/] = (*uParam1)[iVar0 /*21*/];
		iVar0++;
	}
}

int func_581()//Position - 0x2CEF2
{
	if (func_583() || func_582())
	{
		return 1;
	}
	return 0;
}

int func_582()//Position - 0x2CF10
{
	if (unk_0xC80D31E4B587871C(Global_1669535.f_16, 30))
	{
		return 1;
	}
	return 0;
}

int func_583()//Position - 0x2CF2C
{
	if (unk_0xC80D31E4B587871C(Global_1669535.f_16, 31))
	{
		return 1;
	}
	return 0;
}

void func_584(var uParam0)//Position - 0x2CF48
{
	char* sVar0;
	bool bVar1;
	
	if (func_509(uParam0))
	{
		bVar1 = false;
		if (uParam0->f_443)
		{
			sVar0 = "appImportExport";
			bVar1 = true;
		}
		else if (func_583())
		{
			sVar0 = "appBunkerBusiness";
			bVar1 = true;
		}
		else if (func_582())
		{
			sVar0 = "appSmuggler";
			bVar1 = true;
		}
		if (unk_0x8F38E94BBF3404CD(unk_0x8B948C59217A295D(sVar0)) >= 1 || !bVar1)
		{
			func_566(uParam0, 0);
			return;
		}
		if (unk_0x3B6F9DF9C5FEB3A4(sVar0))
		{
			system::start_new_script(sVar0, 1424);
			func_566(uParam0, 0);
			unk_0x9D2418D7FC697249(sVar0);
		}
		else
		{
			unk_0xD9E2C360120FEB7C(sVar0);
		}
	}
}

void func_585(var uParam0)//Position - 0x2CFDE
{
	switch (*uParam0)
	{
		case 2:
		case 3:
		case 1:
			break;
		
		case 5:
		case 6:
		case 7:
		case 4:
		case 9:
		case 10:
		case 16:
		case 17:
		case 18:
		case 12:
			unk_0x3A257DFDA1E817FD();
			unk_0xD3F2448EEDC2073A(0);
			unk_0xB4EC0371FF9BD363(0);
			unk_0x553231E7FC3C570D(19);
			unk_0x553231E7FC3C570D(2);
			unk_0xFBC7FEE83651FB30();
			func_353(1);
			func_371(0);
			func_288();
			break;
	}
}

void func_586(var uParam0)//Position - 0x2D06D
{
	switch (*uParam0)
	{
		case 6:
		case 7:
		case 9:
		case 10:
		case 16:
		case 17:
		case 18:
		case 12:
			if (unk_0x6ADD12BF4D6D2587(uParam0->f_319))
			{
				if (func_164(uParam0->f_318, 97) && Global_2456857 == 8)
				{
				}
				else
				{
					unk_0x91AD7123A61E33F8(unk_0xFC1458A37D98B502(), 0,25f);
				}
				unk_0x3B60E1A32FD1AE85(uParam0->f_319);
				if (*uParam0 != 11 && *uParam0 != 12)
				{
					unk_0xA55D009D02766A03(unk_0xFC1458A37D98B502(), uParam0->f_319, 1);
				}
			}
			break;
		
		case 3:
		case 4:
		case 5:
			if (func_37(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x91AD7123A61E33F8(unk_0xFC1458A37D98B502(), 0,15f);
			}
			break;
	}
}

void func_587(var uParam0, var uParam1)//Position - 0x2D13E
{
	int iVar0;
	
	iVar0 = unk_0x45D90ED1F569A489(uParam1->f_278);
	if (unk_0xD56F740235B1E8F0(iVar0) && uParam1->f_277 > -1)
	{
		func_588(uParam1, uParam0);
	}
}

void func_588(var uParam0, var uParam1)//Position - 0x2D16E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -435819185))
	{
		func_708(&iVar0, &iVar1, &iVar2, &iVar3, 0);
		if (((iVar0 > 31 || iVar1 > 31) || iVar2 > 31) || iVar3 > 31)
		{
			func_243(uParam0, 13);
		}
	}
	if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -1322051853))
	{
		func_490(uParam0);
	}
	else
	{
		func_589(uParam0, uParam1);
	}
}

void func_589(var uParam0, var uParam1)//Position - 0x2D1E5
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	unk_0xD67F08F0EFD84A54(2);
	unk_0x4FB260623DD93924(0, 24, 1);
	unk_0x4FB260623DD93924(0, 257, 1);
	unk_0x4FB260623DD93924(0, 142, 1);
	unk_0x4FB260623DD93924(0, 141, 1);
	unk_0x4FB260623DD93924(0, 140, 1);
	unk_0x4FB260623DD93924(0, 263, 1);
	unk_0x4FB260623DD93924(0, 264, 1);
	unk_0x4FB260623DD93924(0, 143, 1);
	unk_0x4FB260623DD93924(2, 200, 1);
	if (Global_68219)
	{
	}
	if (((((((!unk_0x0F30C1F1717A6437() && !Global_68219) && !func_573()) && !func_26(0)) && !func_363()) && !func_366()) && !func_706(1)) && !func_705())
	{
		if (*uParam0 > 5)
		{
			if (!func_246("PROP_OFF_M_6") && !func_246("PROP_OFF_M_6F"))
			{
				if (!func_567(uParam0, uParam0->f_277))
				{
					func_703(uParam0);
				}
				else if ((((func_567(uParam0, uParam0->f_277) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), uParam0->f_333, "exit", 3)) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), uParam0->f_333, "exit_left", 3)) && *uParam0 != 17) && (!func_246("IE_MOD_ASSL") || !uParam0->f_443))
				{
					func_700(uParam0);
				}
			}
		}
		if (*uParam0 > 5 && *uParam0 != 12)
		{
			func_708(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (unk_0x4C4813CAAD70E814(2))
			{
				iVar4 = 225;
			}
			else
			{
				iVar4 = 190;
			}
			if (iVar0 > 64)
			{
				if (func_510(uParam0->f_277))
				{
					if (func_699(uParam0) && !unk_0xF2B58F79D29425B4(2, iVar4))
					{
						if (func_250() || func_249())
						{
						}
						uParam0->f_327 = 1;
						uParam0->f_333 = func_698(uParam0, 1);
						func_243(uParam0, func_697(uParam0, 0));
					}
				}
			}
			if (iVar0 < -64)
			{
				if (func_510(uParam0->f_277))
				{
					if (func_696(uParam0) && !unk_0xF2B58F79D29425B4(2, iVar4))
					{
						if (func_250() || func_249())
						{
						}
						uParam0->f_328 = 1;
						uParam0->f_333 = func_698(uParam0, 0);
						func_243(uParam0, func_697(uParam0, 1));
					}
				}
			}
			if (((((unk_0xE8C126B7ADBB9D63(2, iVar4) && !unk_0xF2B58F79D29425B4(2, 201)) && !func_246("PROP_OFF_M_6")) && !func_246("PROP_OFF_M_6F")) && !Global_69671) || Global_69673)
			{
				Global_69673 = 0;
				uParam0->f_278 = unk_0x9CEC233AE69E2D39(unk_0xB3328BA8976B416C(uParam0->f_319, 1), unk_0xDB824D597B53CC40(uParam0->f_319, 2), 2, 1, 0, 1065353216, 0, 1065353216);
				if (func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
				{
					if (func_565(uParam0->f_277) && !unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0))
					{
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "exit_B", 1,5f, -1,5f, 5, 16, 1,5f, 4);
						unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "exit_b_chair", 4f, -4f, 5);
					}
					else if (func_510(uParam0->f_277) && uParam0->f_1 != 1)
					{
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "exit_seat", 4f, -4f, 5, 16, 1000f, 0);
						unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "exit_seat_chair", 4f, -4f, 5);
					}
					else
					{
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "exit", 4f, -4f, 5, 16, 1000f, 0);
						unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "exit_chair", 4f, -4f, 5);
					}
				}
				else if (func_164(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1))
				{
					if (func_510(uParam0->f_277) && uParam0->f_1 != 1)
					{
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "exit_seat", 4f, -4f, 5, 16, 1000f, 0);
						unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "exit_seat_chair", 4f, -4f, 5);
					}
					else
					{
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "exit", 4f, -4f, 5, 16, 1000f, 0);
						unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "exit_chair", 4f, -4f, 5);
					}
				}
				else if (uParam0->f_443 || func_581())
				{
					if (!func_531(uParam0))
					{
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "exit", 4f, -4f, 5, 16, 1000f, 0);
						unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "exit_chair", 4f, -4f, 5);
					}
					else
					{
						unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), uParam0->f_278, uParam0->f_333, "exit_left", 4f, -4f, 5, 16, 1000f, 0);
						unk_0xF6DCDEEE0FC03E91(uParam0->f_319, uParam0->f_278, uParam0->f_333, "exit_left_chair", 4f, -4f, 5);
					}
				}
				if ((func_565(uParam0->f_277) && unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0)) && func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17))
				{
					unk_0xF6DCDEEE0FC03E91(unk_0x855B7BD6B441CDEB(uParam0->f_436), uParam0->f_278, uParam0->f_333, "exit_weapon", 4f, -4f, 32773);
				}
				if (func_542(uParam0->f_277))
				{
					if ((uParam1[uParam0->f_277 /*21*/])->f_2)
					{
						unk_0xF6DCDEEE0FC03E91(unk_0x29AB7D6D0DE18055((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_333, "exit_cigar", 4f, -4f, 32773);
					}
					if ((uParam1[uParam0->f_277 /*21*/])->f_3)
					{
						unk_0xF6DCDEEE0FC03E91(unk_0x29AB7D6D0DE18055((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_333, "exit_glass", 4f, -4f, 32773);
					}
				}
				unk_0x9C39944AA129D284(uParam0->f_278);
				if (func_250() || func_249())
				{
					if (uParam0->f_320 != -1)
					{
						func_18(&(uParam0->f_320));
					}
				}
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_330), 1);
				func_243(uParam0, 12);
			}
		}
	}
	else
	{
		if (func_573() || func_363())
		{
			if (func_193(&(uParam0->f_323)))
			{
				func_73(&(uParam0->f_323));
			}
			if (Global_68219 == 0)
			{
				Global_68219 = 1;
			}
		}
		if (func_695())
		{
			if (uParam0->f_320 != -1)
			{
				func_18(&(uParam0->f_320));
			}
		}
	}
	if (func_567(uParam0, uParam0->f_277))
	{
		if (((((((((!func_693(unk_0x9EB17624F44A8DA4()) && func_692(uParam0)) && !func_556()) && !func_363()) && !func_366()) && !func_706(1)) && !unk_0x0F30C1F1717A6437()) && !func_444(0)) && !unk_0x4916190900E76373()) && (((Global_1595537 == unk_0x9EB17624F44A8DA4() && !uParam0->f_443) || ((uParam0->f_443 && func_691()) && func_686(func_689(func_690())) == unk_0x9EB17624F44A8DA4())) || func_581()))
		{
			if ((((((!unk_0xAB019B170BF1309C(uParam0->f_333) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), uParam0->f_333, "exit", 3)) && !unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), uParam0->f_333, "exit_left", 3)) && *uParam0 != 17) && !unk_0xF2B58F79D29425B4(2, 190)) && unk_0xE8C126B7ADBB9D63(2, 201)) && !func_549(unk_0x9EB17624F44A8DA4()))
			{
				if (*uParam0 > 5)
				{
					if (!func_435(unk_0x9EB17624F44A8DA4(), 1) && func_554() < func_553())
					{
						func_682();
						if ((func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17) || uParam0->f_443) || func_581())
						{
							func_590(1, 0);
						}
						else if (func_164(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1))
						{
							func_590(1, 1);
						}
					}
					if (func_435(unk_0x9EB17624F44A8DA4(), 1))
					{
						if (uParam0->f_320 != -1)
						{
							func_18(&(uParam0->f_320));
						}
						func_243(uParam0, 16);
					}
				}
			}
		}
	}
	if (func_511(uParam0->f_277) && *uParam0 > 5)
	{
		if ((((!func_363() && !func_366()) && !func_706(1)) && !unk_0x0F30C1F1717A6437()) && !func_573())
		{
			if ((((!unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), uParam0->f_333, "exit", 3) && *uParam0 != 17) && !unk_0xF2B58F79D29425B4(2, 190)) && unk_0xE8C126B7ADBB9D63(2, 201)) && (!func_57(unk_0x9EB17624F44A8DA4()) || !func_496(unk_0x9EB17624F44A8DA4())))
			{
				if (*uParam0 > 5)
				{
					if (uParam0->f_320 != -1)
					{
						func_18(&(uParam0->f_320));
					}
					uParam0->f_333 = func_507(uParam0->f_2, func_562());
					func_243(uParam0, 22);
					func_566(uParam0, 1);
				}
			}
		}
	}
}

void func_590(bool bParam0, int iParam1)//Position - 0x2DB24
{
	struct<14> Var0;
	
	func_629(1, 1, iParam1);
	if (bParam0)
	{
		if (func_628(91) || func_628(98))
		{
			func_627();
		}
		func_682();
		func_626(17);
		Var0.f_2 = 1128645158;
		Var0.f_3 = iParam1;
		if (func_625(unk_0x9EB17624F44A8DA4()) && iParam1 == 0)
		{
			Var0.f_3 = 100;
		}
		func_624(Var0, func_93(0, 1));
		func_601();
		if (!func_625(unk_0x9EB17624F44A8DA4()) && iParam1 != 1)
		{
			func_591(82, "GB_TXTMSG_INIT", 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

int func_591(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x2DBC0
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_592(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_592(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x2DC58
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_79();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_104555.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_600() == 0)
	{
		func_598();
		return 0;
	}
	func_597(Global_16823);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104555.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104555.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104555.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104555.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104555.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xC80D31E4B587871C(Global_2323, 10))
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
		func_596(0);
		func_596(2);
		func_596(1);
	}
	else
	{
		func_79();
		switch (iParam16)
		{
			case 3:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_596(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_596(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_596(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_596(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 10))
		{
			Global_104555.f_14021[0 /*20*/].f_17 = 1;
			Global_104555.f_14021[1 /*20*/].f_17 = 1;
			Global_104555.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104555.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104555.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104555.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104555.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_79();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_226())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_595(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_593(1);
			func_595(Global_14434, "DISPLAY_VIEW", 1f, system::to_float(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_593(int iParam0)//Position - 0x2E10F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_85(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_337(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_594(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_594(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_594(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_594(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_594(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_337(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(Global_2329);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_337(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar7);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_337(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar8);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 8)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_337(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if ((iVar1 == 23 && unk_0x74C475EB8E73D398(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xC80D31E4B587871C(Global_2324, 6))
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_337(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_594(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_594(Global_14434, "SET_DATA_SLOT", system::to_float(1), system::to_float(iVar0), system::to_float(Global_2330[iVar1 /*15*/].f_10), system::to_float(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_594(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2E6B5
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam6));
	}
	if (!unk_0xAB019B170BF1309C(sParam7))
	{
		func_337(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(sParam8))
	{
		func_337(sParam8);
	}
	if (!unk_0xAB019B170BF1309C(sParam9))
	{
		func_337(sParam9);
	}
	if (!unk_0xAB019B170BF1309C(sParam10))
	{
		func_337(sParam10);
	}
	if (!unk_0xAB019B170BF1309C(sParam11))
	{
		func_337(sParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_595(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x2E768
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(system::round(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(system::round(fParam6));
	}
	unk_0x271AA5469AF471B3();
}

void func_596(int iParam0)//Position - 0x2E7CB
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104555.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_597(int iParam0)//Position - 0x2E7EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x2F31FD7674CB6CD3();
	iVar1 = unk_0x95327550F0F2BE7C();
	iVar2 = unk_0x674C9438180770FE();
	iVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	iVar5 = unk_0x93F322D6E98835CC();
	Global_104555.f_14111[iParam0 /*104*/].f_18 = iVar0;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_598()//Position - 0x2E87C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_599(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_599(struct<6> Param0, struct<6> Param1)//Position - 0x2E947
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_600()//Position - 0x2EA32
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104555.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_599(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 0;
	return 1;
}

void func_601()//Position - 0x2EB9A
{
	if ((!func_621() && func_610()) && func_609(unk_0x9EB17624F44A8DA4()))
	{
		if (func_607())
		{
			func_602("GB_INFO_MC_L", 1);
		}
		else
		{
			func_602("GB_INFO_LFG", 1);
		}
	}
}

int func_602(char* sParam0, int iParam1)//Position - 0x2EBDE
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_603(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_603(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2EC0A
{
	int iVar0;
	
	if ((!func_606() || !unk_0x4916190900E76373()) || !func_94(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_604(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_604(int iParam0)//Position - 0x2ED12
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_605(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_605(int iParam0)//Position - 0x2ED74
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_606()//Position - 0x2EDAD
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

bool func_607()//Position - 0x2EDBE
{
	return func_608(unk_0x9EB17624F44A8DA4());
}

bool func_608(int iParam0)//Position - 0x2EDCE
{
	return func_126(iParam0, 1);
}

int func_609(int iParam0)//Position - 0x2EDDD
{
	if (iParam0 == func_36())
	{
		return 0;
	}
	if (!func_816(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_94(iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 2) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 5))
	{
		return 0;
	}
	if (func_547(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_610()//Position - 0x2EE4B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if (func_611(iVar1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_611(int iParam0)//Position - 0x2EE7C
{
	int iVar0;
	
	if (func_816(iParam0, 0, 1))
	{
		if (iParam0 != unk_0x9EB17624F44A8DA4())
		{
			iVar0 = 0;
			if (func_123(1))
			{
				if (func_620(iParam0, 18))
				{
					iVar0 = 1;
				}
			}
			else if (func_548(iParam0, 15))
			{
				iVar0 = 1;
			}
			if (iVar0 && func_612(iParam0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_612(int iParam0, int iParam1, bool bParam2)//Position - 0x2EED9
{
	if (iParam0 == func_36())
	{
		return 0;
	}
	if (!func_816(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_94(iParam0, 0))
	{
		return 0;
	}
	if (func_618(iParam0))
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 2) || unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 5))
	{
		return 0;
	}
	if (func_617(iParam0))
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_615(iParam0, iParam1, 1))
		{
			return 0;
		}
		if (func_614(iParam0))
		{
			return 0;
		}
		if (func_124(iParam0, 1))
		{
			return 0;
		}
	}
	else if (func_435(iParam0, 1))
	{
		return 0;
	}
	if (func_613(iParam0))
	{
		return 0;
	}
	if (func_547(iParam0))
	{
		return 0;
	}
	if (func_549(iParam0))
	{
		return 0;
	}
	if (func_224(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_613(int iParam0)//Position - 0x2EFC9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

bool func_614(int iParam0)//Position - 0x2EFEF
{
	return func_548(iParam0, 20);
}

int func_615(int iParam0, int iParam1, bool bParam2)//Position - 0x2EFFF
{
	if (iParam1 != func_36())
	{
		if (!bParam2)
		{
			if (func_616(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_36())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_616(int iParam0, int iParam1)//Position - 0x2F049
{
	if (iParam1 != func_36())
	{
		if (iParam0 != func_36())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_36())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_617(int iParam0)//Position - 0x2F08E
{
	return func_548(iParam0, 30);
}

int func_618(int iParam0)//Position - 0x2F09E
{
	if (!func_548(iParam0, 2))
	{
		return 1;
	}
	if (func_548(iParam0, 1))
	{
		return 1;
	}
	if (func_619(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_619(int iParam0)//Position - 0x2F0D2
{
	return Global_1627537[iParam0 /*532*/].f_11.f_23;
}

bool func_620(int iParam0, int iParam1)//Position - 0x2F0E7
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

int func_621()//Position - 0x2F102
{
	int iVar0;
	var uVar1;
	struct<16> Var2;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_11[iVar0] == func_36())
		{
			StringCopy(&Var2, "", 64);
			Var2 = { func_622(func_623(iVar0)) };
			if (unk_0x74C475EB8E73D398(&Var2, &uVar1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

struct<16> func_622(int iParam0)//Position - 0x2F15D
{
	return Global_2447954.f_3066.f_18[iParam0 /*16*/];
}

int func_623(int iParam0)//Position - 0x2F175
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		default:
	}
	return 0;
}

void func_624(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x2F1CB
{
	Param0 = -1942454564;
	Param0.f_1 = unk_0x9EB17624F44A8DA4();
	if (!iParam13 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Param0, 14, iParam13);
	}
}

bool func_625(int iParam0)//Position - 0x2F1F8
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 26);
}

void func_626(int iParam0)//Position - 0x2F21E
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

void func_627()//Position - 0x2F247
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

bool func_628(int iParam0)//Position - 0x2F292
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

void func_629(bool bParam0, bool bParam1, int iParam2)//Position - 0x2F2A9
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	char* sVar5;
	struct<16> Var6;
	bool bVar7;
	int iVar8;
	
	if (!func_679())
	{
		return;
	}
	iVar2 = 1;
	if (func_625(unk_0x9EB17624F44A8DA4()))
	{
		iVar2 = 2;
	}
	if (iParam2 == 1)
	{
		iVar2 = 3;
	}
	if (Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11 != unk_0x9EB17624F44A8DA4())
	{
		if (bParam1)
		{
			unk_0xCCE4E8F10D6A2F9C(iVar2);
			func_676(0);
			func_674(0);
			func_673(21);
			func_673(22);
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_447 = iVar2;
		}
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11 = unk_0x9EB17624F44A8DA4();
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_409 = iParam2;
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_446 = iParam2;
		unk_0x419E347CE7DB6ADD(func_96(), &uVar3, &uVar4);
		func_672(uVar3, uVar4);
		sVar5 = unk_0x600F896255C2F228(unk_0x9EB17624F44A8DA4(), &uVar0);
		StringCopy(&Var6, sVar5, 64);
		func_671(Var6);
		func_670();
		if (func_100(7053, -1, 0) <= 0)
		{
			iVar1 = unk_0xE3CCAFB1555348DF();
		}
		else
		{
			iVar1 = (func_100(7053, -1, 0) - 43200);
		}
		func_667(iVar1);
		if (unk_0x6C5223DB5E5CFD9B("Player_Boss", 3))
		{
			unk_0xD91ED8E8618A1DEF(unk_0xFC1458A37D98B502(), "Player_Boss", unk_0x9EB17624F44A8DA4());
		}
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_24 = -1;
		Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_25 = -1;
		Global_2512808.f_4856.f_41 = -1;
		func_661();
		func_653(0);
		if (bParam0)
		{
			func_626(0);
		}
		if (Global_2512808.f_4856.f_77 != func_36())
		{
			Global_2512808.f_4856.f_77 = func_36();
		}
		if (unk_0xC80D31E4B587871C(Global_2512808.f_1711, 15))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_1711), 15);
		}
		if (func_652(15))
		{
			func_651(15);
		}
		if (!func_650() && !unk_0x4916190900E76373())
		{
			func_649();
			func_648(2);
		}
		func_160(7093, 2, -1, 1, 0);
		func_673(31);
		func_682();
		func_643();
		func_636();
		func_635();
		if (iParam2 != 1)
		{
			if (!func_634(82, 3))
			{
				bVar7 = false;
				iVar8 = func_100(7050, -1, 0);
				if (!unk_0xC80D31E4B587871C(iVar8, 11))
				{
					unk_0x872F1C1F8587CCC7(&iVar8, 11);
					func_160(7050, iVar8, -1, 1, 0);
					bVar7 = true;
				}
				func_77(82, 3, bVar7);
			}
		}
		if (iParam2 == 1)
		{
			unk_0xE8406CE79FE8D06E(func_633(func_434()), func_632(func_434()), func_631(), func_630(), Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_410, 4, Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_448);
		}
	}
}

int func_630()//Position - 0x2F521
{
	if (Global_1667867.f_3 != 0)
	{
		return Global_1667867.f_3;
	}
	return -1;
}

int func_631()//Position - 0x2F53D
{
	if (Global_1667867.f_2 != 0)
	{
		return Global_1667867.f_2;
	}
	return -1;
}

int func_632(int iParam0)//Position - 0x2F559
{
	if (iParam0 == func_36())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[1];
}

int func_633(int iParam0)//Position - 0x2F57E
{
	if (iParam0 == func_36())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[0];
}

int func_634(int iParam0, int iParam1)//Position - 0x2F5A3
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

void func_635()//Position - 0x2F5C8
{
	if (!Global_2512808.f_4856.f_156)
	{
		Global_2512808.f_4856.f_156 = 1;
	}
}

void func_636()//Position - 0x2F5E7
{
	struct<16> Var0;
	
	Var0 = { func_642(49, 50, -1) };
	func_639(&Var0, 0);
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_638())
	{
		func_673(28);
	}
	else
	{
		func_637(28);
	}
}

void func_637(int iParam0)//Position - 0x2F630
{
	unk_0x872F1C1F8587CCC7(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

int func_638()//Position - 0x2F64D
{
	if (unk_0x1AA23FF6402169E9() == 0)
	{
		return 0;
	}
	if (unk_0x8A81E55A71641BC1())
	{
		if (unk_0x580E56ACE6F37FAD(1, -1))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	if (unk_0xFD6215BABFD843F2())
	{
		if (unk_0xCD032B200A8FAC1A(1))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	if (unk_0x04E8D1E1170F25E1() || unk_0x177281F5FA205A38())
	{
		if (unk_0x8E095DA8BB18B959(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x580E56ACE6F37FAD(0, -1))
		{
			if (unk_0x0A51F536ECBFA795())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_639(char* sParam0, bool bParam1)//Position - 0x2F6D3
{
	if (bParam1)
	{
		if (!unk_0xAB019B170BF1309C(sParam0))
		{
			func_640(49, 50, sParam0, -1, 1);
		}
	}
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		StringCopy(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_342), sParam0, 64);
	}
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_638())
	{
		func_673(28);
	}
	else
	{
		func_637(28);
	}
}

void func_640(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x2F740
{
	int iVar0;
	int iVar1;
	char cVar2[32];
	char cVar3[32];
	int iVar4;
	int iVar5;
	
	if (func_641())
	{
		iVar0 = Global_2548410[iParam0 /*3*/][func_101(iParam3)];
		iVar1 = Global_2548410[iParam1 /*3*/][func_101(iParam3)];
		if (iVar0 != 0 && iVar1 != 0)
		{
			StringCopy(&cVar2, "", 32);
			StringCopy(&cVar3, "", 32);
			iVar4 = unk_0x96AAAC172E3B9680(sParam2);
			if (iVar4 > 0)
			{
				iVar5 = 10;
				if (iVar4 < 10)
				{
					iVar5 = iVar4;
				}
				StringCopy(&cVar2, unk_0xF2A899AA1D9891AD(sParam2, 0, iVar5, 31), 32);
				if (iVar4 > 10)
				{
					StringCopy(&cVar3, unk_0xF2A899AA1D9891AD(sParam2, 10, iVar4, 31), 32);
				}
			}
			unk_0x66EC5E2D18D59027(iVar0, &cVar2, iParam4);
			unk_0x66EC5E2D18D59027(iVar1, &cVar3, iParam4);
		}
	}
}

int func_641()//Position - 0x2F7EC
{
	return 1;
	return 0;
}

struct<16> func_642(int iParam0, int iParam1, int iParam2)//Position - 0x2F7F9
{
	var uVar0;
	var uVar1;
	struct<16> Var2;
	char cVar3[32];
	
	uVar0 = Global_2548410[iParam0 /*3*/][func_101(iParam2)];
	uVar1 = Global_2548410[iParam1 /*3*/][func_101(iParam2)];
	StringCopy(&Var2, unk_0xB71162D14F265C9D(uVar0, -1), 64);
	StringCopy(&cVar3, unk_0xB71162D14F265C9D(uVar1, -1), 32);
	StringConCat(&Var2, &cVar3, 64);
	return Var2;
}

void func_643()//Position - 0x2F846
{
	struct<16> Var0;
	
	Var0 = { func_642(45, 46, -1) };
	func_644(&Var0, 0);
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_638())
	{
		func_673(28);
	}
	else
	{
		func_637(28);
	}
}

void func_644(char* sParam0, bool bParam1)//Position - 0x2F88F
{
	struct<16> Var0;
	bool bVar1;
	
	if (bParam1)
	{
		if (!unk_0xAB019B170BF1309C(sParam0))
		{
			func_640(45, 46, sParam0, -1, 1);
			Var0 = { func_642(59, 61, -1) };
			if (unk_0xAB019B170BF1309C(&Var0))
			{
				func_640(59, 61, sParam0, -1, 1);
			}
		}
	}
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_638())
	{
		func_673(28);
	}
	else
	{
		func_637(28);
	}
	if (!unk_0xAB019B170BF1309C(sParam0))
	{
		bVar1 = true;
		if ((func_548(unk_0x9EB17624F44A8DA4(), 28) || func_647(unk_0x9EB17624F44A8DA4())) && !func_645(unk_0x9EB17624F44A8DA4()))
		{
			bVar1 = false;
		}
		if (bVar1)
		{
			StringCopy(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_326), sParam0, 64);
		}
	}
}

int func_645(int iParam0)//Position - 0x2F951
{
	struct<13> Var0;
	
	Var0 = { func_646(iParam0) };
	if (unk_0x177281F5FA205A38())
	{
		if (unk_0xCD032B200A8FAC1A(0))
		{
			if (unk_0x1E81D00FCDFF4BBE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_646(int iParam0)//Position - 0x2F981
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

int func_647(int iParam0)//Position - 0x2F998
{
	struct<13> Var0;
	
	if (iParam0 != func_36())
	{
		Var0 = { func_646(iParam0) };
		if (unk_0xFD6215BABFD843F2() || unk_0xB9D80B12FE4456A5())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				return 0;
			}
		}
		else if (unk_0x177281F5FA205A38())
		{
			if (unk_0xCD032B200A8FAC1A(0))
			{
				if (unk_0x1E81D00FCDFF4BBE(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_648(int iParam0)//Position - 0x2F9F1
{
	unk_0x872F1C1F8587CCC7(&(Global_2391020.f_2), iParam0);
	if (Global_2391020)
	{
		return;
	}
	Global_2391020 = 1;
	Global_2391020.f_1 = 0;
}

void func_649()//Position - 0x2FA1B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_2390946.f_28[iVar0 /*2*/] != -1 && Global_2390946.f_28[iVar0 /*2*/].f_1 != 0)
		{
			if (unk_0xA6DECE14FC9A8C51(Global_2390946.f_28[iVar0 /*2*/].f_1))
			{
				unk_0x66DAED36FB41050D(Global_2390946.f_28[iVar0 /*2*/].f_1, 1);
			}
		}
		iVar0++;
	}
}

bool func_650()//Position - 0x2FA7C
{
	return Global_2447174.f_627;
}

void func_651(int iParam0)//Position - 0x2FA8B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x0EE72DB1CD8A3B86(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

bool func_652(int iParam0)//Position - 0x2FAB4
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_7[iVar0], iVar1);
}

void func_653(int iParam0)//Position - 0x2FADD
{
	if (func_660())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_222(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_222(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_8 = 0;
			func_659(1);
		}
		if ((!unk_0x4916190900E76373() && !func_658()) && !func_654(unk_0x9EB17624F44A8DA4()))
		{
			Global_979885 = 0;
		}
	}
}

int func_654(int iParam0)//Position - 0x2FB77
{
	if (func_655(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_655(int iParam0, bool bParam1)//Position - 0x2FB9B
{
	if (bParam1)
	{
		if (func_656(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_656(int iParam0)//Position - 0x2FBC7
{
	return func_657(iParam0);
}

bool func_657(int iParam0)//Position - 0x2FBD5
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_658()//Position - 0x2FBEF
{
	return Global_2447174.f_727;
}

void func_659(bool bParam0)//Position - 0x2FBFE
{
	if (unk_0x3A711520F83BAE98())
	{
		if (!func_660())
		{
			if (func_816(unk_0x9EB17624F44A8DA4(), 1, 0))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 1);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, false);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, false);
			}
			unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 1f);
			unk_0xF305970BD7628B41(0);
			unk_0x2BDCC0C0CA635E27(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					unk_0xC526816FBFFDD996(0, 0);
				}
			}
		}
		else
		{
			if (func_816(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				unk_0xC854D7A2E956B946(unk_0xFC1458A37D98B502(), 0);
				unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 342, true);
				unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 122, true);
				unk_0x700E2D2B75B97982(unk_0x9EB17624F44A8DA4(), 0,5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC526816FBFFDD996(1, 0);
				}
			}
			unk_0xF305970BD7628B41(1);
			unk_0x2BDCC0C0CA635E27(0);
		}
	}
}

bool func_660()//Position - 0x2FCF7
{
	return Global_1312416;
}

void func_661()//Position - 0x2FD03
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar1))
		{
			func_663(1, iVar1);
			if (iVar1 != unk_0x9EB17624F44A8DA4())
			{
				func_662(iVar1);
			}
		}
		iVar0++;
	}
}

void func_662(int iParam0)//Position - 0x2FD45
{
	int iVar0;
	
	if (unk_0xC80D31E4B587871C(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_95, iParam0))
	{
		iVar0 = unk_0x25D049AAC4603E65(iParam0);
		unk_0xB0DD9292E54C7917(iVar0, unk_0x9EB17624F44A8DA4(), 1);
		unk_0x16BF46A5B08AE23D(unk_0x9EB17624F44A8DA4(), iParam0, 1);
		unk_0x16BF46A5B08AE23D(iParam0, unk_0x9EB17624F44A8DA4(), 1);
		func_663(1, iParam0);
		unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_95), iParam0);
	}
}

void func_663(bool bParam0, int iParam1)//Position - 0x2FDAA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_816(iParam1, 0, 1))
	{
		iVar1 = unk_0x25D049AAC4603E65(iParam1);
		if (unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x191BE1BC8F26F3C1(iVar1, 0))
		{
			if (unk_0x88DDBE9908752BF0(iVar1, 0))
			{
				iVar0 = unk_0xDFD115BB10FE46A9(iVar1, 0);
				if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
				{
					unk_0xD2EF89BC08CE7823(iVar0, bParam0, 1);
					if (func_615(iParam1, func_434(), 1))
					{
						if (func_434() == iParam1)
						{
							if (Global_2512808.f_4856.f_78[3] != iVar0)
							{
								Global_2512808.f_4856.f_78[3] = iVar0;
							}
						}
						else
						{
							iVar2 = func_664(func_434(), iParam1);
							if (iVar2 != -1)
							{
								if (Global_2512808.f_4856.f_78[iVar2] != iVar0)
								{
									Global_2512808.f_4856.f_78[iVar2] = iVar0;
								}
							}
						}
					}
				}
			}
			else if (!bParam0)
			{
				if (func_615(iParam1, func_434(), 1))
				{
					if (func_434() == iParam1)
					{
						iVar0 = Global_2512808.f_4856.f_78[3];
						if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
						{
							unk_0xD2EF89BC08CE7823(iVar0, true, 1);
							Global_2512808.f_4856.f_78[3] = 0;
						}
					}
					else
					{
						iVar3 = func_664(func_434(), iParam1);
						if (iVar3 != -1)
						{
							iVar0 = Global_2512808.f_4856.f_78[iVar3];
							if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
							{
								unk_0xD2EF89BC08CE7823(iVar0, true, 1);
								Global_2512808.f_4856.f_78[iVar3] = 0;
							}
						}
					}
				}
			}
		}
	}
}

int func_664(int iParam0, int iParam1)//Position - 0x2FF22
{
	int iVar0;
	
	if (func_436(iParam0))
	{
		if (func_615(iParam1, iParam0, 0) || func_666(iParam1, iParam0))
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (func_665(iParam0, iVar0) == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

int func_665(int iParam0, int iParam1)//Position - 0x2FF78
{
	if (func_436(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1627537[iParam0 /*532*/].f_11.f_11[iParam1];
		}
	}
	return func_36();
}

int func_666(int iParam0, int iParam1)//Position - 0x2FFB4
{
	if (iParam1 != func_36())
	{
		if (Global_1627537[iParam0 /*532*/].f_11.f_26 != func_36())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11.f_26;
		}
	}
	return 0;
}

void func_667(int iParam0)//Position - 0x2FFED
{
	if (!func_679())
	{
		return;
	}
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_1 = iParam0;
	if (func_100(7053, -1, 0) != func_668(unk_0x9EB17624F44A8DA4()))
	{
		func_160(7053, func_668(unk_0x9EB17624F44A8DA4()), -1, 1, 0);
	}
}

int func_668(int iParam0)//Position - 0x30038
{
	if (func_669(iParam0) == -1)
	{
		return -1;
	}
	return (func_669(iParam0) + 43200);
}

int func_669(int iParam0)//Position - 0x30059
{
	return Global_1627537[iParam0 /*532*/].f_11.f_1;
}

void func_670()//Position - 0x3006E
{
	if (unk_0xB9D80B12FE4456A5())
	{
		unk_0xE9397FE0AD378523(1);
		if (func_123(1))
		{
			unk_0xED1F9FCC30E97DAE(1253452001);
		}
		else
		{
			unk_0xED1F9FCC30E97DAE(-1755491431);
		}
	}
}

void func_671(char[64] cParam0)//Position - 0x3009F
{
	Global_2447954.f_3066.f_2 = { cParam0 };
}

void func_672(var uParam0, var uParam1)//Position - 0x300B8
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_8[0] = uParam0;
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_8[1] = uParam1;
}

void func_673(int iParam0)//Position - 0x300E8
{
	unk_0x0EE72DB1CD8A3B86(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_4), iParam0);
}

void func_674(int iParam0)//Position - 0x30105
{
	func_675(204, iParam0, -1, 1);
}

void func_675(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x30117
{
	int iVar0;
	
	if (func_641())
	{
		iVar0 = Global_2547365[iParam0 /*3*/][func_101(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x41495934EA1DEC56(iVar0, iParam1, iParam3);
		}
	}
}

void func_676(bool bParam0)//Position - 0x30149
{
	if (bParam0)
	{
		if (func_678(4))
		{
			func_637(21);
			func_637(22);
		}
		func_637(31);
		func_677(bParam0);
	}
	else
	{
		if (func_548(unk_0x9EB17624F44A8DA4(), 21))
		{
			func_673(21);
			if (!func_678(3) && func_678(4))
			{
				func_637(22);
			}
		}
		func_673(31);
		func_677(bParam0);
	}
}

void func_677(bool bParam0)//Position - 0x301B1
{
	func_675(306, bParam0, -1, 1);
}

bool func_678(int iParam0)//Position - 0x301C4
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_4856.f_34, iParam0);
}

int func_679()//Position - 0x301DB
{
	if (func_681() && func_680(0))
	{
		return 1;
	}
	return 0;
}

var func_680(int iParam0)//Position - 0x301F9
{
	return Global_1312373[iParam0];
}

var func_681()//Position - 0x30209
{
	return func_680(func_96() + 1);
}

void func_682()//Position - 0x3021B
{
	struct<8> Var0;
	int iVar1;
	
	Var0 = { func_642(59, 61, -1) };
	iVar1 = 0;
	if (func_123(1))
	{
		Var0 = { func_642(47, 48, -1) };
		iVar1 = 1;
	}
	if (unk_0xAB019B170BF1309C(&Var0))
	{
		StringCopy(&Var0, func_684(unk_0x9EB17624F44A8DA4(), 0), 64);
	}
	func_683(&Var0, iVar1, 0);
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_638())
	{
		func_673(28);
	}
	else
	{
		func_637(28);
	}
}

void func_683(char* sParam0, int iParam1, bool bParam2)//Position - 0x30297
{
	if (bParam2)
	{
		if (func_123(1) || iParam1 == 1)
		{
			func_640(47, 48, sParam0, -1, 1);
			if (func_607() && iParam1 == 1)
			{
				func_639(sParam0, bParam2);
			}
		}
		else
		{
			func_640(59, 61, sParam0, -1, 1);
			if (func_445() && iParam1 == 0)
			{
				func_644(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_99), sParam0, 64);
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_115 = unk_0x9456278AF63A7250();
	if ((!unk_0x177281F5FA205A38() && unk_0x8E095DA8BB18B959(0, -1, 1)) || func_638())
	{
		func_673(28);
	}
	else
	{
		func_637(28);
	}
}

char* func_684(int iParam0, bool bParam1)//Position - 0x30352
{
	if (!bParam1)
	{
		if (func_124(iParam0, 1))
		{
			return func_685();
		}
	}
	return unk_0xB2E1B414DD88808E("GB_REST_ACC");
}

char* func_685()//Position - 0x30379
{
	return unk_0xB2E1B414DD88808E("GB_REST_ACCM");
}

int func_686(int iParam0)//Position - 0x30389
{
	int iVar0;
	
	if (func_435(unk_0x9EB17624F44A8DA4(), 1))
	{
		iVar0 = func_688(unk_0x9EB17624F44A8DA4());
		if (func_816(iVar0, 0, 1))
		{
			if (func_687(iVar0, iParam0))
			{
				return iVar0;
			}
		}
	}
	else if (func_687(unk_0x9EB17624F44A8DA4(), iParam0))
	{
		return unk_0x9EB17624F44A8DA4();
	}
	return func_36();
}

bool func_687(int iParam0, int iParam1)//Position - 0x303DD
{
	return func_282(iParam0) == iParam1;
}

int func_688(int iParam0)//Position - 0x303EE
{
	if (iParam0 != func_36())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_36();
}

int func_689(int iParam0)//Position - 0x30411
{
	switch (iParam0)
	{
		case 60:
			return 1;
		
		case 61:
			return 2;
		
		case 62:
			return 3;
		
		case 63:
			return 4;
		
		case 64:
			return 5;
		
		case 65:
			return 6;
		
		case 66:
			return 7;
		
		case 67:
			return 8;
		
		case 68:
			return 9;
		
		case 69:
			return 10;
		
		default:
	}
	return 0;
}

int func_690()//Position - 0x30488
{
	return Global_1669535.f_15;
}

bool func_691()//Position - 0x30496
{
	return Global_1669535.f_15 != -1;
}

int func_692(var uParam0)//Position - 0x304A6
{
	if (func_583() || func_582())
	{
		return 1;
	}
	if (!func_436(unk_0x9EB17624F44A8DA4()))
	{
		return 1;
	}
	else if ((func_436(unk_0x9EB17624F44A8DA4()) && !func_608(unk_0x9EB17624F44A8DA4())) && (func_64(uParam0->f_318) || uParam0->f_443 == 1))
	{
		return 1;
	}
	else if (func_608(unk_0x9EB17624F44A8DA4()) && func_164(uParam0->f_318, -1))
	{
		return 1;
	}
	return 0;
}

bool func_693(int iParam0)//Position - 0x30530
{
	return func_694(func_122(iParam0));
}

int func_694(int iParam0)//Position - 0x30542
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_695()//Position - 0x30568
{
	if (unk_0x4C4813CAAD70E814(2))
	{
		if (((((((((((func_246("WHOUSEINPUTTRPC") || func_246("MP_OFF_LAP_PC")) || func_246("OFF_COMP_MIS")) || func_246("SECINPUTTREGPC")) || func_246("OFF_COMP_BDY")) || func_246("OFFLAPTOPPC")) || func_246("CLBHINPUTTRIGPC")) || func_246("ORINPUTTREGPC")) || func_246("OFF_COMP_CH_PC")) || func_246("OFF_COMP_CHV_PC")) || func_246("IEAPPINPUTTRPC")) || func_246("AHAPRVSESINPTPC"))
		{
			return 1;
		}
	}
	else if (((((((((((func_246("WHOUSEINPUTTRIG") || func_246("MP_OFF_LAP_1")) || func_246("OFF_COMP_MIS")) || func_246("SECINPUTTREG")) || func_246("OFF_COMP_BDY")) || func_246("OFFLAPTOP")) || func_246("CLBHINPUTTRIG")) || func_246("ORINPUTTREG")) || func_246("OFF_COMP_CH")) || func_246("OFF_COMP_CHV")) || func_246("IEAPPINPUTTRIG")) || func_246("AHAPRIVSESINPUT"))
	{
		return 1;
	}
	return 0;
}

int func_696(var uParam0)//Position - 0x306CE
{
	int iVar0;
	
	switch (uParam0->f_1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
		case 2:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_697(var uParam0, bool bParam1)//Position - 0x306FF
{
	int iVar0;
	
	if (bParam1)
	{
		switch (uParam0->f_1)
		{
			case 1:
				iVar0 = 10;
				break;
			
			case 2:
				iVar0 = 9;
				break;
		}
	}
	else
	{
		switch (uParam0->f_1)
		{
			case 0:
				iVar0 = 9;
				break;
			
			case 1:
				iVar0 = 10;
				break;
			}
	}
	return iVar0;
}

char* func_698(var uParam0, bool bParam1)//Position - 0x30757
{
	char* sVar0;
	
	if (func_64(uParam0->f_318))
	{
		switch (uParam0->f_1)
		{
			case 0:
				if (bParam1)
				{
					switch (uParam0->f_2)
					{
						case 0:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_A@BASE_L@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_A@BASE_L@";
							}
							break;
						
						case 1:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_b@BASE_L@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_b@BASE_L@";
							}
							break;
						
						case 2:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_C@BASE_L@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_C@BASE_L@";
							}
							break;
						}
				}
				break;
			
			case 1:
				if (bParam1)
				{
					switch (uParam0->f_2)
					{
						case 0:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_A@BASE_R@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_A@BASE_R@";
							}
							break;
						
						case 1:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_b@BASE_R@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_b@BASE_R@";
							}
							break;
						
						case 2:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_C@BASE_R@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_C@BASE_R@";
							}
							break;
					}
				}
				else
				{
					switch (uParam0->f_2)
					{
						case 0:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_A@BASE_L@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_A@BASE_L@";
							}
							break;
						
						case 1:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_b@BASE_L@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_b@BASE_L@";
							}
							break;
						
						case 2:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_C@BASE_L@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_C@BASE_L@";
							}
							break;
						}
				}
				break;
			
			case 2:
				if (bParam1)
				{
				}
				else
				{
					switch (uParam0->f_2)
					{
						case 0:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_A@BASE_R@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_A@BASE_R@";
							}
							break;
						
						case 1:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_b@BASE_R@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_b@BASE_R@";
							}
							break;
						
						case 2:
							if (func_562())
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@FEMALE@VAR_C@BASE_R@";
							}
							else
							{
								sVar0 = "ANIM@AMB@OFFICE@BOARDROOM@CREW@MALE@VAR_C@BASE_R@";
							}
							break;
						}
				}
				break;
		}
	}
	else if (func_164(uParam0->f_318, -1))
	{
		if (func_565(uParam0->f_318))
		{
			switch (uParam0->f_1)
			{
				case 0:
					if (bParam1)
					{
						if (func_562())
						{
							sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@FEMALE@BASE_L@";
						}
						else
						{
							sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@MALE@BASE_L@";
						}
					}
					break;
				
				case 1:
					if (bParam1)
					{
						if (func_562())
						{
							sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@FEMALE@BASE_R@";
						}
						else
						{
							sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@MALE@BASE_R@";
						}
					}
					else if (func_562())
					{
						sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@FEMALE@BASE_L@";
					}
					else
					{
						sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@MALE@BASE_L@";
					}
					break;
				
				case 2:
					if (bParam1)
					{
					}
					else if (func_562())
					{
						sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@FEMALE@BASE_R@";
					}
					else
					{
						sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@MALE@BASE_R@";
					}
					break;
			}
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 0:
					if (bParam1)
					{
						switch (uParam0->f_2)
						{
							case 0:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_A@BASE_L@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_A@BASE_L@";
								}
								break;
							
							case 1:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_B@BASE_L@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_B@BASE_L@";
								}
								break;
							
							case 2:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_C@BASE_L@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_C@BASE_L@";
								}
								break;
							}
					}
					break;
				
				case 1:
					if (bParam1)
					{
						switch (uParam0->f_2)
						{
							case 0:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_A@BASE_R@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_A@BASE_R@";
								}
								break;
							
							case 1:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_B@BASE_R@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_B@BASE_R@";
								}
								break;
							
							case 2:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_C@BASE_R@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_C@BASE_R@";
								}
								break;
						}
					}
					else
					{
						switch (uParam0->f_2)
						{
							case 0:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_A@BASE_L@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_A@BASE_L@";
								}
								break;
							
							case 1:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_B@BASE_L@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_B@BASE_L@";
								}
								break;
							
							case 2:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_C@BASE_L@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_C@BASE_L@";
								}
								break;
							}
					}
					break;
				
				case 2:
					if (bParam1)
					{
					}
					else
					{
						switch (uParam0->f_2)
						{
							case 0:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_A@BASE_R@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_A@BASE_R@";
								}
								break;
							
							case 1:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_b@BASE_R@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_b@BASE_R@";
								}
								break;
							
							case 2:
								if (func_562())
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_C@BASE_R@";
								}
								else
								{
									sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_C@BASE_R@";
								}
								break;
							}
					}
					break;
				}
			}
	}
	return sVar0;
}

int func_699(var uParam0)//Position - 0x30BBF
{
	int iVar0;
	
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_700(var uParam0)//Position - 0x30BF0
{
	if ((!Global_68220 && !func_573()) && !Global_1669508)
	{
		if (func_556())
		{
			if (!unk_0x4C4813CAAD70E814(2))
			{
				if ((func_246("WHPRVSESINPUTPC") || func_246("ORPRVSESINPUTPC")) || func_246("AHAPRVSESINPTPC"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (func_64(uParam0->f_318))
				{
					if (uParam0->f_320 == -1)
					{
						func_361(&(uParam0->f_320), 4, "WHPRIVSESINPUT", 0, 0, 0, 0);
					}
				}
				else if ((uParam0->f_443 || func_583()) || func_582())
				{
					if (uParam0->f_320 == -1)
					{
						func_361(&(uParam0->f_320), 4, "AHAPRIVSESINPUT", 0, 0, 0, 0);
					}
				}
				else if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "ORPRIVSESINPUT", 0, 0, 0, 0);
				}
			}
			else
			{
				if ((func_246("WHPRIVSESINPUT") || func_246("ORPRIVSESINPUT")) || func_246("AHAPRIVSESINPUT"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (func_64(uParam0->f_318))
				{
					if (uParam0->f_320 == -1)
					{
						func_361(&(uParam0->f_320), 4, "WHPRVSESINPUTPC", 0, 0, 0, 0);
					}
				}
				else if ((uParam0->f_443 || func_583()) || func_582())
				{
					if (uParam0->f_320 == -1)
					{
						func_361(&(uParam0->f_320), 4, "AHAPRVSESINPTPC", 0, 0, 0, 0);
					}
				}
				else if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "ORPRVSESINPUTPC", 0, 0, 0, 0);
				}
			}
		}
		else if (func_608(unk_0x9EB17624F44A8DA4()) && func_64(uParam0->f_318))
		{
			if (!unk_0x4C4813CAAD70E814(2))
			{
				if (func_246("WHBKRSESINPUTPC"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "WHBKRSESINPUT", 0, 0, 0, 0);
				}
			}
			else
			{
				if (func_246("WHBKRSESINPUT"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "WHBKRSESINPUTPC", 0, 0, 0, 0);
				}
			}
		}
		else if ((func_436(unk_0x9EB17624F44A8DA4()) && !func_608(unk_0x9EB17624F44A8DA4())) && func_164(uParam0->f_318, -1))
		{
			if (!unk_0x4C4813CAAD70E814(2))
			{
				if (func_246("CLBHBKRINPUTPC"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "CLBHBKRINPUT", 0, 0, 0, 0);
				}
			}
			else
			{
				if (func_246("CLBHBKRINPUT"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "CLBHBKRINPUTPC", 0, 0, 0, 0);
				}
			}
		}
		else if (func_549(unk_0x9EB17624F44A8DA4()) && func_64(uParam0->f_318))
		{
			if (!unk_0x4C4813CAAD70E814(2))
			{
				if (func_246("PIM_EXECH0x3"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "PIM_EXECH0x2", 0, 0, 0, 0);
				}
			}
			else
			{
				if (func_246("PIM_EXECH0x2"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "PIM_EXECH0x3", 0, 0, 0, 0);
				}
			}
		}
		else if ((func_693(unk_0x9EB17624F44A8DA4()) || func_701(unk_0x9EB17624F44A8DA4())) || unk_0x4916190900E76373())
		{
			if (!unk_0x4C4813CAAD70E814(2))
			{
				if (func_246("OFF_COMP_MIS_PC"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "OFF_COMP_MIS", 0, 0, 0, 0);
				}
			}
			else
			{
				if (func_246("OFF_COMP_MIS"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "OFF_COMP_MIS_PC", 0, 0, 0, 0);
				}
			}
		}
		else if (func_444(0) && !func_123(0))
		{
			if (func_246("OFF_COMP_MIS_PC") || func_246("OFF_COMP_MIS"))
			{
				unk_0x3E80C2F7BC665259(1);
				func_18(&(uParam0->f_320));
			}
			if (!unk_0x4C4813CAAD70E814(2))
			{
				if (func_246("OFF_COMP_BDY_PC") || func_246("OFF_COMP_CHV_PC"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					if (func_625(func_688(unk_0x9EB17624F44A8DA4())))
					{
						func_361(&(uParam0->f_320), 4, "OFF_COMP_BDY", 0, 0, 0, 0);
					}
					else
					{
						func_361(&(uParam0->f_320), 4, "OFF_COMP_CHV", 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if (func_246("OFF_COMP_BDY") || func_246("OFF_COMP_CHV"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					if (func_625(func_688(unk_0x9EB17624F44A8DA4())))
					{
						func_361(&(uParam0->f_320), 4, "OFF_COMP_BDY_PC", 0, 0, 0, 0);
					}
					else
					{
						func_361(&(uParam0->f_320), 4, "OFF_COMP_CHV_PC", 0, 0, 0, 0);
					}
				}
			}
		}
		else if (func_123(0))
		{
			if (func_246("OFF_COMP_MIS_PC") || func_246("OFF_COMP_MIS"))
			{
				unk_0x3E80C2F7BC665259(1);
				func_18(&(uParam0->f_320));
			}
			if (!unk_0x4C4813CAAD70E814(2))
			{
				if (func_246("OFF_COMP_CH_PC"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "OFF_COMP_CH", 0, 0, 0, 0);
				}
			}
			else
			{
				if (func_246("OFF_COMP_CH"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					func_361(&(uParam0->f_320), 4, "OFF_COMP_CH_PC", 0, 0, 0, 0);
				}
			}
		}
		else
		{
			if (func_246("OFF_COMP_MIS_PC") || func_246("OFF_COMP_MIS"))
			{
				unk_0x3E80C2F7BC665259(1);
				func_18(&(uParam0->f_320));
			}
			if (func_436(unk_0x9EB17624F44A8DA4()))
			{
				if (!unk_0x4C4813CAAD70E814(2))
				{
					if (((func_246("WHOUSEINPUTTRPC") || func_246("MPOFSEAT_PCEXIT")) || func_246("CLBHINPUTTRIGPC")) || func_246("IEAPPINPUTTRPC"))
					{
						unk_0x3E80C2F7BC665259(1);
						func_18(&(uParam0->f_320));
					}
					if (uParam0->f_320 == -1)
					{
						if (!func_556())
						{
							if (func_64(uParam0->f_318) || func_37(unk_0x9EB17624F44A8DA4()))
							{
								func_361(&(uParam0->f_320), 4, "WHOUSEINPUTTRIG", 0, 0, 0, 0);
							}
							else if (uParam0->f_443 || func_581())
							{
								func_361(&(uParam0->f_320), 4, "IEAPPINPUTTRIG", 0, 0, 0, 0);
							}
							else if (func_164(uParam0->f_318, -1))
							{
								func_361(&(uParam0->f_320), 4, "CLBHINPUTTRIG", 0, 0, 0, 0);
							}
						}
						else
						{
							func_361(&(uParam0->f_320), 4, "MPOFSEAT_EXIT", 0, 0, 0, 0);
						}
					}
				}
				else
				{
					if (((func_246("WHOUSEINPUTTRIG") || func_246("CLBHINPUTTRIG")) || func_246("MPOFSEAT_EXIT")) || func_246("IEAPPINPUTTRIG"))
					{
						unk_0x3E80C2F7BC665259(1);
						func_18(&(uParam0->f_320));
					}
					if (uParam0->f_320 == -1)
					{
						if (!func_556())
						{
							if (func_64(uParam0->f_318) || func_37(unk_0x9EB17624F44A8DA4()))
							{
								func_361(&(uParam0->f_320), 4, "WHOUSEINPUTTRPC", 0, 0, 0, 0);
							}
							else if (uParam0->f_443 || func_581())
							{
								func_361(&(uParam0->f_320), 4, "IEAPPINPUTTRPC", 0, 0, 0, 0);
							}
							else if (func_164(uParam0->f_318, -1))
							{
								func_361(&(uParam0->f_320), 4, "CLBHINPUTTRIGPC", 0, 0, 0, 0);
							}
						}
						else
						{
							func_361(&(uParam0->f_320), 4, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
						}
					}
				}
			}
			else if (func_554() >= func_553())
			{
				if (!unk_0x4C4813CAAD70E814(2))
				{
					if (((func_246("OFF_COMP_VIP_PC") || func_246("MPOFSEAT_PCEXIT")) || func_246("SECINPUTTREGPC")) || func_246("SECINPUTTREG"))
					{
						unk_0x3E80C2F7BC665259(1);
						func_18(&(uParam0->f_320));
					}
					if (uParam0->f_320 == -1)
					{
						if (!func_556())
						{
							func_361(&(uParam0->f_320), 4, "OFF_COMP_VIP", 0, 0, 0, 0);
						}
						else
						{
							func_361(&(uParam0->f_320), 4, "MPOFSEAT_EXIT", 0, 0, 0, 0);
						}
					}
				}
				else
				{
					if (((func_246("OFF_COMP_VIP") || func_246("MPOFSEAT_EXIT")) || func_246("SECINPUTTREGPC")) || func_246("SECINPUTTREG"))
					{
						unk_0x3E80C2F7BC665259(1);
						func_18(&(uParam0->f_320));
					}
					if (uParam0->f_320 == -1)
					{
						if (!func_556())
						{
							func_361(&(uParam0->f_320), 4, "OFF_COMP_VIP_PC", 0, 0, 0, 0);
						}
						else
						{
							func_361(&(uParam0->f_320), 4, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
						}
					}
				}
			}
			else if (!unk_0x4C4813CAAD70E814(2))
			{
				if ((((func_246("SECINPUTTREGPC") || func_246("ORINPUTTREGPC")) || func_246("MPOFSEAT_PCEXIT")) || func_246("OFF_COMP_VIP")) || func_246("OFF_COMP_VIP_PC"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					if (!func_556())
					{
						if ((func_64(uParam0->f_318) || uParam0->f_443) || func_581())
						{
							func_361(&(uParam0->f_320), 4, "SECINPUTTREG", 0, 0, 0, 0);
						}
						else if (func_164(uParam0->f_318, -1))
						{
							func_361(&(uParam0->f_320), 4, "ORINPUTTREG", 0, 0, 0, 0);
						}
					}
					else
					{
						func_361(&(uParam0->f_320), 4, "MPOFSEAT_EXIT", 0, 0, 0, 0);
					}
				}
			}
			else
			{
				if ((((func_246("SECINPUTTREG") || func_246("ORINPUTTREG")) || func_246("MPOFSEAT_EXIT")) || func_246("OFF_COMP_VIP")) || func_246("OFF_COMP_VIP_PC"))
				{
					unk_0x3E80C2F7BC665259(1);
					func_18(&(uParam0->f_320));
				}
				if (uParam0->f_320 == -1)
				{
					if (!func_556())
					{
						if ((func_64(uParam0->f_318) || uParam0->f_443) || func_581())
						{
							func_361(&(uParam0->f_320), 4, "SECINPUTTREGPC", 0, 0, 0, 0);
						}
						else if (func_164(uParam0->f_318, -1))
						{
							func_361(&(uParam0->f_320), 4, "ORINPUTTREGPC", 0, 0, 0, 0);
						}
					}
					else
					{
						func_361(&(uParam0->f_320), 4, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
					}
				}
			}
		}
	}
	else if (Global_1669508 && func_249())
	{
		unk_0x3E80C2F7BC665259(1);
	}
}

bool func_701(int iParam0)//Position - 0x3166F
{
	return func_702(func_122(iParam0));
}

int func_702(int iParam0)//Position - 0x31681
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

void func_703(var uParam0)//Position - 0x316A7
{
	if (func_542(uParam0->f_277))
	{
		if (func_64(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17) || func_164(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1))
		{
			switch (uParam0->f_1)
			{
				case 0:
					if (!unk_0x4C4813CAAD70E814(2))
					{
						func_704("MPOFSEAT_EXIT_L");
					}
					else
					{
						func_704("MPOFSEAT_EXIT_PCL");
					}
					break;
				
				case 1:
					if (!unk_0x4C4813CAAD70E814(2))
					{
						func_704("MPOFSEAT_EXIT_C");
					}
					else
					{
						func_704("MPOFSEAT_EXIT_PCC");
					}
					break;
				
				case 2:
					if (!unk_0x4C4813CAAD70E814(2))
					{
						func_704("MPOFSEAT_EXIT_R");
					}
					else
					{
						func_704("MPOFSEAT_EXIT_PCR");
					}
					break;
				}
		}
	}
	else if (func_511(uParam0->f_277))
	{
		if (!unk_0x4C4813CAAD70E814(2))
		{
			func_704("OFFLAPTOP");
		}
		else
		{
			func_704("OFFLAPTOPPC");
		}
	}
	else if (uParam0->f_277 == 0 && func_164(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1))
	{
		switch (uParam0->f_1)
		{
			case 0:
				if (!unk_0x4C4813CAAD70E814(2))
				{
					func_704("MPOFSEAT_EXIT_L");
				}
				else
				{
					func_704("MPOFSEAT_EXIT_PCL");
				}
				break;
			
			case 1:
				if (!unk_0x4C4813CAAD70E814(2))
				{
					func_704("MPOFSEAT_EXIT_C");
				}
				else
				{
					func_704("MPOFSEAT_EXIT_PCC");
				}
				break;
			
			case 2:
				if (!unk_0x4C4813CAAD70E814(2))
				{
					func_704("MPOFSEAT_EXIT_R");
				}
				else
				{
					func_704("MPOFSEAT_EXIT_PCR");
				}
				break;
		}
	}
	else if (!unk_0x4C4813CAAD70E814(2))
	{
		if (uParam0->f_320 == -1)
		{
			func_361(&(uParam0->f_320), 4, "MPOFSEAT_EXIT", 0, 0, 0, 0);
		}
	}
	else if (uParam0->f_320 == -1)
	{
		func_361(&(uParam0->f_320), 4, "MPOFSEAT_PCEXIT", 0, 0, 0, 0);
	}
}

void func_704(char* sParam0)//Position - 0x31874
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 1, 1, -1);
}

int func_705()//Position - 0x3188A
{
	if (((((((((((((((((((((((((((((((((((unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "EXIT", 3) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "ENTER", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_A@BASE@", "BASE", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "EXIT", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "ENTER", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_B@BASE@", "BASE", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "EXIT", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "ENTER", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@FEMALE@VAR_C@BASE@", "BASE", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "EXIT", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "ENTER", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_A@BASE@", "BASE", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "EXIT", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "ENTER", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_B@BASE@", "BASE", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "EXIT", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "ENTER", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_A", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_B", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "IDLE_C", 3)) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@AMB@OFFICE@LAPTOPS@MALE@VAR_C@BASE@", "BASE", 3))
	{
		return 1;
	}
	return 0;
}

int func_706(bool bParam0)//Position - 0x31BD0
{
	if (unk_0x5C9167CD27AB7A44())
	{
		if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			if (func_707(unk_0xFC1458A37D98B502()))
			{
				if (unk_0xF2B58F79D29425B4(0, 25) || unk_0xF2B58F79D29425B4(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0xF2B58F79D29425B4(0, 19) || (!bParam0 && unk_0x5A632962B08A1872(0, 19)))
	{
		return 1;
	}
	if (unk_0xB9D80B12FE4456A5())
	{
		if (((unk_0xF2B58F79D29425B4(0, 166) || unk_0xF2B58F79D29425B4(0, 167)) || unk_0xF2B58F79D29425B4(0, 168)) || unk_0xF2B58F79D29425B4(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x5A632962B08A1872(0, 166) || unk_0x5A632962B08A1872(0, 167)) || unk_0x5A632962B08A1872(0, 168)) || unk_0x5A632962B08A1872(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_707(int iParam0)//Position - 0x31CBB
{
	int iVar0;
	
	if (unk_0x43E3A4534ED4A79C())
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam0))
		{
			unk_0x5AD8564EFD5BEC2E(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_708(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x31D18
{
	*uParam0 = system::floor((unk_0x869308DF4F5FB0C3(2, 218) * 127f));
	*uParam1 = system::floor((unk_0x869308DF4F5FB0C3(2, 219) * 127f));
	*uParam2 = system::floor((unk_0x869308DF4F5FB0C3(2, 220) * 127f));
	*uParam3 = system::floor((unk_0x869308DF4F5FB0C3(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = system::floor((unk_0x84326F8D8D6875EC(2, 218) * 127f));
			*uParam1 = system::floor((unk_0x84326F8D8D6875EC(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = system::floor((unk_0x84326F8D8D6875EC(2, 220) * 127f));
			*uParam3 = system::floor((unk_0x84326F8D8D6875EC(2, 221) * 127f));
		}
	}
}

void func_709()//Position - 0x31DED
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar10;
	
	iLocal_992 = iLocal_992;
	func_814();
	func_810();
	func_809();
	func_808();
	func_806();
	func_798();
	switch (Global_25505)
	{
		case 0:
			func_243(&Global_25505, 1);
			break;
		
		case 1:
			vVar0 = { Local_972[iLocal_991 /*6*/] };
			vVar1 = { Local_972[iLocal_991 /*6*/].f_3 };
			vLocal_980 = { unk_0x9EA50C5EC175E58E(vVar0, vVar1.z, vLocal_983) };
			vLocal_981 = { unk_0x9EA50C5EC175E58E(vVar0, vVar1.z, vLocal_984) };
			if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_980, vLocal_981, func_797(iLocal_991), 0, 1, 0) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0)) && !unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()))
			{
				func_243(&Global_25505, 2);
			}
			else
			{
				iLocal_991++;
				if (iLocal_991 >= func_796())
				{
					iLocal_991 = 0;
				}
			}
			break;
		
		case 2:
			iLocal_992 = (72 + iLocal_991);
			if (((((!func_366() && func_320(unk_0xFC1458A37D98B502())) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0)) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) && !func_252()) && !unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502()))
			{
				if (!func_26(0) && !func_570())
				{
					if (!func_569())
					{
						if (func_795(iLocal_991))
						{
							func_793(func_794(iLocal_991));
						}
						else
						{
							func_793(0);
						}
					}
				}
				else if (iLocal_929 != -1)
				{
					func_18(&iLocal_929);
				}
				if ((unk_0xE8C126B7ADBB9D63(2, 51) && !func_570()) && !func_792())
				{
					iLocal_934 = iLocal_991;
					Global_2456857 = iLocal_934;
					Local_924[unk_0x9EB17624F44A8DA4() /*24*/].f_23 = iLocal_934;
					if (iLocal_929 != -1)
					{
						func_18(&iLocal_929);
					}
					if (func_64(iLocal_971) || func_59(iLocal_971, 0, 0))
					{
						if (func_714())
						{
							iLocal_987 = 3;
						}
						else
						{
							iLocal_987 = 1;
						}
					}
					else if (func_164(iLocal_971, -1))
					{
						iLocal_987 = 0;
					}
					unk_0x0EE72DB1CD8A3B86(&uLocal_931, 1);
					func_243(&Global_25505, 3);
				}
			}
			else if (!func_366())
			{
				if (iLocal_929 != -1)
				{
					func_18(&iLocal_929);
				}
				unk_0x0EE72DB1CD8A3B86(&uLocal_931, 1);
			}
			vVar0 = { Local_972[iLocal_991 /*6*/] };
			vVar1 = { Local_972[iLocal_991 /*6*/].f_3 };
			vLocal_980 = { unk_0x9EA50C5EC175E58E(vVar0, vVar1.z, vLocal_983) };
			vLocal_981 = { unk_0x9EA50C5EC175E58E(vVar0, vVar1.z, vLocal_984) };
			if (func_164(iLocal_971, 97))
			{
				if (iLocal_991 == 6)
				{
					vLocal_980 = { 1002,847f, -3169,606f, -35,04642f };
					vLocal_981 = { 1001,694f, -3169,619f, -33,29642f };
				}
			}
			if (!unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), vLocal_980, vLocal_981, func_797(iLocal_991), 0, 1, 0))
			{
				if (iLocal_929 != -1)
				{
					func_18(&iLocal_929);
				}
				unk_0x0EE72DB1CD8A3B86(&uLocal_931, 1);
				func_243(&Global_25505, 1);
			}
			break;
		
		case 3:
			sLocal_935 = func_713(iLocal_987, func_562());
			func_243(&Global_25505, 4);
			break;
		
		case 4:
			unk_0x6450931B826B49D9(sLocal_935);
			if (!unk_0x3A801AA34DD821BE(sLocal_935))
			{
				unk_0x6450931B826B49D9(sLocal_935);
				return;
			}
			vVar2 = { unk_0x09E51060F59912ED(sLocal_935, "enter", Local_972[iLocal_991 /*6*/], Local_972[iLocal_991 /*6*/].f_3, 0, 2) };
			vVar3 = { unk_0x4AA2C5A4980B3F34(sLocal_935, "enter", Local_972[iLocal_991 /*6*/], Local_972[iLocal_991 /*6*/].f_3, 0f, 2) };
			iVar4 = vVar3.z;
			unk_0x6EF694689373EE8D(unk_0xFC1458A37D98B502(), vVar2, 1f, 100, iVar4, 0,01f);
			func_243(&Global_25505, 5);
			break;
		
		case 5:
			if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) != 1)
			{
				func_712();
				iLocal_930 = unk_0x9CEC233AE69E2D39(Local_972[iLocal_934 /*6*/], Local_972[iLocal_934 /*6*/].f_3, 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_930, sLocal_935, "enter", 1,5f, -1,5f, 13, 16, 1,5f, 0);
				unk_0x9C39944AA129D284(iLocal_930);
				func_243(&Global_25505, 6);
			}
			break;
		
		case 24:
			break;
		
		case 6:
			if (func_64(iLocal_971))
			{
				if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -220917790))
				{
				}
			}
			iVar5 = unk_0x45D90ED1F569A489(iLocal_930);
			if (iVar5 >= 0)
			{
				if (unk_0x463C4747B41E35A3(iVar5) >= 1f)
				{
					vVar6 = { Local_972[iLocal_934 /*6*/] };
					vVar7 = { Local_972[iLocal_934 /*6*/].f_3 };
					iLocal_930 = unk_0x9CEC233AE69E2D39(vVar6, vVar7, 2, 1, 0, 1065353216, 0, 1065353216);
					if (iLocal_993)
					{
						iLocal_993 = 0;
					}
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_930, sLocal_935, "base", 4f, -1,5f, 13, 16, 1148846080, 0);
					unk_0x9C39944AA129D284(iLocal_930);
					func_243(&Global_25505, 7);
				}
			}
			break;
		
		case 7:
			iVar8 = unk_0x45D90ED1F569A489(iLocal_930);
			if (iVar8 >= 0)
			{
				if (unk_0x463C4747B41E35A3(iVar8) >= 1f)
				{
					vVar9 = { Local_972[iLocal_934 /*6*/] };
					vVar10 = { Local_972[iLocal_934 /*6*/].f_3 };
					iLocal_930 = unk_0x9CEC233AE69E2D39(vVar9, vVar10, 2, 1, 0, 1065353216, 0, 1065353216);
					iLocal_990 = func_711();
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_930, sLocal_935, func_502(iLocal_990), 4f, -1,5f, 13, 16, 1148846080, 0);
					unk_0x9C39944AA129D284(iLocal_930);
					Global_1625917 = 0;
					func_243(&Global_25505, 6);
				}
			}
			break;
		
		case 18:
			iVar8 = unk_0x45D90ED1F569A489(iLocal_930);
			if (iVar8 >= 0)
			{
				iLocal_930 = unk_0x9CEC233AE69E2D39(Local_972[iLocal_934 /*6*/], Local_972[iLocal_934 /*6*/].f_3, 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_930, sLocal_935, "COMPUTER_EXIT", 4f, -1,5f, 12, 0, 1148846080, 4);
				unk_0xF6DCDEEE0FC03E91(iLocal_996, iLocal_930, sLocal_935, "COMPUTER_EXIT_CHAIR", 4f, -4f, 32781);
				unk_0x9C39944AA129D284(iLocal_930);
				if (Global_68220 == 1)
				{
					func_243(&Global_25505, 11);
				}
				else
				{
					func_243(&Global_25505, 6);
				}
			}
			break;
		
		case 9:
			iLocal_930 = unk_0x9CEC233AE69E2D39(Local_972[iLocal_934 /*6*/], Local_972[iLocal_934 /*6*/].f_3, 2, 1, 0, 1065353216, 0, 1065353216);
			unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_930, sLocal_935, "exit", 4f, -4f, 12, 16, 1000f, 0);
			unk_0x9C39944AA129D284(iLocal_930);
			unk_0x0EE72DB1CD8A3B86(&uLocal_931, 1);
			func_243(&Global_25505, 6);
			break;
		
		case 19:
			break;
		
		case 23:
			break;
		
		case 21:
			break;
		
		case 20:
			break;
		
		case 11:
			iVar8 = unk_0x45D90ED1F569A489(iLocal_930);
			if (iVar8 >= 0)
			{
				if (unk_0x463C4747B41E35A3(iVar8) >= 1f || !unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -1322051853))
				{
					if (!unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), -1322051853))
					{
					}
					iLocal_930 = unk_0x9CEC233AE69E2D39(Local_972[iLocal_934 /*6*/], Local_972[iLocal_934 /*6*/].f_3, 2, 1, 0, 1065353216, 0, 1065353216);
					unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_930, func_710(), "exit", 4f, -4f, 13, 0, 1000f, 0);
					unk_0xF6DCDEEE0FC03E91(iLocal_996, iLocal_930, sLocal_935, "exit_CHAIR", 4f, -4f, 32781);
					unk_0x9C39944AA129D284(iLocal_930);
					if (iLocal_929 != -1)
					{
						func_18(&iLocal_929);
					}
					unk_0x0EE72DB1CD8A3B86(&uLocal_931, 1);
					func_243(&Global_25505, 12);
				}
			}
			break;
		
		case 13:
			unk_0x0B0BB26D99CD7575(iLocal_930);
			func_243(&Global_25505, 15);
			func_242(0);
			break;
		
		case 14:
			if (iLocal_934 != -1)
			{
				iLocal_930 = unk_0x9CEC233AE69E2D39(Local_972[iLocal_934 /*6*/], Local_972[iLocal_934 /*6*/].f_3, 2, 1, 0, 1065353216, 0, 1065353216);
				unk_0x7C92B99DB7D4962F(unk_0xFC1458A37D98B502(), iLocal_930, sLocal_935, "exit", 4f, -4f, 13, 16, 1000f, 0);
				unk_0x9C39944AA129D284(iLocal_930);
				if (iLocal_929 != -1)
				{
					func_18(&iLocal_929);
				}
				unk_0x0EE72DB1CD8A3B86(&uLocal_931, 1);
				func_243(&Global_25505, 25);
			}
			break;
		
		case 25:
			iVar8 = unk_0x45D90ED1F569A489(iLocal_930);
			if (iVar8 >= 0)
			{
				func_243(&Global_25505, 12);
			}
			break;
		
		case 12:
			iVar8 = unk_0x45D90ED1F569A489(iLocal_930);
			if (iVar8 >= 0)
			{
				if (func_64(iLocal_971))
				{
					if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), 203249472))
					{
						if (unk_0xA8388473C755363D(unk_0xFC1458A37D98B502(), joaat("weapon_revolver"), 0))
						{
						}
					}
				}
				if ((unk_0x463C4747B41E35A3(iVar8) >= 1f || unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), 364629851)) || unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), 2116425869))
				{
					unk_0x0B0BB26D99CD7575(iLocal_930);
					func_243(&Global_25505, 15);
					func_242(0);
				}
			}
			break;
		
		case 15:
			func_243(&Global_25505, 1);
			break;
	}
}

char* func_710()//Position - 0x326EB
{
	char* sVar0;
	
	if (func_565(iLocal_934))
	{
		if (func_562())
		{
			sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@FEMALE@BASE@";
		}
		else
		{
			sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@BOSS@MALE@BASE@";
		}
	}
	else
	{
		switch (iLocal_997)
		{
			case -1:
				break;
			
			case 0:
				if (func_562())
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_A@BASE@";
				}
				else
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_A@BASE@";
				}
				break;
			
			case 1:
				if (func_562())
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_B@BASE@";
				}
				else
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_B@BASE@";
				}
				break;
			
			case 2:
				if (func_562())
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@FEMALE@VAR_C@BASE@";
				}
				else
				{
					sVar0 = "ANIM@AMB@CLUBHOUSE@BOARDROOM@CREW@MALE@VAR_C@BASE@";
				}
				break;
			}
	}
	return sVar0;
}

int func_711()//Position - 0x32786
{
	int iVar0;
	int iVar1;
	
	iVar1 = 3;
	iVar0 = unk_0x63A6486593EC7EC3(0, iVar1);
	while (iVar0 == iLocal_995 || iVar0 == iLocal_994)
	{
		iVar0 = unk_0x63A6486593EC7EC3(0, iVar1);
	}
	iLocal_994 = iLocal_995;
	iLocal_995 = iVar0;
	return iVar0;
}

void func_712()//Position - 0x327C8
{
	if (func_544(unk_0xFC1458A37D98B502()))
	{
		unk_0x03924C68EFCBC511(unk_0xFC1458A37D98B502(), 5, 0, 0, 0);
	}
}

char* func_713(int iParam0, bool bParam1)//Position - 0x327E7
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@FEMALE@VAR_A@BASE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@MALE@VAR_A@BASE@";
			}
			break;
		
		case 1:
			if (bParam1)
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@FEMALE@VAR_B@BASE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@MALE@VAR_B@BASE@";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@FEMALE@VAR_C@BASE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@MALE@VAR_C@BASE@";
			}
			break;
	}
	return sVar0;
}

int func_714()//Position - 0x3284F
{
	int iVar0;
	int iVar1;
	
	if (func_562())
	{
		iVar0 = func_722(unk_0xFC1458A37D98B502(), 11, -1);
		iVar1 = func_722(unk_0xFC1458A37D98B502(), 4, -1);
		if (func_721(unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()), 11, iVar0, -1) || func_715(unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()), 4, iVar1, -1))
		{
			return 0;
		}
	}
	return 1;
}

int func_715(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x328A6
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam3 == -1)
					{
						iParam3 = func_717(iParam0, iParam2, iParam1, 4);
					}
					iVar0 = func_716(iParam3);
					if (((((((((iParam2 >= 112 && iParam2 <= 114) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 144 && iParam2 <= 159)) || (iParam2 >= 192 && iParam2 <= 207)) || iVar0 == 7) || iVar0 == 8) || iVar0 == 9) || iVar0 == 12) || unk_0x6C297174CFC8C5B2(iParam3, 1213639659, 0))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_716(int iParam0)//Position - 0x3297C
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x6C297174CFC8C5B2(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x6C297174CFC8C5B2(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_717(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32AE9
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_720(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			unk_0x53CE22B0EDFAB540(iVar1, &Var0);
			if (!unk_0x42683C90F2D005ED(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_718(iParam0, func_719(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_70793.f_26[iParam2] && iParam1 == Global_70793[iParam2]) && Global_70793.f_13[iParam2] != 0)
		{
			return Global_70793.f_13[iParam2];
		}
		iVar9 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 0, -1, func_719(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			unk_0x19002A6D4CBCE1E2(iVar6, &Var5);
			if (!unk_0x42683C90F2D005ED(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_70793.f_13[iParam2] = Var5.f_1;
					Global_70793[iParam2] = iParam1;
					Global_70793.f_26[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_718(int iParam0, int iParam1)//Position - 0x32C45
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_719(int iParam0)//Position - 0x32FEC
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_720(int iParam0)//Position - 0x3309C
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_721(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x330FD
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_717(iParam0, iParam2, 11, 4);
						}
						return unk_0x6C297174CFC8C5B2(iParam3, -530089825, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_722(int iParam0, int iParam1, int iParam2)//Position - 0x33150
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_730(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_730(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_725(iParam0, iParam2);
			}
		}
		else
		{
			return func_723(iParam0, iParam1);
		}
	}
	return -99;
}

int func_723(int iParam0, int iParam1)//Position - 0x331F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return -99;
	}
	iVar0 = func_719(iParam1);
	iVar1 = unk_0x4CDD2D1D66ED1DE4(iParam0, iVar0);
	iVar2 = unk_0xDCC2BD4C56470D10(iParam0, iVar0);
	return func_724(iParam0, iVar1, iVar2, iParam1);
}

int func_724(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x33251
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_719(iParam3);
	iVar1 = unk_0x7A8C4EAB4DAEE8ED(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x0BE76048E700C028(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_725(int iParam0, int iParam1)//Position - 0x332D5
{
	int iVar0;
	int iVar1;
	
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x742D2DEFFDC66EB8(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_729(iParam1);
	}
	iVar1 = unk_0xC563C871267881C4(iParam0, iParam1);
	return func_726(iParam0, iVar0, iVar1, iParam1);
}

int func_726(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3331B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_729(iParam3);
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	iVar1 = unk_0xA2FAB7A15B84DCA2(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_728(unk_0x82FF3DFBC3965CC0(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_728(unk_0x82FF3DFBC3965CC0(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x52913C7C981BE317(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x34221E435D75D46F(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_727(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_729(iParam3);
}

int func_727(int iParam0, int iParam1)//Position - 0x33417
{
	int iVar0;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_728(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x33555
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var0);
		iVar2 = 0;
		iVar3 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			unk_0x53CE22B0EDFAB540(iVar1, &Var0);
			if (!unk_0x42683C90F2D005ED(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_720(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var4);
		iVar6 = 0;
		iVar7 = unk_0xB214E83F6B0D8129(iParam3, 6, -1, 0, -1, func_719(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			unk_0x19002A6D4CBCE1E2(iVar5, &Var4);
			if (!unk_0x42683C90F2D005ED(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_718(iParam0, func_719(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_729(int iParam0)//Position - 0x33635
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_730(int iParam0, int iParam1, int iParam2)//Position - 0x336BB
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x82FF3DFBC3965CC0(iParam0);
	Global_70671[1 /*14*/] = { func_745(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_741(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_730(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_738(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_730(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_70671[2 /*14*/] = { func_745(iVar0, 14, iVar6) };
									if (Global_70671[2 /*14*/].f_12 == iVar5)
									{
										if (func_730(iParam0, 14, iVar6))
										{
											if (!func_733(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_70671[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_723(iParam0, iVar4);
						Global_70671[2 /*14*/] = { func_745(iVar0, iVar4, iVar1) };
						if (!func_733(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_70671[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_16)
		{
			if (func_100(1754, Global_70668, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_738(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_730(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x742D2DEFFDC66EB8(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_3 && (unk_0xC563C871267881C4(iParam0, Global_70671[1 /*14*/].f_12) == Global_70671[1 /*14*/].f_4 || Global_70671[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_70671[1 /*14*/].f_12 == 0 && unk_0xC80D31E4B587871C(Global_70671[1 /*14*/].f_6, 6)) && unk_0x6C297174CFC8C5B2(Global_2621444, -1033433901, 1)) && unk_0x299BD3B2DAAE7526(Global_2621444) > 0)
		{
			iVar16 = unk_0x299BD3B2DAAE7526(Global_2621444);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				unk_0xCCCB91859C614F91(Global_2621444, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != 1849449579)
				{
					unk_0x92C15BF999ED89EE(&Var17);
					unk_0x16327A71AB47E5CD(iVar13, &Var17);
					if (Var17.f_3 == unk_0x742D2DEFFDC66EB8(iParam0, Global_70671[1 /*14*/].f_12) && Var17.f_4 == unk_0xC563C871267881C4(iParam0, Global_70671[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_70671[1 /*14*/].f_3 == unk_0x4CDD2D1D66ED1DE4(iParam0, func_719(iParam1)) && Global_70671[1 /*14*/].f_4 == unk_0xDCC2BD4C56470D10(iParam0, func_719(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_70670++;
			if (Global_70670 == 1)
			{
				if (func_721(iVar0, 11, func_723(iParam0, 11), -1))
				{
					if (func_732(iVar0, 4, iParam2, &uVar18))
					{
						return func_730(iParam0, 4, uVar18);
					}
				}
				else if (func_731(iVar0, 4, iParam2, &uVar18))
				{
					return func_730(iParam0, 4, uVar18);
				}
			}
			Global_70670 = (Global_70670 - 1);
		}
	}
	return 0;
}

int func_731(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x33B18
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_717(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x88B561883D9520BE(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xCE86001874B11267(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!unk_0x6C297174CFC8C5B2(iVar3, -1100807313, 0))
										{
											*uParam3 = func_728(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_732(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x33BC1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_717(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x88B561883D9520BE(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xCE86001874B11267(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (unk_0x6C297174CFC8C5B2(iVar3, -1100807313, 0))
										{
											*uParam3 = func_728(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_733(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x33C69
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_738(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_737(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_736(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_735(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_734(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_736(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_735(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_734(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_736(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_735(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_734(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_734(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3426E
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_717(iParam0, iParam2, 14, 3);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 1) || unk_0x6C297174CFC8C5B2(func_717(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_717(iParam0, iParam2, 1, 3);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(func_717(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_717(iParam0, iParam2, 14, 4);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 1) || unk_0x6C297174CFC8C5B2(func_717(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_717(iParam0, iParam2, 1, 4);
						}
						return (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(func_717(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_735(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x344EB
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_717(iParam0, iParam2, 1, 3);
					}
					if (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_717(iParam0, iParam2, 1, 4);
					}
					if (unk_0x6C297174CFC8C5B2(iParam3, -1757550583, 0) || unk_0x6C297174CFC8C5B2(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_736(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34910
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_717(iParam0, iParam2, 14, 3);
					}
					return unk_0x6C297174CFC8C5B2(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_717(iParam0, iParam2, 14, 4);
					}
					return unk_0x6C297174CFC8C5B2(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_737(int iParam0, int iParam1, int iParam2)//Position - 0x34C03
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<10> func_738(int iParam0, int iParam1)//Position - 0x34C9C
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_740(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_740(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_740(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_740(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_740(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_740(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_740(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_740(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_740(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_740(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_740(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_739(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_740(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_740(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_740(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_740(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_740(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_740(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_740(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_740(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_740(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_740(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_739(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_740(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_740(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_740(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_740(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_740(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_740(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_740(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_740(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_740(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_740(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_739(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_740(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_740(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_740(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_740(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_740(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_740(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_740(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_740(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_740(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_740(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_740(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_740(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_740(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_740(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_740(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_740(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_740(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_740(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_740(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_740(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_740(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_740(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_740(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_740(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_740(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_740(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_739(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_740(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_740(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_740(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_740(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_740(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_740(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_740(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_740(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_740(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_740(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_740(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_740(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_740(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_740(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_740(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_740(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_740(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_740(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_740(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_740(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_740(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_740(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_740(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_740(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_740(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_739(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_739(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x355CB
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x060EBC19DD9EF446(iParam2, &Var1);
		if (!unk_0x42683C90F2D005ED(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0xDF7B1D9AE5581C01(Var1.f_1, iVar3, &vVar2) && vVar2.z != -1)
				{
					if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_728(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != -1)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_740(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x356F5
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_741(int iParam0, int iParam1)//Position - 0x3573D
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_104555.f_9055.f_99.f_58[120])
					{
						func_744(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_744(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_744(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_744(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_744(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_744(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_744(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[0], Global_104555.f_2353.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_744(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_744(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_744(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_744(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_744(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_744(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_744(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_744(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_744(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_744(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_744(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_744(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_744(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_744(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_744(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_744(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_744(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_744(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_744(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_744(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_744(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_744(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_744(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_744(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_744(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_744(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_744(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_744(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_744(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_744(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_744(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_744(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_744(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_744(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_744(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_744(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_744(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_744(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_744(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_744(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_744(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_744(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_744(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_744(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_744(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_744(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_744(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_742(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_744(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_744(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_744(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[1], Global_104555.f_2353.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_744(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_744(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_744(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_744(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_744(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_744(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_744(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_744(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_744(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_744(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_744(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_744(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_744(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_744(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_744(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_744(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_744(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_744(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_744(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_744(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_744(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_744(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_744(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_744(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_744(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_744(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_744(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_744(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_744(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_744(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_744(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_744(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_744(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_744(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_744(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_744(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_744(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_744(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_744(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_744(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_744(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_744(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_744(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_744(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_742(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_744(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_744(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_744(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_744(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_744(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[2], Global_104555.f_2353.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_744(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_744(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_744(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_744(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_744(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_744(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_744(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_744(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_744(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_744(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_744(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_744(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_744(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_744(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_744(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_744(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_744(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_744(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_744(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_744(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_744(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_744(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_744(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_744(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_744(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_744(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_744(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_744(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_744(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_744(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_744(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_744(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_744(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_744(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_744(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_744(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_744(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_744(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_744(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_744(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_744(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_744(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_744(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_742(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_744(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_744(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_744(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_744(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_744(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_744(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_744(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_744(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_744(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_744(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_744(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_744(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_744(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_744(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_744(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_744(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_744(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_744(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_744(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_744(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_744(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_744(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_744(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_744(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_744(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_744(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_742(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_744(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_744(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_744(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_744(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_744(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_744(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_744(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_744(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_744(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_744(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_744(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_744(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_744(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_744(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_744(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_744(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_744(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_744(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_744(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_744(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_744(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_744(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_744(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_744(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_744(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_744(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_744(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_744(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_742(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_742(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37585
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x23A6BE673BD02B2D(iVar0, 0);
	unk_0x54F960113E1CDCA9((iParam2 - iParam3), &Var1);
	if (!unk_0x42683C90F2D005ED(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0x4D94EF46ACF845D4(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						unk_0x74B493EE892897A5(&Var3);
						unk_0xD1994E7F12547273(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_743(vVar2.z)] = vVar2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_743(vVar2.z)] = func_728(iParam1, vVar2.x, func_743(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != -1)
				{
					(*uParam0)[func_743(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_743(int iParam0)//Position - 0x3776F
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_744(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x3781F
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

struct<14> func_745(int iParam0, int iParam1, int iParam2)//Position - 0x37890
{
	func_791();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_775(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_746(iParam1, iParam2);
	}
	return Global_70671[0 /*14*/];
}

void func_746(int iParam0, int iParam1)//Position - 0x378CD
{
	switch (iParam0)
	{
		case 2:
			func_774(iParam1);
			break;
		
		case 11:
			func_773(iParam1);
			break;
		
		case 8:
			func_768(iParam1);
			break;
		
		case 9:
			func_767(iParam1);
			break;
		
		case 3:
			func_766(iParam1);
			break;
		
		case 4:
			func_765(iParam1);
			break;
		
		case 6:
			func_764(iParam1);
			break;
		
		case 1:
			func_763(iParam1);
			break;
		
		case 7:
			func_762(iParam1);
			break;
		
		case 10:
			func_761(iParam1);
			break;
		
		case 14:
			func_760(iParam1);
			break;
		
		case 12:
			func_759(iParam1);
			break;
		
		case 5:
			func_758(iParam1);
			break;
		
		case 0:
			func_756(iParam1);
			break;
		
		case 13:
			func_747(iParam1);
			break;
	}
}

void func_747(int iParam0)//Position - 0x379BD
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	switch (iParam0)
	{
		case 31:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			break;
	}
	func_748(&(Global_70671[0 /*14*/]), iVar7, iParam0, &sVar2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_748(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x37B78
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_755(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x8B948C59217A295D(sParam3) != unk_0x8B948C59217A295D("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 5);
		}
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 6);
		if (func_85(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x6C297174CFC8C5B2(Global_2621444, 1827025211, 0))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_753(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_753(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_753(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_753(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_753(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_6), 2);
			}
			if (!func_753(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 5);
		if (func_752(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
		}
		if (func_752(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
		if (!func_752(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_85(14))
			{
				return;
			}
			iVar0 = func_100(func_751(iParam1, uParam0->f_2), Global_70668, 0);
			if (unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			}
			iVar0 = func_100(func_750(iParam1, uParam0->f_2), Global_70668, 0);
			if (unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
			{
				unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
			}
			if (func_749(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_100(iVar1, Global_70668, 0);
				if (!unk_0xC80D31E4B587871C(iVar0, uParam0->f_1))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 1);
			unk_0x872F1C1F8587CCC7(&(uParam0->f_6), 2);
		}
	}
}

bool func_749(int iParam0, int iParam1, var uParam2)//Position - 0x37F09
{
	*uParam2 = 975;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 976;
					break;
				
				case 3:
					*uParam2 = 1426;
					break;
				
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 9:
					*uParam2 = 1435;
					break;
				
				case 10:
					*uParam2 = 1437;
					break;
				
				case 1:
					*uParam2 = 1008;
					break;
				
				case 7:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
				
				case 12:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 977;
					break;
				
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 9:
					*uParam2 = 1436;
					break;
				
				case 7:
					*uParam2 = 1439;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 978;
					break;
				
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 7:
					*uParam2 = 1440;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	}
	return *uParam2 != 975;
}

int func_750(int iParam0, int iParam1)//Position - 0x38311
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 924;
					break;
				
				case 3:
					return 1411;
					break;
				
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 9:
					return 1420;
					break;
				
				case 10:
					return 1422;
					break;
				
				case 1:
					return 956;
					break;
				
				case 7:
					return 1423;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
				
				case 12:
					return 975;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 925;
					break;
				
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 9:
					return 1421;
					break;
				
				case 7:
					return 1424;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 926;
					break;
				
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 7:
					return 1425;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 973;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 974;
					break;
			}
			break;
	}
	return 932;
}

int func_751(int iParam0, int iParam1)//Position - 0x3870C
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 872;
					break;
				
				case 3:
					return 1396;
					break;
				
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 9:
					return 1405;
					break;
				
				case 10:
					return 1407;
					break;
				
				case 1:
					return 904;
					break;
				
				case 7:
					return 1408;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
				
				case 12:
					return 923;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 873;
					break;
				
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 9:
					return 1406;
					break;
				
				case 7:
					return 1409;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 874;
					break;
				
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 7:
					return 1410;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 921;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 922;
					break;
			}
			break;
	}
	return 880;
}

int func_752(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x38B07
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x872F1C1F8587CCC7(&(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xC80D31E4B587871C(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_753(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x39A25
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_70668;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_754(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_100(iVar2, iVar0, 0);
		return unk_0xC80D31E4B587871C(iVar3, iVar1);
	}
	return 0;
}

bool func_754(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x39A67
{
	int iVar0;
	
	*uParam2 = 7872;
	if ((bParam4 && Global_4264612) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 932;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 932;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 932;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 932;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 932;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 932;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 932;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 932;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 932;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4264612)
		{
			iVar0 = unk_0xEE7957BF5F06F733(iParam0);
		}
		else
		{
			iVar0 = unk_0x412F97477A158C0F(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xEE7957BF5F06F733(iParam0);
	}
	else
	{
		iVar0 = unk_0x412F97477A158C0F(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1756;
					break;
				
				case 1:
					*uParam2 = 1757;
					break;
				
				case 2:
					*uParam2 = 1758;
					break;
				
				case 3:
					*uParam2 = 1759;
					break;
				
				case 4:
					*uParam2 = 1760;
					break;
				
				case 5:
					*uParam2 = 1761;
					break;
				
				case 6:
					*uParam2 = 1768;
					break;
				
				case 7:
					*uParam2 = 1769;
					break;
				
				case 8:
					*uParam2 = 1770;
					break;
				
				case 9:
					*uParam2 = 1771;
					break;
				
				case 10:
					*uParam2 = 1772;
					break;
				
				case 11:
					*uParam2 = 1773;
					break;
				
				case 12:
					*uParam2 = 1774;
					break;
				
				case 13:
					*uParam2 = 1782;
					break;
				
				case 14:
					*uParam2 = 1783;
					break;
				
				case 15:
					*uParam2 = 1884;
					break;
				
				case 16:
					*uParam2 = 1885;
					break;
				
				case 17:
					*uParam2 = 1916;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2038;
					break;
				
				case 24:
					*uParam2 = 2039;
					break;
				
				case 25:
					*uParam2 = 2065;
					break;
				
				case 26:
					*uParam2 = 2066;
					break;
				
				case 27:
					*uParam2 = 2067;
					break;
				
				case 28:
					*uParam2 = 2068;
					break;
				
				case 29:
					*uParam2 = 2069;
					break;
				
				case 30:
					*uParam2 = 2070;
					break;
				
				case 31:
					*uParam2 = 2071;
					break;
				
				case 32:
					*uParam2 = 2072;
					break;
				
				case 33:
					*uParam2 = 2073;
					break;
				
				case 34:
					*uParam2 = 2074;
					break;
				
				case 35:
					*uParam2 = 2321;
					break;
				
				case 36:
					*uParam2 = 2322;
					break;
				
				case 37:
					*uParam2 = 2378;
					break;
				
				case 38:
					*uParam2 = 2379;
					break;
				
				case 39:
					*uParam2 = 2380;
					break;
				
				case 40:
					*uParam2 = 2381;
					break;
				
				case 41:
					*uParam2 = 2440;
					break;
				
				case 42:
					*uParam2 = 2441;
					break;
				
				case 43:
					*uParam2 = 2442;
					break;
				
				case 44:
					*uParam2 = 2443;
					break;
				
				case 45:
					*uParam2 = 2444;
					break;
				
				case 46:
					*uParam2 = 2445;
					break;
				
				case 47:
					*uParam2 = 2446;
					break;
				
				case 48:
					*uParam2 = 2447;
					break;
				
				case 49:
					*uParam2 = 2448;
					break;
				
				case 50:
					*uParam2 = 2449;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3185;
					break;
				
				case 63:
					*uParam2 = 3186;
					break;
				
				case 64:
					*uParam2 = 3187;
					break;
				
				case 65:
					*uParam2 = 3188;
					break;
				
				case 66:
					*uParam2 = 3189;
					break;
				
				case 67:
					*uParam2 = 3190;
					break;
				
				case 68:
					*uParam2 = 3658;
					break;
				
				case 69:
					*uParam2 = 3659;
					break;
				
				case 70:
					*uParam2 = 3660;
					break;
				
				case 71:
					*uParam2 = 3661;
					break;
				
				case 72:
					*uParam2 = 3662;
					break;
				
				case 73:
					*uParam2 = 3663;
					break;
				
				case 74:
					*uParam2 = 3664;
					break;
				
				case 75:
					*uParam2 = 3665;
					break;
				
				case 76:
					*uParam2 = 3666;
					break;
				
				case 77:
					*uParam2 = 3667;
					break;
				
				case 78:
					*uParam2 = 3775;
					break;
				
				case 79:
					*uParam2 = 3776;
					break;
				
				case 80:
					*uParam2 = 3777;
					break;
				
				case 81:
					*uParam2 = 3778;
					break;
				
				case 82:
					*uParam2 = 3779;
					break;
				
				case 83:
					*uParam2 = 3780;
					break;
				
				case 84:
					*uParam2 = 3781;
					break;
				
				case 85:
					*uParam2 = 3782;
					break;
				
				case 86:
					*uParam2 = 3885;
					break;
				
				case 87:
					*uParam2 = 3886;
					break;
				
				case 88:
					*uParam2 = 3887;
					break;
				
				case 89:
					*uParam2 = 5320;
					break;
				
				case 90:
					*uParam2 = 5321;
					break;
				
				case 91:
					*uParam2 = 5322;
					break;
				
				case 92:
					*uParam2 = 5323;
					break;
				
				case 93:
					*uParam2 = 5324;
					break;
				
				case 94:
					*uParam2 = 5325;
					break;
				
				case 95:
					*uParam2 = 5326;
					break;
				
				case 96:
					*uParam2 = 5327;
					break;
				
				case 97:
					*uParam2 = 5328;
					break;
				
				case 98:
					*uParam2 = 5329;
					break;
				
				case 99:
					*uParam2 = 5330;
					break;
				
				case 100:
					*uParam2 = 5331;
					break;
				
				case 101:
					*uParam2 = 5377;
					break;
				
				case 102:
					*uParam2 = 5378;
					break;
				
				case 103:
					*uParam2 = 5379;
					break;
				
				case 104:
					*uParam2 = 5380;
					break;
				
				case 105:
					*uParam2 = 5381;
					break;
				
				case 106:
					*uParam2 = 5382;
					break;
				
				case 107:
					*uParam2 = 5383;
					break;
				
				case 108:
					*uParam2 = 5384;
					break;
				
				case 109:
					*uParam2 = 5385;
					break;
				
				case 110:
					*uParam2 = 5386;
					break;
				
				case 111:
					*uParam2 = 5387;
					break;
				
				case 112:
					*uParam2 = 5388;
					break;
				
				case 113:
					*uParam2 = 5389;
					break;
				
				case 114:
					*uParam2 = 5390;
					break;
				
				case 115:
					*uParam2 = 5391;
					break;
				
				case 116:
					*uParam2 = 5392;
					break;
				
				case 117:
					*uParam2 = 5393;
					break;
				
				case 118:
					*uParam2 = 5394;
					break;
				
				case 119:
					*uParam2 = 5395;
					break;
				
				case 120:
					*uParam2 = 5396;
					break;
				
				case 121:
					*uParam2 = 5397;
					break;
				
				case 122:
					*uParam2 = 5398;
					break;
				
				case 123:
					*uParam2 = 5399;
					break;
				
				case 124:
					*uParam2 = 6105;
					break;
				
				case 125:
					*uParam2 = 6106;
					break;
				
				case 126:
					*uParam2 = 6107;
					break;
				
				case 127:
					*uParam2 = 6108;
					break;
				
				case 128:
					*uParam2 = 6109;
					break;
				
				case 129:
					*uParam2 = 6110;
					break;
				
				case 130:
					*uParam2 = 6111;
					break;
				
				case 131:
					*uParam2 = 6112;
					break;
				
				case 132:
					*uParam2 = 6113;
					break;
				
				case 133:
					*uParam2 = 6114;
					break;
				
				case 134:
					*uParam2 = 6115;
					break;
				
				case 135:
					*uParam2 = 6116;
					break;
				
				case 136:
					*uParam2 = 6117;
					break;
				
				case 137:
					*uParam2 = 6118;
					break;
				
				case 138:
					*uParam2 = 6119;
					break;
				
				case 139:
					*uParam2 = 6418;
					break;
				
				case 140:
					*uParam2 = 6419;
					break;
				
				case 141:
					*uParam2 = 6420;
					break;
				
				case 142:
					*uParam2 = 6421;
					break;
				
				case 143:
					*uParam2 = 6422;
					break;
				
				case 144:
					*uParam2 = 6423;
					break;
				
				case 145:
					*uParam2 = 6424;
					break;
				
				case 146:
					*uParam2 = 6425;
					break;
				
				case 147:
					*uParam2 = 6426;
					break;
				
				case 148:
					*uParam2 = 6427;
					break;
				
				case 149:
					*uParam2 = 6428;
					break;
				
				case 150:
					*uParam2 = 6429;
					break;
				
				case 151:
					*uParam2 = 6430;
					break;
				
				case 152:
					*uParam2 = 6431;
					break;
				
				case 153:
					*uParam2 = 6432;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (system::floor((system::to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1762;
					break;
				
				case 1:
					*uParam2 = 1763;
					break;
				
				case 2:
					*uParam2 = 1764;
					break;
				
				case 3:
					*uParam2 = 1765;
					break;
				
				case 4:
					*uParam2 = 1766;
					break;
				
				case 5:
					*uParam2 = 1767;
					break;
				
				case 6:
					*uParam2 = 1775;
					break;
				
				case 7:
					*uParam2 = 1776;
					break;
				
				case 8:
					*uParam2 = 1777;
					break;
				
				case 9:
					*uParam2 = 1778;
					break;
				
				case 10:
					*uParam2 = 1779;
					break;
				
				case 11:
					*uParam2 = 1780;
					break;
				
				case 12:
					*uParam2 = 1781;
					break;
				
				case 13:
					*uParam2 = 1784;
					break;
				
				case 14:
					*uParam2 = 1785;
					break;
				
				case 15:
					*uParam2 = 1886;
					break;
				
				case 16:
					*uParam2 = 1887;
					break;
				
				case 17:
					*uParam2 = 1917;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2040;
					break;
				
				case 24:
					*uParam2 = 2041;
					break;
				
				case 25:
					*uParam2 = 2075;
					break;
				
				case 26:
					*uParam2 = 2076;
					break;
				
				case 27:
					*uParam2 = 2077;
					break;
				
				case 28:
					*uParam2 = 2078;
					break;
				
				case 29:
					*uParam2 = 2079;
					break;
				
				case 30:
					*uParam2 = 2080;
					break;
				
				case 31:
					*uParam2 = 2081;
					break;
				
				case 32:
					*uParam2 = 2082;
					break;
				
				case 33:
					*uParam2 = 2083;
					break;
				
				case 34:
					*uParam2 = 2084;
					break;
				
				case 35:
					*uParam2 = 2323;
					break;
				
				case 36:
					*uParam2 = 2324;
					break;
				
				case 37:
					*uParam2 = 2382;
					break;
				
				case 38:
					*uParam2 = 2383;
					break;
				
				case 39:
					*uParam2 = 2384;
					break;
				
				case 40:
					*uParam2 = 2385;
					break;
				
				case 41:
					*uParam2 = 2450;
					break;
				
				case 42:
					*uParam2 = 2451;
					break;
				
				case 43:
					*uParam2 = 2452;
					break;
				
				case 44:
					*uParam2 = 2453;
					break;
				
				case 45:
					*uParam2 = 2454;
					break;
				
				case 46:
					*uParam2 = 2455;
					break;
				
				case 47:
					*uParam2 = 2456;
					break;
				
				case 48:
					*uParam2 = 2457;
					break;
				
				case 49:
					*uParam2 = 2458;
					break;
				
				case 50:
					*uParam2 = 2459;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3191;
					break;
				
				case 63:
					*uParam2 = 3192;
					break;
				
				case 64:
					*uParam2 = 3193;
					break;
				
				case 65:
					*uParam2 = 3194;
					break;
				
				case 66:
					*uParam2 = 3195;
					break;
				
				case 67:
					*uParam2 = 3196;
					break;
				
				case 68:
					*uParam2 = 3668;
					break;
				
				case 69:
					*uParam2 = 3669;
					break;
				
				case 70:
					*uParam2 = 3670;
					break;
				
				case 71:
					*uParam2 = 3671;
					break;
				
				case 72:
					*uParam2 = 3672;
					break;
				
				case 73:
					*uParam2 = 3673;
					break;
				
				case 74:
					*uParam2 = 3674;
					break;
				
				case 75:
					*uParam2 = 3675;
					break;
				
				case 76:
					*uParam2 = 3676;
					break;
				
				case 77:
					*uParam2 = 3677;
					break;
				
				case 78:
					*uParam2 = 3783;
					break;
				
				case 79:
					*uParam2 = 3784;
					break;
				
				case 80:
					*uParam2 = 3785;
					break;
				
				case 81:
					*uParam2 = 3786;
					break;
				
				case 82:
					*uParam2 = 3787;
					break;
				
				case 83:
					*uParam2 = 3788;
					break;
				
				case 84:
					*uParam2 = 3789;
					break;
				
				case 85:
					*uParam2 = 3790;
					break;
				
				case 86:
					*uParam2 = 3888;
					break;
				
				case 87:
					*uParam2 = 3889;
					break;
				
				case 88:
					*uParam2 = 3890;
					break;
				
				case 89:
					*uParam2 = 5332;
					break;
				
				case 90:
					*uParam2 = 5333;
					break;
				
				case 91:
					*uParam2 = 5334;
					break;
				
				case 92:
					*uParam2 = 5335;
					break;
				
				case 93:
					*uParam2 = 5336;
					break;
				
				case 94:
					*uParam2 = 5337;
					break;
				
				case 95:
					*uParam2 = 5338;
					break;
				
				case 96:
					*uParam2 = 5339;
					break;
				
				case 97:
					*uParam2 = 5340;
					break;
				
				case 98:
					*uParam2 = 5341;
					break;
				
				case 99:
					*uParam2 = 5342;
					break;
				
				case 100:
					*uParam2 = 5343;
					break;
				
				case 101:
					*uParam2 = 5400;
					break;
				
				case 102:
					*uParam2 = 5401;
					break;
				
				case 103:
					*uParam2 = 5402;
					break;
				
				case 104:
					*uParam2 = 5403;
					break;
				
				case 105:
					*uParam2 = 5404;
					break;
				
				case 106:
					*uParam2 = 5405;
					break;
				
				case 107:
					*uParam2 = 5406;
					break;
				
				case 108:
					*uParam2 = 5407;
					break;
				
				case 109:
					*uParam2 = 5408;
					break;
				
				case 110:
					*uParam2 = 5409;
					break;
				
				case 111:
					*uParam2 = 5410;
					break;
				
				case 112:
					*uParam2 = 5411;
					break;
				
				case 113:
					*uParam2 = 5412;
					break;
				
				case 114:
					*uParam2 = 5413;
					break;
				
				case 115:
					*uParam2 = 5414;
					break;
				
				case 116:
					*uParam2 = 5415;
					break;
				
				case 117:
					*uParam2 = 5416;
					break;
				
				case 118:
					*uParam2 = 5417;
					break;
				
				case 119:
					*uParam2 = 5418;
					break;
				
				case 120:
					*uParam2 = 5419;
					break;
				
				case 121:
					*uParam2 = 5420;
					break;
				
				case 122:
					*uParam2 = 5421;
					break;
				
				case 123:
					*uParam2 = 5422;
					break;
				
				case 124:
					*uParam2 = 6120;
					break;
				
				case 125:
					*uParam2 = 6121;
					break;
				
				case 126:
					*uParam2 = 6122;
					break;
				
				case 127:
					*uParam2 = 6123;
					break;
				
				case 128:
					*uParam2 = 6124;
					break;
				
				case 129:
					*uParam2 = 6125;
					break;
				
				case 130:
					*uParam2 = 6126;
					break;
				
				case 131:
					*uParam2 = 6127;
					break;
				
				case 132:
					*uParam2 = 6128;
					break;
				
				case 133:
					*uParam2 = 6129;
					break;
				
				case 134:
					*uParam2 = 6130;
					break;
				
				case 135:
					*uParam2 = 6131;
					break;
				
				case 136:
					*uParam2 = 6132;
					break;
				
				case 137:
					*uParam2 = 6133;
					break;
				
				case 138:
					*uParam2 = 6134;
					break;
				
				case 139:
					*uParam2 = 6433;
					break;
				
				case 140:
					*uParam2 = 6434;
					break;
				
				case 141:
					*uParam2 = 6435;
					break;
				
				case 142:
					*uParam2 = 6436;
					break;
				
				case 143:
					*uParam2 = 6437;
					break;
				
				case 144:
					*uParam2 = 6438;
					break;
				
				case 145:
					*uParam2 = 6439;
					break;
				
				case 146:
					*uParam2 = 6440;
					break;
				
				case 147:
					*uParam2 = 6441;
					break;
				
				case 148:
					*uParam2 = 6442;
					break;
				
				case 149:
					*uParam2 = 6443;
					break;
				
				case 150:
					*uParam2 = 6444;
					break;
				
				case 151:
					*uParam2 = 6445;
					break;
				
				case 152:
					*uParam2 = 6446;
					break;
				
				case 153:
					*uParam2 = 6447;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 7872;
}

int func_755(int iParam0)//Position - 0x3B28C
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_756(int iParam0)//Position - 0x3B360
{
	int iVar0;
	
	iVar0 = 0;
	Global_70671[0 /*14*/].f_5 = 4;
	func_757(iVar0, iParam0, 0);
}

void func_757(int iParam0, int iParam1, int iParam2)//Position - 0x3B37E
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_70671[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = unk_0x23A6BE673BD02B2D(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			unk_0x54F960113E1CDCA9(iVar3, &Var2);
			if (!unk_0x42683C90F2D005ED(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_748(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_748(&(Global_70671[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x92C15BF999ED89EE(&Var6);
		iVar9 = 0;
		iVar10 = unk_0xB214E83F6B0D8129(iVar1, 6, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			unk_0x53CE22B0EDFAB540(iVar8, &Var6);
			if (!unk_0x42683C90F2D005ED(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_2621444 = Var6.f_1;
					Global_2621445 = Var6;
					func_748(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x6C297174CFC8C5B2(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x74B493EE892897A5(&Var11);
		iVar13 = 0;
		iVar14 = unk_0xB214E83F6B0D8129(iVar1, 6, -1, 0, -1, func_719(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			unk_0x19002A6D4CBCE1E2(iVar12, &Var11);
			if (!unk_0x42683C90F2D005ED(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_2621444 = Var11.f_1;
					Global_2621445 = Var11;
					func_748(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x6C297174CFC8C5B2(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_758(int iParam0)//Position - 0x3B5F9
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		default:
			Global_70671[0 /*14*/].f_5 = 4;
			func_757(iVar7, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_748(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_759(int iParam0)//Position - 0x3B6FA
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar3 = 0;
			iVar4 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_70671[0 /*14*/].f_5 = 4;
			func_757(iVar7, iParam0, 28);
			return;
			break;
	}
	func_748(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_760(int iParam0)//Position - 0x3B9D7
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	iVar8 = 0;
	switch (iParam0)
	{
		case 0:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 235;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 5000;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 400;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 375;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 325;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 255;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 360;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 3970;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1355;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 230;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 515;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 545;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 155;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 1440;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 35;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 30;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 25;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 50;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 40;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 575;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 605;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 285;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 2125;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 0;
			iVar8 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 295;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 195;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 160;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 855;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 1615;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 1130;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 165;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 110;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 145;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 105;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 115;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 390;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 395;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 425;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 600;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 590;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 595;
			iVar5 = 0;
			iVar8 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 555;
			iVar5 = 0;
			iVar8 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 1060;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 1400;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 1315;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 1230;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 1145;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 8450;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 675;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 8750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 975;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 865;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 890;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 730;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 650;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 645;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 755;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 13850;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 2900;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 2895;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 12500;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 15000;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 14750;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 13150;
			iVar5 = 0;
			iVar8 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 2925;
			iVar5 = 0;
			iVar8 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 970;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 650;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 180;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 595;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 160;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 545;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 590;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1125;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 740;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 805;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 6250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 3585;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 4075;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 4935;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 5600;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 4790;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 2245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 250;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 210;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 245;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 1205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 205;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 2215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 215;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 2835;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 2450;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 2515;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 50;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 5000;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 2820;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 2435;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 2500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 4815;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 4795;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 4305;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 4965;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 480;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 465;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 4320;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 2390;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 2005;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 2070;
			iVar5 = 1;
			iVar8 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 70;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 60;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 570;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 525;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 645;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 260;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 4065;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 65;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 4275;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 80;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 85;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 90;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 2315;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 1930;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 1995;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 3660;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 4165;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 3670;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 3620;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 3610;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 4140;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 130;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 325;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 110;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 115;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 120;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 1490;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 1105;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 1170;
			iVar5 = 1;
			iVar8 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 0;
			iVar5 = 1;
			iVar8 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 825;
			iVar5 = 6;
			iVar8 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 0;
			iVar5 = 6;
			iVar8 = 4;
			bVar0 = true;
			break;
	}
	if (iVar8 == 1)
	{
		iVar9 = (iParam0 - 10);
		if (iVar9 >= 0 && iVar9 < 121)
		{
			if (iVar9 > 8)
			{
				iVar9 = (iVar9 - 1);
			}
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_2043[iVar9]) * Global_284993.f_26));
		}
	}
	else if (iVar8 == 2)
	{
		iVar10 = (iParam0 - 131);
		if (iVar10 >= 0 && iVar10 < 24)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_2164[iVar10]) * Global_284993.f_27));
		}
	}
	else if (iVar8 == 3)
	{
		iVar11 = (iParam0 - 155);
		if (iVar11 >= 0 && iVar11 < 128)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_2189[iVar11]) * Global_284993.f_56));
		}
	}
	else if (iVar8 == 4)
	{
		iVar12 = (iParam0 - 319);
		if (iVar12 >= 0 && iVar12 < 10)
		{
			iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_2318[iVar12]) * Global_284993.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_70671[0 /*14*/].f_5 = 4;
		func_757(iVar7, iParam0, 327);
		if (Global_70671[0 /*14*/].f_7 > 0)
		{
			if (unk_0x6C297174CFC8C5B2(Global_2621444, -1757550583, 1))
			{
				Global_70671[0 /*14*/].f_7 = system::round((system::to_float(Global_70671[0 /*14*/].f_7) * Global_284993.f_26));
			}
			else if (unk_0x6C297174CFC8C5B2(Global_2621444, 97230661, 1))
			{
				Global_70671[0 /*14*/].f_7 = system::round((system::to_float(Global_70671[0 /*14*/].f_7) * Global_284993.f_56));
			}
			else if (unk_0x6C297174CFC8C5B2(Global_2621444, 1147826474, 1))
			{
				Global_70671[0 /*14*/].f_7 = system::round((system::to_float(Global_70671[0 /*14*/].f_7) * Global_284993.f_28));
			}
		}
	}
	else
	{
		func_748(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
	}
}

void func_761(int iParam0)//Position - 0x3E7AD
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_70671[0 /*14*/].f_5 = 4;
			func_757(iVar7, iParam0, 6);
			return;
			break;
	}
	func_748(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_762(int iParam0)//Position - 0x3E8B0
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			if (Global_262145.f_4140 != -1)
			{
				iVar1 = Global_262145.f_4140;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar3 = 1;
			iVar4 = 4;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar3 = 1;
			iVar4 = 5;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 0;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 1;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar3 = 2;
			iVar4 = 2;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar3 = 2;
			iVar4 = 3;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar3 = 2;
			iVar4 = 4;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar3 = 2;
			iVar4 = 5;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar3 = 3;
			iVar4 = 0;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar3 = 3;
			iVar4 = 1;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar3 = 3;
			iVar4 = 2;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar3 = 3;
			iVar4 = 3;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar3 = 3;
			iVar4 = 4;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar3 = 3;
			iVar4 = 5;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar3 = 4;
			iVar4 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar3 = 4;
			iVar4 = 3;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar3 = 5;
			iVar4 = 4;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar3 = 5;
			iVar4 = 5;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar3 = 6;
			iVar4 = 0;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar3 = 6;
			iVar4 = 1;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar3 = 6;
			iVar4 = 2;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar3 = 6;
			iVar4 = 3;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar3 = 6;
			iVar4 = 4;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar3 = 6;
			iVar4 = 5;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar3 = 7;
			iVar4 = 0;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar3 = 7;
			iVar4 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar3 = 9;
			iVar4 = 0;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_70671[0 /*14*/].f_5 = 4;
			func_757(iVar7, iParam0, 55);
			if (Global_70671[0 /*14*/].f_7 > 0)
			{
				Global_70671[0 /*14*/].f_7 = system::round((system::to_float(Global_70671[0 /*14*/].f_7) * Global_284993.f_58));
			}
			return;
			break;
	}
	iVar1 = system::round((system::to_float(iVar1) * Global_284993.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	func_748(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_763(int iParam0)//Position - 0x3F08A
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_70671[0 /*14*/].f_5 = 4;
			func_757(iVar7, iParam0, 26);
			if (Global_70671[0 /*14*/].f_7 > 0)
			{
				Global_70671[0 /*14*/].f_7 = system::round((system::to_float(Global_70671[0 /*14*/].f_7) * Global_284993.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar3, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar4, 16);
	iVar8 = (iParam0 - 1);
	if (iVar8 >= 0 && iVar8 < 26)
	{
		iVar1 = system::round(((system::to_float(iVar1) * Global_262145.f_2016[iVar8]) * Global_284993.f_29));
	}
	func_748(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_764(int iParam0)//Position - 0x3F36D
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	switch (iParam0)
	{
		case 0:
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar3 = 1;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar3 = 1;
			iVar4 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar3 = 1;
			iVar4 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar3 = 1;
			iVar4 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar3 = 1;
			iVar4 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar3 = 1;
			iVar4 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar3 = 3;
			iVar4 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar3 = 3;
			iVar4 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar3 = 3;
			iVar4 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar3 = 3;
			iVar4 = 13;
			iVar1 = 1560;
			break;
		
			break;