/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLExpandableView.h>

@class PLImageView, PLManagedAsset, NSString, PLVideoView;

@interface PLExpandableImageView : PLExpandableView {

	PLImageView* _imageView;
	int _imageID;
	CGSize _originalSize;
	double _originalWidth;
	double _originalAngle;
	CGPoint _anchorPoint;
	double _imageRotationAngle;
	double _pinchWidth;
	double _pinchAngle;
	double _pinchScale;
	CGRect _initialExpandingFrame;
	CGRect _originalBounds;
	float _currentAngle;
	CGSize _centerOffset;
	PLManagedAsset* _photo;
	struct {
		unsigned isRotating : 1;
		unsigned didTrack : 1;
		unsigned updateFrame : 1;
		unsigned didLayout : 1;
		unsigned alwaysDoLayout : 1;
		unsigned didComputeCenterOffset : 1;
		unsigned imageIsFullScreen : 1;
	}  _exImageFlags;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,retain) PLVideoView * videoView; 
@property (nonatomic,readonly) bool showsPlaceholder; 
@property (assign,getter=isBorderAndAccessoriesVisible,nonatomic) bool borderAndAccessoriesVisible; 
@property (nonatomic,retain) PLManagedAsset * photo;                                                             //@synthesize photo=_photo - In the implementation block
+(double)imageBorderWidth;
-(id)videoView;
-(void)setVideoView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_contentView;
-(id)image;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(CGSize)imageSize;
-(id)imageView;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
-(id)photo;
-(void)stateDidChangeFrom:(int)arg1 ;
-(void)beginTrackingPinch:(id)arg1 ;
-(float)continueTrackingPinch:(id)arg1 ;
-(float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3 ;
-(void)finishTransition;
-(float)_expansionFraction;
-(void)setBorderAndAccessoriesVisible:(bool)arg1 ;
-(id)initWithFrame:(CGRect)arg1 frameStyle:(int)arg2 withBorder:(bool)arg3 ;
-(id)initWithFrame:(CGRect)arg1 frameStyle:(int)arg2 ;
-(void)_setOriginalSize:(CGSize)arg1 ;
-(float)_borderAlphaForExpansionFraction:(float)arg1 ;
-(void)_updatePinchWidthAndScaleWithLeftPoint:(CGPoint)arg1 rightPoint:(CGPoint)arg2 ;
-(void)_updateBorderAndAccessoriesAlpha;
-(void)setSize:(CGSize)arg1 angle:(float)arg2 ;
-(CGSize)_newSizeFromSize:(CGSize)arg1 ;
-(float)_expandedScale;
-(CGRect)_snappedExpandedFrame;
-(void)_bounceToPlace:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_bounceBack:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)setTransformAndCenterForFrame:(CGRect)arg1 ;
-(bool)isBorderAndAccessoriesVisible;
-(void)setImage:(id)arg1 isFullscreen:(bool)arg2 ;
-(void)setPosterImage:(id)arg1 regionOfInterest:(CGRect)arg2 ;
-(bool)showsPlaceholder;
-(void)setShowsPlaceholder:(bool)arg1 ;
-(void)setShadowEnabled:(bool)arg1 ;
-(bool)isShadowEnabled;
-(void)setTextBadgeString:(id)arg1 ;
-(void)renderSnapshotInContext:(CGContextRef)arg1 ;
-(CGRect)frameOfImage;
-(double)imageRotationAngle;
-(bool)isBeingManipulated;
-(void)setPhoto:(id)arg1 ;
-(float)_currentScale;
@end

