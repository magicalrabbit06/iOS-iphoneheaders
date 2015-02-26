/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPen.h>

@interface MFPhonePen : MFPen {

	float m_PixelSize;

}
+(id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 LPToDPTransform:(CGAffineTransform)arg5 ;
-(id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(void)strokePath:(id)arg1 :(id)arg2 ;
-(void)applyDashedLinesToPath:(id)arg1 ;
-(void)applyLineCapStyleToPath:(id)arg1 ;
-(void)applyLineJoinStyleToPath:(id)arg1 :(id)arg2 ;
@end
