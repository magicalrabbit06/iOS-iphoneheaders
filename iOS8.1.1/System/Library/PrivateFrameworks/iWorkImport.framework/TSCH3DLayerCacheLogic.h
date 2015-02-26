/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <iWorkImport/TSCH3DLayerCacheLogicProtocol.h>

@class CALayer;

@interface TSCH3DLayerCacheLogic : NSObject <TSCHUnretainedParent, TSCH3DLayerCacheLogicProtocol> {

	CALayer* mParent;
	CGRect mDrawingBounds;
	id mRepLayerDelegate;

}

@property (assign,nonatomic) id repLayerDelegate; 
+(BOOL)cacheable;
-(void)clearParent;
-(void)setContentsIsValid:(BOOL)arg1 ;
-(void)setContentsIsValid:(BOOL)arg1 highQuality:(BOOL)arg2 ;
-(BOOL)contentsIsHighQuality;
-(BOOL)contentsIsValid;
-(BOOL)isClipped;
-(BOOL)isClippedAreaVisibleInRect:(CGRect)arg1 ;
-(id)repLayerDelegate;
-(void)setRepLayerDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(void)setDrawingBounds:(CGRect)arg1 ;
-(id)initWithParent:(id)arg1 ;
@end
