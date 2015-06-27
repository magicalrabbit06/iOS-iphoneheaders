/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <PhotoLibrary/PLCommentsViewControllerDelegate.h>
#import <PhotoLibrary/PLPhotoTileCloudPlaceholderViewDelegate.h>

@protocol PLTilePlaceholderView, PLPhotoTileViewControllerDelegate, OS_dispatch_source;
@class UIImage, PHAsset, PLImageScrollView, PLExpandableImageView, PLVideoView, UIImageView, PLPhotoTileBadgeView, UIView, PLCommentsViewController, UIGestureRecognizer, NSObject, PLTileContainerView, PHCachingImageManager, NSArray, NSString;

@interface PLPhotoTileViewController : UIViewController <UIScrollViewDelegate, UIGestureRecognizerDelegate, PLCommentsViewControllerDelegate, PLPhotoTileCloudPlaceholderViewDelegate> {

	UIImage* _image;
	UIImage* _pendingImage;
	UIImage* _unscaledImage;
	PHAsset* _modelPhoto;
	PLImageScrollView* _scrollView;
	PLExpandableImageView* _imageView;
	PLVideoView* _videoView;
	UIImageView* _gradientView;
	PLPhotoTileBadgeView* _badgeView;
	UIImageView* _reviewCheckmarkImageView;
	UIView*<PLTilePlaceholderView> _placeholderView;
	char _currentTileDownloadFinished;
	PLCommentsViewController* _commentsViewController;
	UIGestureRecognizer* _singleTapGestureRecognizer;
	UIGestureRecognizer* _doubleTapGestureRecognizer;
	id<PLPhotoTileViewControllerDelegate> _tileDelegate;
	int _imageOrientation;
	CGSize _imageSize;
	CGRect _tileFrame;
	char _zoomToFillInsteadOfToFit;
	char _useLessThanMinZoomForZoomedOutTest;
	char _allowZoomToFill;
	id _orientationDelegate;
	float _cropRectZoomScale;
	CGRect _cropOverlayRect;
	CGRect _cropRect;
	float _doubleTapZoomScale;
	float _minZoomScale;
	float _zoomToFillScale;
	int _mode;
	int _lastDisplayedOrientation;
	char _clientIsTemporarilyWallpaper;
	char _userDidAdjustWallpaper;
	float _wallpaperPortraitZoomScale;
	float _wallpaperLandscapeZoomScale;
	float _zoomScaleBeforeZooming;
	CGRect _cropRectBeforeDragging;
	char _force1XCroppedImage;
	char _forceNativeScreenScale;
	char _centerContentVertically;
	/*^block*/id _didEndZoomingBlock;
	NSObject*<OS_dispatch_source> _dispatchTimer;
	double _dispatchStartTime;
	double _dispatchTimeElapsed;
	char _hasNotedZoom;
	unsigned _imageIsThumbnail : 1;
	unsigned _isTVOut : 1;
	unsigned _zooming : 1;
	unsigned _autoZooming : 1;
	unsigned _zoomGesturesEnabled : 1;
	unsigned _userDidZoom : 1;
	unsigned _ignoreZoomChange : 1;
	unsigned _tileParentIsPageController : 1;
	unsigned _lockedUnderCropOverlay : 1;
	unsigned _viewDidAppear : 1;
	unsigned _viewWillAppear : 1;
	unsigned _didRequestFullSizeImage : 1;
	unsigned _useZoomScaleForCropRect : 1;
	unsigned _avalancheBadgeShouldBeHidden : 1;
	unsigned _badgeShouldBeVisible : 1;
	unsigned _commentsTableVisible : 1;
	PLTileContainerView* _containerView;
	PHCachingImageManager* __cachingImageManager;
	int _fullSizeImageRequestID;
	NSArray* _customCenterOverlayConstraints;
	char _wantsCompactLayout;
	char _reviewing;
	char _picked;
	char _shouldHideProgressIndicator;
	UIView* __customCenterOverlay;
	UIEdgeInsets _overlayInsets;

}

@property (nonatomic,readonly) PHAsset * photo; 
@property (nonatomic,retain) UIImage * thumbnailImage; 
@property (assign,nonatomic) CGRect tileFrame; 
@property (nonatomic,retain) UIImage * unscaledImage;                                                    //@synthesize unscaledImage=_unscaledImage - In the implementation block
@property (assign,nonatomic) char centerContentVertically;                                               //@synthesize centerContentVertically=_centerContentVertically - In the implementation block
@property (assign,nonatomic) UIEdgeInsets overlayInsets;                                                 //@synthesize overlayInsets=_overlayInsets - In the implementation block
@property (assign,nonatomic) char forceNativeScreenScale;                                                //@synthesize forceNativeScreenScale=_forceNativeScreenScale - In the implementation block
@property (assign,nonatomic) char force1XCroppedImage;                                                   //@synthesize force1XCroppedImage=_force1XCroppedImage - In the implementation block
@property (nonatomic,readonly) PLCommentsViewController * commentsViewController;                        //@synthesize commentsViewController=_commentsViewController - In the implementation block
@property (nonatomic,readonly) char commentsTableIsVisible; 
@property (assign,nonatomic) char wantsCompactLayout;                                                    //@synthesize wantsCompactLayout=_wantsCompactLayout - In the implementation block
@property (assign,nonatomic) char reviewing;                                                             //@synthesize reviewing=_reviewing - In the implementation block
@property (assign,nonatomic) char picked;                                                                //@synthesize picked=_picked - In the implementation block
@property (assign,nonatomic) char shouldHideProgressIndicator;                                           //@synthesize shouldHideProgressIndicator=_shouldHideProgressIndicator - In the implementation block
@property (setter=_setCustomCenterOverlay:,nonatomic,retain) UIView * _customCenterOverlay;              //@synthesize _customCenterOverlay=__customCenterOverlay - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
+(CGSize)tileSize;
+(CGSize)tvOutTileSize;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)arg1 imageRef:(CGImageRef)arg2 imageOrientation:(int)arg3 allowZoomToFill:(char)arg4 mode:(int)arg5 ;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)arg1 image:(id)arg2 allowZoomToFill:(char)arg3 mode:(int)arg4 ;
+(id)newPhotoTileViewControllerWithFrame:(CGRect)arg1 modelPhoto:(id)arg2 mode:(int)arg3 ;
+(char)shouldShowPlaceholderForAsset:(id)arg1 ;
-(void)setVideoView:(id)arg1 ;
-(void)setPicked:(char)arg1 ;
-(void)_updateSubviewOrdering;
-(id)cachingImageManager;
-(PHAsset *)photo;
-(char)wantsCompactLayout;
-(void)setWantsCompactLayout:(char)arg1 ;
-(void)removeCommentsTable;
-(void)setCommentsTableVisibility:(char)arg1 duration:(float)arg2 ;
-(id)videoView;
-(id)commentsView;
-(void)updateCenterOverlay;
-(PLCommentsViewController *)commentsViewController;
-(void)setBadgeVisible:(char)arg1 ;
-(float)currentToMinZoomRatio;
-(void)updateForVisibleOverlays:(char)arg1 ;
-(float)minZoomScale;
-(void)zoomToScale:(float)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_handleDoubleTap:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(int)imageOrientation;
-(id)image;
-(int)_imageOrientation;
-(char)gesturesEnabled;
-(void)setGesturesEnabled:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(float)arg2 withProposedSize:(CGSize)arg3 ;
-(void)setZoomScale:(float)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)updateViewConstraints;
-(id)scrollView;
-(id)imageView;
-(char)allowsEditing;
-(UIImage *)thumbnailImage;
-(void)updateCloudDownloadProgress:(float)arg1 ;
-(void)showErrorPlaceholderView;
-(void)didLoadImage;
-(id)initWithModelPhoto:(id)arg1 thumbnailImage:(id)arg2 size:(CGSize)arg3 ;
-(void)setTVOut:(char)arg1 ;
-(void)setTileDelegate:(id)arg1 ;
-(void)setOrientationDelegate:(id)arg1 ;
-(void)setAvalancheBadgesHidden:(char)arg1 ;
-(void)cancelFullSizeImageRequest;
-(void)hideContentView;
-(void)showContentView;
-(void)updateAfterZoomTransitionWithImage:(id)arg1 ;
-(char)photoShouldHaveHDRBadge;
-(void)refreshTileWithFullScreenImage:(id)arg1 modelPhoto:(id)arg2 ;
-(void)forceZoomingGesturesEnabled;
-(void)setZoomingGesturesEnabled:(char)arg1 ;
-(char)commentsTableIsVisible;
-(void)updateAfterCollapse;
-(void)ensureFullSizeImageLoaded;
-(void)resetZoom;
-(void)installVideoOverlay:(id)arg1 ;
-(void)setFullSizeImage:(id)arg1 ;
-(char)isTVOut;
-(float)zoomToFitScale;
-(float)defaultZoomScale;
-(void)setBadgeVisible:(char)arg1 animated:(char)arg2 ;
-(void)setForceNativeScreenScale:(char)arg1 ;
-(void)setForce1XCroppedImage:(char)arg1 ;
-(void)setCropOverlayRect:(CGRect)arg1 forCropRect:(CGRect)arg2 ;
-(void)setOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)noteParentViewControllerDidDisappear;
-(UIImage *)unscaledImage;
-(id)_newOriginalImageForPickerFromCachedData;
-(void)retryDownload;
-(void)_viewWillMoveToSuperView:(id)arg1 ;
-(void)_updateContentInset;
-(void)_centerImageInScrollView;
-(void)_handleSingleTap:(id)arg1 ;
-(void)_setPhoto:(id)arg1 ;
-(void)setTileFrame:(CGRect)arg1 ;
-(void)_setImage:(id)arg1 isThumbnail:(char)arg2 preserveFrame:(char)arg3 ;
-(void)_configureViews;
-(id)initWithModelPhoto:(id)arg1 image:(id)arg2 frame:(CGRect)arg3 isThumbnail:(char)arg4 imageOrientation:(int)arg5 allowZoomToFill:(char)arg6 mode:(int)arg7 ;
-(void)_teardownDispatchTimer;
-(void)_updateVideoViewForModelPhoto;
-(void)_updatePlaceholderImageRect;
-(void)_setCustomCenterOverlay:(id)arg1 ;
-(UIView *)_customCenterOverlay;
-(void)_showBadgeViewIfAppropriate;
-(void)_repositionBadgeView;
-(char)photoShouldHaveAvalancheBadge;
-(void)_installSubview:(id)arg1 ;
-(void)_updatePlaceholderViewAnimated:(char)arg1 ;
-(void)_removePlaceholderView;
-(void)_requestFullSizeImage;
-(char)_clientIsWallpaper;
-(UIEdgeInsets)overlayInsets;
-(char)shouldHideProgressIndicator;
-(void)_updatePlaceholderVisibility;
-(void)_setupBadgeView;
-(void)_updateReviewCheckmark;
-(void)_updateModelPhotoWithImage:(id)arg1 ;
-(void)updateZoomScales;
-(void)_setDefaultZoomScale;
-(void)_updateAggdKeys;
-(char)tileIsOnScreen;
-(void)initializeCommentsTable;
-(void)_performDidEndZoomBlock;
-(float)minRotatedScale;
-(float)_calculateZoomScale:(char)arg1 inView:(id)arg2 ;
-(void)_resetZoomCommon;
-(void)_handleFullSizeImageRequestResult:(id)arg1 dataUTI:(id)arg2 orientation:(int)arg3 ;
-(void)_readOrientation:(int*)arg1 andSize:(CGSize*)arg2 fromImageData:(id)arg3 ;
-(id)newCGImageBackedUIImage;
-(char)force1XCroppedImage;
-(char)forceNativeScreenScale;
-(id)newImageWithCropRect:(CGRect)arg1 minimalCropDimension:(float)arg2 croppedImageData:(id*)arg3 fullScreenImageData:(id*)arg4 fullScreenImage:(CGImage*)arg5 imageCropRect:(CGRect*)arg6 intersectCropWithFullRect:(char)arg7 ;
-(void)_setDidEndZoomingBlock:(/*^block*/id)arg1 ;
-(float)zoomToFillScale;
-(void)_adjustScrollViewContentOffsetForInsets;
-(char)isZoomedOut;
-(void)_adjustZoomForEnteringMode:(char)arg1 ;
-(void)setReviewing:(char)arg1 animated:(char)arg2 ;
-(void)_setupReviewCheckmark;
-(void)commentsControllerInactiveAreaWasTapped:(id)arg1 ;
-(void)commentsControllerWillEnterEditMode:(id)arg1 ;
-(void)commentsControllerDidExitEditMode:(id)arg1 ;
-(void)commentsControllerDidDisplayUnreadComment:(id)arg1 ;
-(void)commentsControllerWillBeginScrolling:(id)arg1 ;
-(id)initForPageController;
-(CGRect)tileFrame;
-(id)expandableImageView;
-(id)tileDelegate;
-(char)userDidAdjustWallpaper;
-(void)setClientIsWallpaper:(char)arg1 ;
-(void)setShouldHideProgressIndicator:(char)arg1 ;
-(char)hasFullSizeImage;
-(id)dictionaryWithCroppedImageForRect:(CGRect)arg1 minimalCropDimension:(float)arg2 withOptions:(int)arg3 ;
-(float)currentToDefaultZoomRatio;
-(void)setAllowsZoomToFill:(char)arg1 ;
-(void)setLockedUnderCropOverlay:(char)arg1 ;
-(void)setReviewing:(char)arg1 ;
-(char)centerContentVertically;
-(void)setCenterContentVertically:(char)arg1 ;
-(void)setUnscaledImage:(UIImage *)arg1 ;
-(char)reviewing;
-(char)picked;
-(void)setThumbnailImage:(UIImage *)arg1 ;
@end
