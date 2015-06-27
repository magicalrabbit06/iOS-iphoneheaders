/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class NSTimer, NSMutableArray, NSArray;

@interface MKPlaceHeaderBackgroundView_Slideshow : MKPlaceHeaderBackgroundView {

	NSTimer* _timer;
	NSMutableArray* _images;
	int _nextImageIndex;
	unsigned _iteration;
	NSArray* _slides;
	struct {
		unsigned hasMultiplePhotos;
		unsigned isFirstImageRequested;
		unsigned isFirstImagePreloaded;
	}  _slideShowFlags;

}
+(char)canDisplayImagesForMapItem:(id)arg1 ;
-(void)prepareForPresentation;
-(void)pauseBackgroundAnimation;
-(void)addSlideShowImage:(id)arg1 ;
-(void)loadBusinessImages:(unsigned)arg1 ;
-(void)showNextImage;
-(void)clearSlideShowImages;
-(void)preloadBackgroundContent;
-(void)loadBackgroundContent;
-(void)startBackgroundAnimation;
-(id)nextSlide;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)reset;
-(void)resume;
-(void)present;
-(void)pause;
-(id)currentSlide;
@end
