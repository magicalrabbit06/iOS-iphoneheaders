/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIRenditionMetrics : NSObject {

	CGSize _imageSize;
	CGSize _edgeBottomLeftMargin;
	CGSize _edgeTopRightMargin;
	CGSize _contentBottomLeftMargin;
	CGSize _contentTopRightMargin;
	double _baseline;
	double _scale;
	struct {
		unsigned scalesVertically : 1;
		unsigned scalesHorizontally : 1;
		unsigned reserved : 14;
	}  _crmFlags;

}
-(double)scale;
-(CGSize)imageSize;
-(CGRect)contentRect;
-(id)initWithImageSize:(CGSize)arg1 edgeBottomLeft:(CGSize)arg2 edgeTopRight:(CGSize)arg3 contentBottomLeft:(CGSize)arg4 contentTopRight:(CGSize)arg5 baseline:(double)arg6 scalesVertically:(BOOL)arg7 scalesHorizontally:(BOOL)arg8 scale:(double)arg9 ;
-(CGSize)edgeBottomLeftMargin;
-(CGSize)edgeTopRightMargin;
-(CGSize)contentBottomLeftMargin;
-(CGSize)contentTopRightMargin;
-(BOOL)scalesVertically;
-(BOOL)scalesHorizontally;
-(CGRect)edgeRect;
-(CGRect)insetRectWithMetrics:(CGRect)arg1 ;
-(CGRect)insetContentRectWithMetrics:(CGRect)arg1 ;
-(BOOL)hasOpaqueContentBounds;
-(double)baseline;
@end
