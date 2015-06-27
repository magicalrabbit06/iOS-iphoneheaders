/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:22:27 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIShapeEffectStack.h>

@interface CUITextEffectStack : CUIShapeEffectStack {

	BOOL renderHighQuality;

}
-(id)initWithEffectPreset:(id)arg1 ;
-(char)useCoreImageRendering;
-(CGContextRef)newGlyphMaskContextForBounds:(CGRect)arg1 fromContext:(CGContextRef)arg2 withScale:(float)arg3 ;
-(void)drawProcessedMask:(CGContextRef)arg1 atBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 withScale:(float)arg4 ;
-(CGColorRef)newBackgroundPatternColorWithSize:(CGSize)arg1 contentScale:(float)arg2 forContext:(CGContextRef)arg3 ;
-(void)_drawShadow:(SCD_Struct_CU28)arg1 forGlyphs:(const unsigned short*)arg2 inContext:(CGContextRef)arg3 usingFont:(CTFontRef)arg4 withAdvances:(const CGSize*)arg5 count:(unsigned long)arg6 ;
-(void)_drawShadow:(SCD_Struct_CU28)arg1 forGlyphs:(const unsigned short*)arg2 inContext:(CGContextRef)arg3 usingFont:(CTFontRef)arg4 atPositions:(const CGPoint*)arg5 count:(unsigned long)arg6 ;
-(void)_drawShadow:(SCD_Struct_CU28)arg1 usingQuartz:(/*^block*/id)arg2 inContext:(CGContextRef)arg3 ;
-(float)effectiveInteriorFillOpacity;
-(void)drawGlyphs:(const unsigned short*)arg1 inContext:(CGContextRef)arg2 usingFont:(CTFontRef)arg3 withAdvances:(const CGSize*)arg4 count:(unsigned long)arg5 lineHeight:(float)arg6 inBounds:(CGRect)arg7 atScale:(float)arg8 ;
-(void)drawGlyphs:(const unsigned short*)arg1 inContext:(CGContextRef)arg2 usingFont:(CTFontRef)arg3 atPositions:(const CGPoint*)arg4 count:(unsigned long)arg5 lineHeight:(float)arg6 inBounds:(CGRect)arg7 atScale:(float)arg8 ;
-(void)drawUsingQuartz:(/*^block*/id)arg1 inContext:(CGContextRef)arg2 inBounds:(CGRect)arg3 atScale:(float)arg4 ;
@end
