/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasDelegate.h>
#import <iWorkImport/TSDErrorPresenter.h>
#import <iWorkImport/TSKChangeSourceObserver.h>
#import <iWorkImport/NSCoding.h>
#import <iWorkImport/TSKScrollViewDelegate.h>
#import <iWorkImport/TSDBackgroundLayoutAndRenderStateDelegate.h>
#import <iWorkImport/TSDRepTrackerDelegateCreation.h>

@protocol TSDInteractiveCanvasControllerDelegate, TSDCanvasLayerHosting, TSDRulerController, TSDEditor, TSDImageHUDController, TSDAnnotationHosting, TSDAnnotationPopoverController;
@class TSDCanvas, CALayer, TSDEditorController, TSDGuideController, TSDUserDefinedGuideController, NSFormatter, NSMutableArray, TSDCanvasAnimation, TSDTrackerManipulatorCoordinator, TSDDynamicOperationController, NSObject, TSDBackgroundLayoutAndRenderState, NSMutableSet, NSArray, TSDTileStorage, TSKDocumentRoot, TSPObjectContext, TSKCommandController, TSKChangeNotifier, TSKAccessController, TSDContainerRep, TSDCanvasView, TSDCanvasLayer, TSDLayoutController, NSString;

@interface TSDInteractiveCanvasController : NSObject <TSDCanvasDelegate, TSDErrorPresenter, TSKChangeSourceObserver, NSCoding, TSKScrollViewDelegate, TSDBackgroundLayoutAndRenderStateDelegate, TSDRepTrackerDelegateCreation> {

	id<TSDInteractiveCanvasControllerDelegate> mDelegate;
	TSDCanvas* mCanvas;
	id<TSDCanvasLayerHosting> mLayerHost;
	CFDictionaryRef mContainerLayersByRep;
	CFDictionaryRef mRepLayersByRep;
	CFDictionaryRef mRepsByRepLayer;
	CFDictionaryRef mRepsByContainerLayer;
	CALayer* mRepContainerLayer;
	TSDEditorController* mEditorController;
	TSDGuideController* mGuideController;
	TSDUserDefinedGuideController* mUserDefinedGuideController;
	char mHasBeenTornDown;
	char mHadLayerHost;
	char mLayerHostHasBeenTornDown;
	NSFormatter* mUnitFormatter;
	char mResizeCanvasOnLayout;
	char mCreateRepsForOffscreenLayouts;
	char mShouldAutoscrollToSelectionAfterLayout;
	char mSuppressAutozoomToSelectionAfterLayout;
	char mShouldAnimateAutoscroll;
	char mShouldCenterSelectionWhenAutoscrolling;
	CALayer* mOverlayLayer;
	char mOverlayLayerSuppressed;
	CALayer* mPopoutLayer;
	NSMutableArray* mDecorators;
	char mShowGrayOverlay;
	char mInDynamicOperation;
	int mDynamicOperationCounter;
	char mInReadMode;
	char mInVersionBrowsingMode;
	CGColorRef mSelectionHighlightColor;
	char mShowInvisibleObjects;
	TSDCanvasAnimation* mCurrentAnimation;
	TSDTrackerManipulatorCoordinator* mTMCoordinator;
	TSDDynamicOperationController* mDynOpController;
	NSObject*<TSDRulerController> mRulerController;
	char mInspectorModeEnabled;
	NSMutableArray* mInspectorGestureRecognizersToReenable;
	/*^block*/id mInspectorSingleTapBlock;
	CGPoint mLastTapPoint;
	CGRect mVisibleBoundsRectForTiling;
	CGRect mVisibleUnscaledRect;
	CGRect mUnobscuredScrollViewFrame;
	TSDBackgroundLayoutAndRenderState* mBackgroundLayoutAndRenderState;
	char mLayoutAndRenderOnThreadDuringScroll;
	char mTemporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
	char mCurrentlyScrolling;
	char mAnimatingScroll;
	char mSuppressedAutozoom;
	char mTextGesturesInFlight;
	id<TSDEditor> mSelectionChangeNotificationDeferredEditor;
	char mShouldAutoscrollToSelectionAfterGestures;
	char mSuspendedLowPriorityThreadDispatcher;
	char mCurrentlyWaitingOnThreadedLayoutAndRender;
	int mDisableThreadedLayoutAndRender;
	NSMutableArray* mHiddenTopLevelLayers;
	char mShouldSuppressRendering;
	char mSupportsBackgroundTileRendering;
	NSMutableSet* mNotificationsToPostWithValidLayouts;
	NSArray* mLayersWithZoomFadeAnimation;
	char mDynamicallyZooming;
	float mDynamicViewScale;
	char mUsesAlternateDrawableSelectionHighlight;
	float mTargetPointSize;
	char mAnimatingViewScale;
	char mSuppressingKeyboard;
	NSObject*<TSDImageHUDController> mImageHUDController;
	long mImageHUDLock;
	NSObject*<TSDImageHUDController> mIAHUDController;
	long mIAHUDLock;
	TSDTileStorage* mTileStorage;
	CGPoint mZoomCenterInBounds;
	NSMutableArray* mBackgroundRenderingObjects;
	id<TSDAnnotationHosting> mDisplayedAnnotation;
	id<TSDAnnotationPopoverController> mAnnotationPopoverController;
	char mShouldClipThemeContentToCanvas;
	char mShowUserDefinedGuides;
	char mPreventSettingNilEditorOnTextResponder;

}

@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (assign,nonatomic) id<TSDCanvasLayerHosting> layerHost; 
@property (assign,nonatomic) id<TSDInteractiveCanvasControllerDelegate> delegate; 
@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (nonatomic,readonly) id<TSKDocumentRootProvider> documentRootProvider; 
@property (nonatomic,readonly) TSPObjectContext * objectContext; 
@property (nonatomic,readonly) TSKCommandController * commandController; 
@property (nonatomic,readonly) TSKChangeNotifier * changeNotifier; 
@property (nonatomic,readonly) TSKAccessController * accessController; 
@property (assign,nonatomic) char resizeCanvasOnLayout; 
@property (nonatomic,readonly) CGSize defaultMinimumUnscaledCanvasSize; 
@property (assign,nonatomic) NSObject*<TSDRulerController> rulerController; 
@property (nonatomic,readonly) TSDContainerRep * topLevelContainerRepForEditing; 
@property (nonatomic,readonly) char inspectorModeEnabled; 
@property (nonatomic,readonly) char animatingViewScale; 
@property (nonatomic,readonly) TSDEditorController * editorController; 
@property (assign,nonatomic) char preventSettingNilEditorOnTextResponder; 
@property (assign,nonatomic) char createRepsForOffscreenLayouts; 
@property (assign,nonatomic) char layoutAndRenderOnThreadDuringScroll; 
@property (nonatomic,readonly) char currentlyWaitingOnThreadedLayoutAndRender; 
@property (nonatomic,readonly) char currentlyScrolling; 
@property (assign,nonatomic) char shouldAutoscrollToSelectionAfterLayout; 
@property (assign,nonatomic) char suppressAutozoomToSelectionAfterLayout; 
@property (assign,nonatomic) char textGesturesInFlight; 
@property (assign,nonatomic) char shouldSuppressRendering; 
@property (nonatomic,readonly) TSDCanvasView * canvasView; 
@property (nonatomic,readonly) TSDCanvasLayer * canvasLayer; 
@property (assign,nonatomic) float viewScale; 
@property (nonatomic,readonly) float currentViewScale; 
@property (nonatomic,readonly) float fitWidthViewScale; 
@property (nonatomic,readonly) CGSize canvasScrollingOutset; 
@property (assign,nonatomic) CGRect unobscuredScrollViewFrame; 
@property (nonatomic,readonly) CGSize sizeOfScrollViewEnclosingCanvas; 
@property (assign,nonatomic) char shouldClipThemeContentToCanvas; 
@property (nonatomic,readonly) TSDGuideController * guideController; 
@property (nonatomic,readonly) TSDUserDefinedGuideController * userDefinedGuideController; 
@property (assign,nonatomic) char shouldShowUserDefinedGuides; 
@property (nonatomic,copy) NSArray * infosToDisplay; 
@property (assign,nonatomic) CGColorRef selectionHighlightColor; 
@property (nonatomic,readonly) CGRect visibleBoundsRect; 
@property (nonatomic,readonly) CGRect visibleBoundsRectForTiling; 
@property (nonatomic,readonly) CGRect visibleBoundsRectUsingSizeOfEnclosingScrollView; 
@property (nonatomic,readonly) CGRect visibleUnscaledRect; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectForCanvasUI; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectForAutoscroll; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectValidWhileZooming; 
@property (nonatomic,readonly) CGRect visibleUnscaledRectForScrollingAutomatically; 
@property (nonatomic,readonly) TSDLayoutController * layoutController; 
@property (nonatomic,readonly) CALayer * repContainerLayer; 
@property (nonatomic,readonly) NSArray * additionalLayersUnderRepLayers; 
@property (assign,nonatomic) char usesAlternateDrawableSelectionHighlight; 
@property (nonatomic,readonly) CALayer * overlayLayer; 
@property (assign,nonatomic) char overlayLayerSuppressed; 
@property (assign,nonatomic) char showGrayOverlay; 
@property (assign,nonatomic) char showInvisibleObjects; 
@property (nonatomic,readonly) id<TSDAnnotationHosting> displayedAnnotation; 
@property (nonatomic,readonly) char displayedAnnotationPresentedPinned; 
@property (nonatomic,readonly) CGSize annotationPopoverSize; 
@property (nonatomic,readonly) unsigned annotationPreferredRectEdge; 
@property (assign,nonatomic) char showsComments; 
@property (nonatomic,retain,readonly) TSDDynamicOperationController * dynamicOperationController; 
@property (nonatomic,retain,readonly) TSDTrackerManipulatorCoordinator * tmCoordinator; 
@property (assign,nonatomic) char inReadMode; 
@property (assign,nonatomic) char inVersionBrowsingMode; 
@property (assign,nonatomic) char supportsBackgroundTileRendering; 
@property (assign,nonatomic) CGPoint lastTapPoint; 
@property (nonatomic,readonly) id canvasReferenceController; 
@property (assign) CGRect p_visibleBoundsRectForTiling; 
@property (assign) CGRect p_visibleUnscaledRect; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)smallRepOutsetForHitTesting;
+(char)selectorIsActionMethod:(SEL)arg1 ;
+(id)keyPathsForValuesAffectingDocumentRoot;
+(id)keyPathsForValuesAffectingEditorController;
+(id)keyPathsForValuesAffectingViewScale;
+(id)keyPathsForValuesAffectingCurrentViewScale;
-(TSKChangeNotifier *)changeNotifier;
-(TSKAccessController *)accessController;
-(float)viewScale;
-(char)isCanvasInteractive;
-(CGPoint)convertBoundsToUnscaledPoint:(CGPoint)arg1 ;
-(void)invalidateLayers;
-(CGRect)visibleBoundsRectUsingSizeOfEnclosingScrollView;
-(CGRect)convertBoundsToUnscaledRect:(CGRect)arg1 ;
-(id)layerForRep:(id)arg1 ;
-(CGRect)convertUnscaledToBoundsRect:(CGRect)arg1 ;
-(char)currentlyScrolling;
-(char)isPrinting;
-(char)currentlyWaitingOnThreadedLayoutAndRender;
-(void)layoutInvalidated;
-(TSKCommandController *)commandController;
-(CGRect)visibleBoundsRect;
-(TSDCanvasView *)canvasView;
-(TSDLayoutController *)layoutController;
-(void)discardRepForClassChange:(id)arg1 ;
-(char)shouldLayoutTilingLayer:(id)arg1 ;
-(CGRect)visibleBoundsForTilingLayer:(id)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(char)isInDynamicOperation;
-(void)backgroundLayoutAndRenderState:(id)arg1 performWorkInBackgroundTilingOnly:(char)arg2 ;
-(void)backgroundLayoutAndRenderStateDidPerformBackgroundWork:(id)arg1 ;
-(void)p_rulerUnitsDidChangeNotification:(id)arg1 ;
-(void)p_annotationAuthorNameDidChange:(id)arg1 ;
-(void)p_willEnterForeground:(id)arg1 ;
-(void)addCommonObservers;
-(void)setP_visibleBoundsRectForTiling:(CGRect)arg1 ;
-(void)setP_visibleUnscaledRect:(CGRect)arg1 ;
-(void)removeCommonObservers;
-(void)teardownBackgroundRendering;
-(id<TSDCanvasLayerHosting>)layerHost;
-(TSDCanvasLayer *)canvasLayer;
-(void)p_postNotificationOnMainThreadWithValidLayouts:(id)arg1 ;
-(char)resizeCanvasOnLayout;
-(void)p_updateCanvasSizeFromLayouts;
-(void)p_updateLayersFromReps;
-(void)presentError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)presentErrors:(id)arg1 withLocalizedDescription:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)p_editorControllerDidChangeTextInputEditor:(id)arg1 ;
-(void)p_editorControllerDidChangeCurrentEditors:(id)arg1 ;
-(void)p_editorControllerSelectionDidChange:(id)arg1 ;
-(void)p_editorControllerSelectionDidChangeAndWantsKeyboard:(id)arg1 ;
-(id)canvasEditor;
-(void)p_layoutWithReadLock;
-(id)repForInfo:(id)arg1 ;
-(id)beginEditingRep:(id)arg1 ;
-(TSDEditorController *)editorController;
-(char)p_endEditingToBeginEditingRep:(id)arg1 ;
-(id)beginEditingRep:(id)arg1 clearingSelection:(char)arg2 withEditorProvider:(/*^block*/id)arg3 ;
-(id)layoutForInfo:(id)arg1 ;
-(void)zoomWithAnimationToUnscaledRect:(CGRect)arg1 ;
-(CGRect)visibleUnscaledRect;
-(id)beginEditingRepForInfo:(id)arg1 ;
-(id)infoForModel:(id)arg1 withSelection:(id)arg2 ;
-(void)scrollToSelection:(id)arg1 onModel:(id)arg2 ;
-(void)p_scrollModelToVisible:(id)arg1 withSelection:(id)arg2 ;
-(id)infoToScrollToForModel:(id)arg1 withSelection:(id)arg2 ;
-(id)layoutForInfoNearestVisibleRect:(id)arg1 intersectingSelection:(id)arg2 ;
-(id)validatedLayoutForInfo:(id)arg1 ;
-(void)scrollRectToVisibleWithSelectionOutset:(CGRect)arg1 animated:(char)arg2 ;
-(id)p_setSelection:(id)arg1 onInfo:(id)arg2 withFlags:(unsigned)arg3 ;
-(void)scrollToSelection:(id)arg1 onModel:(id)arg2 scrollImmediately:(char)arg3 ;
-(CGRect)scrollFocusRectForModel:(id)arg1 withSelection:(id)arg2 ;
-(void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(char)arg3 focusRect:(CGRect)arg4 scrollImmediately:(char)arg5 skipZoom:(char)arg6 ;
-(void)p_scrollToPrimarySelectionForEditor:(id)arg1 skipZoom:(char)arg2 ;
-(void)scrollToPrimarySelectionForEditor:(id)arg1 ;
-(void)p_syncWithLayoutThread;
-(void)invalidateReps;
-(void)invalidateVisibleBounds;
-(void)p_editorDidChangeSelection:(id)arg1 withSelectionFlags:(unsigned)arg2 ;
-(void)p_editorDoneChangingSelection:(id)arg1 withFlags:(unsigned)arg2 ;
-(void)p_editorDoneChangingSelection:(id)arg1 ;
-(char)shouldResizeCanvasToScrollView;
-(CGPoint)clampedUnscaledContentOffset:(CGPoint)arg1 forViewScale:(float)arg2 ;
-(void)animateToViewScale:(float)arg1 contentOffset:(CGPoint)arg2 duration:(double)arg3 orientation:(int)arg4 ;
-(CGRect)unobscuredScrollViewFrame;
-(void)setViewScale:(float)arg1 andScrollViewFrame:(CGRect)arg2 maintainPosition:(char)arg3 animated:(char)arg4 ;
-(id<TSDAnnotationHosting>)displayedAnnotation;
-(CGRect)annotationRectInParentView;
-(CGRect)unobscuredFrameOfView:(id)arg1 ;
-(void)setUnobscuredScrollViewFrame:(CGRect)arg1 ;
-(CGRect)visibleUnscaledRectForScrollingAutomatically;
-(CGRect)p_outsetSelectionRect:(CGRect)arg1 ;
-(CGPoint)convertUnscaledToBoundsPoint:(CGPoint)arg1 ;
-(CGSize)sizeOfScrollViewEnclosingCanvas;
-(CGColorRef)newDefaultSelectionHighlightColor;
-(void)i_invalidateSelectionHighlightLayers;
-(NSObject*<TSDRulerController>)rulerController;
-(char)spellCheckingSupported;
-(char)spellCheckingSuppressed;
-(char)isPrintingCanvas;
-(char)shouldShowTextOverflowGlyphs;
-(char)shouldShowInstructionalText;
-(TSDUserDefinedGuideController *)userDefinedGuideController;
-(char)shouldShowUserDefinedGuides;
-(void)setShouldShowUserDefinedGuides:(char)arg1 ;
-(Class)userDefinedGuideControllerClass;
-(id)guideStorageAtPoint:(CGPoint)arg1 ;
-(CGRect)visualContainerRectForGuideStorage:(id)arg1 ;
-(void)translateGuide:(id)arg1 toContainerRect:(CGRect)arg2 ;
-(NSArray *)infosToDisplay;
-(char)p_shouldLayoutAndRenderOnThread;
-(void)p_acquireLockAndPerformAction:(/*^block*/id)arg1 ;
-(id)p_backgroundLayoutAndRenderState;
-(id)layoutsForInfo:(id)arg1 ;
-(id)repForLayout:(id)arg1 ;
-(void)i_layout;
-(id)repForInfo:(id)arg1 createIfNeeded:(char)arg2 ;
-(id)p_repForLayout:(id)arg1 createIfNeeded:(char)arg2 ;
-(void)recreateAllLayoutsAndReps;
-(CGRect)p_visibleBoundsRectUsingSizeOfEnclosingScrollView:(char)arg1 ;
-(CGRect)p_visibleBoundsRectForTiling;
-(CGRect)p_calculateVisibleBoundsRectForTiling;
-(CGRect)p_visibleUnscaledRect;
-(CGRect)p_calculateVisibleUnscaledRect;
-(id)unitFormatter;
-(CGSize)rulerCenterOffsetSizeForPoint:(CGPoint)arg1 ;
-(id)unitStringForAngle:(float)arg1 ;
-(id)topLevelRepsForHitTesting;
-(TSDContainerRep *)topLevelContainerRepForEditing;
-(id)hitRep:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)hitRep:(CGPoint)arg1 ;
-(void)p_recursiveHitKnobAtPoint:(CGPoint)arg1 inRep:(id)arg2 minDistance:(float*)arg3 hitKnob:(id*)arg4 hitRep:(id*)arg5 ;
-(id)layoutsForModel:(id)arg1 withSelection:(id)arg2 ;
-(id)layoutsForInfo:(id)arg1 intersectingSelection:(id)arg2 ;
-(char)shouldPopKnobsOutsideEnclosingScrollView;
-(id)imageHUDController;
-(TSPObjectContext *)objectContext;
-(void)invalidateComments;
-(char)showsComments;
-(void)setShowsComments:(char)arg1 ;
-(void)p_addOrShowComment:(id)arg1 selector:(SEL)arg2 ;
-(void)getCurrentAnnotationAuthorCreatingIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)i_inPrintPreviewMode;
-(char)shouldDisplayCommentUIForInfo:(id)arg1 ;
-(void)hideDisplayedAnnotation;
-(void)showAnnotation:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(char)arg4 pinned:(char)arg5 shouldSetSelection:(char)arg6 viaKnob:(char)arg7 ;
-(void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned)arg3 ;
-(char)p_annotationShouldShowUI:(id)arg1 ;
-(void)presentAnnotationUI:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(char)arg4 pinned:(char)arg5 viaKnob:(char)arg6 ;
-(void)hideAnnotationUIWithPinned:(char)arg1 ;
-(char)displayedAnnotationPresentedPinned;
-(CGSize)annotationPopoverSize;
-(void)showAnnotation:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(char)arg4 pinned:(char)arg5 shouldSetSelection:(char)arg6 ;
-(void)nextAnnotation:(id)arg1 ;
-(void)previousAnnotation:(id)arg1 ;
-(id)p_decorators;
-(void)updateSelectionForTapOnSelectedRep:(id)arg1 ;
-(char)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)updateSelectionForTapAtPoint:(CGPoint)arg1 extendingSelection:(char)arg2 ;
-(char)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(char)handleMultipleTapAtPoint:(CGPoint)arg1 ;
-(void)p_drawLayerWithReadLock:(id)arg1 ;
-(CGRect)visibleBoundsRectForTiling;
-(char)supportsBackgroundTileRendering;
-(char)canDrawTilingLayerInBackground:(id)arg1 ;
-(void)i_viewScrollDidChange;
-(void)p_viewScrollingEnded;
-(void)beginScrollingOperation;
-(id)repsForInfo:(id)arg1 ;
-(void)makeEditorPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)deselectAll:(id)arg1 ;
-(void)setAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3 ;
-(void)p_beginZoomingOperation;
-(void)p_endZoomingOperation;
-(void)endScrollingOperation;
-(void)p_setTargetPointSize:(float)arg1 ;
-(void)setNeedsDisplayOnLayer:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 onLayer:(id)arg2 ;
-(CGSize)defaultMinimumUnscaledCanvasSize;
-(CGSize)canvasScrollingOutset;
-(NSArray *)additionalLayersUnderRepLayers;
-(void)p_recursivelyUpdateLayerForRep:(id)arg1 accumulatingLayers:(id)arg2 andReps:(id)arg3 ;
-(char)shouldClipThemeContentToCanvas;
-(void)p_discardLayer:(id)arg1 forRep:(id)arg2 ;
-(void)p_setupPopoutLayerForReps:(id)arg1 ;
-(char)overlayLayerSuppressed;
-(id)p_overlayLayerForReps:(id)arg1 ;
-(void)p_recursivelyUpdateLayerEdgeAntialiasingForLayer:(id)arg1 ;
-(void)i_drawRepWithReadLock:(id)arg1 inContext:(CGContextRef)arg2 forLayer:(id)arg3 ;
-(void)i_viewScrollingEnded;
-(void)scrollToPrimarySelection;
-(char)p_shouldSuppressAutozoomForEditor:(id)arg1 ;
-(id)layoutForInfoNearestVisibleRect:(id)arg1 ;
-(char)shouldZoomOnSelectionChange;
-(float)p_targetPointSize;
-(float)fitWidthViewScale;
-(CGRect)visibleUnscaledRectForAutoscroll;
-(char)p_centerOnInitialSelection;
-(void)setViewScale:(float)arg1 contentOffset:(CGPoint)arg2 animated:(char)arg3 ;
-(void)scrollRectToVisibleCenter:(CGRect)arg1 animated:(char)arg2 onlyScrollNecessaryAxes:(char)arg3 ;
-(void)i_viewWillBeginZooming;
-(void)viewDidEndZooming;
-(void)doubleTappedCanvasBackgroundAtPoint:(CGPoint)arg1 ;
-(CALayer *)repContainerLayer;
-(void)canvasLayoutInvalidated:(id)arg1 ;
-(void)canvasWillLayout:(id)arg1 ;
-(void)canvasDidValidateLayouts:(id)arg1 ;
-(void)canvasDidLayout:(id)arg1 ;
-(void)canvasDidValidateLayoutsWithDependencies:(id)arg1 ;
-(void)canvasDidUpdateVisibleBounds:(id)arg1 ;
-(void)canvasWillUpdateRepsFromLayouts:(id)arg1 ;
-(void)canvasDidUpdateRepsFromLayouts:(id)arg1 ;
-(CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1 ;
-(id)additionalVisibleInfosForCanvas:(id)arg1 ;
-(void)canvas:(id)arg1 createdRep:(id)arg2 ;
-(void)syncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(void)teardownCanvasEditor;
-(void)i_layerHostHasBeenTornDown;
-(void)setLayerHost:(id<TSDCanvasLayerHosting>)arg1 ;
-(void)addBackgroundRenderingObject:(id)arg1 ;
-(void)removeBackgroundRenderingObject:(id)arg1 ;
-(id<TSKDocumentRootProvider>)documentRootProvider;
-(id)newCanvasEditor;
-(char)canZoomToCurrentSelection;
-(CGPoint)smartZoomCenterForNoSelection;
-(void)zoomToCurrentSelection;
-(void)scrollCurrentSelectionToVisible;
-(void)scrollSearchReferenceToVisible:(id)arg1 ;
-(void)setShouldSuppressRendering:(char)arg1 ;
-(void)setLayoutAndRenderOnThreadDuringScroll:(char)arg1 ;
-(void)resumeEditing;
-(float)currentViewScale;
-(void)setViewScale:(float)arg1 andScrollViewFrame:(CGRect)arg2 animated:(char)arg3 ;
-(void)unobscuredFrameDidChange;
-(void)displayRulerWithSlowFade:(char)arg1 ;
-(void)displayRulerForRect:(CGRect)arg1 ;
-(void)hideRuler;
-(id)replaceImageController;
-(CGRect)visibleUnscaledRectForCanvasUI;
-(void)toggleShouldShowUserDefinedGuides;
-(void)makeUserDefinedGuidesVisible;
-(TSDGuideController *)guideController;
-(void)clipGuideToContainer:(id)arg1 atUnscaledPoint:(CGPoint)arg2 ;
-(void)translateGuides:(id)arg1 toContainerRect:(CGRect)arg2 ;
-(float)offsetForTranslatingToCenterRulerForGuidesInStorage:(id)arg1 guideType:(int)arg2 ;
-(float)offsetForTranslatingGuidesInStorage:(id)arg1 guideType:(int)arg2 ;
-(id)infosForGuides;
-(CGRect)boundingRectForActiveGuidesForPoint:(CGPoint)arg1 ;
-(id)provideDynamicGuidesForLayout:(id)arg1 ;
-(id)provideUserDefinedGuides;
-(id)localizedPercentStringForAlignmentGuide:(id)arg1 ;
-(void)setInfosToDisplay:(NSArray *)arg1 ;
-(id)topLevelZOrderedSiblingsOfInfos:(id)arg1 ;
-(CGRect)visibleUnscaledRectValidWhileZooming;
-(char)allowAutoscroll;
-(char)allowNegativeAutoscroll;
-(CGSize)convertUnscaledToBoundsSize:(CGSize)arg1 ;
-(CGSize)convertBoundsToUnscaledSize:(CGSize)arg1 ;
-(CGSize)growUnscaledCanvasLayerSize:(CGSize)arg1 ;
-(id)unitStringForPoint:(CGPoint)arg1 ;
-(id)unitStringForSize:(CGSize)arg1 ;
-(id)unitStringForNumber:(float)arg1 ;
-(id)unitStringForAngle:(float)arg1 andLength:(float)arg2 ;
-(id)topLevelRepsForDragSelecting;
-(id)hitRepIgnoringClickThrough:(CGPoint)arg1 ;
-(id)hitRepsAtPoint:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(id)hitKnobAtPoint:(CGPoint)arg1 returningRep:(id*)arg2 ;
-(id)layoutForModel:(id)arg1 withSelection:(id)arg2 ;
-(char)shouldEverShowPathHighlightOnInvisibleShapes;
-(char)shouldShowPathHighlightOnUnselectedInvisibleShapes;
-(int)defaultKnobTypeForRep:(id)arg1 ;
-(char)shouldShowOnRepHyperlinkUI;
-(id)actionGhostKnobForRep:(id)arg1 ;
-(void)setOverlayLayerSuppressed:(char)arg1 ;
-(void)closeOverlays;
-(void)addDecorator:(id)arg1 ;
-(void)removeDecorator:(id)arg1 ;
-(void)getCurrentAnnotationAuthor:(id*)arg1 commandToCreateIfNecessary:(id*)arg2 ;
-(void)showOrHideComments:(id)arg1 ;
-(void)addOrShowComment:(id)arg1 ;
-(char)shouldDisplayCommentUIForAuthor:(id)arg1 info:(id)arg2 ;
-(void)setAnnotationAuthorColor:(id)arg1 ;
-(unsigned)annotationPreferredRectEdge;
-(void)toggleAnnotationVisibility:(id)arg1 model:(id)arg2 selection:(id)arg3 beginEditing:(char)arg4 shouldSetSelection:(char)arg5 ;
-(char)attachedCommentsAllowedForDrawable:(id)arg1 ;
-(void)nextAnnotationAfterVisibleAnnotation:(id)arg1 ;
-(void)previousAnnotationBeforeVisibleAnnotation:(id)arg1 ;
-(void)toggleHyperlinkUIForRep:(id)arg1 ;
-(void)actionGhostKnobHitForRep:(id)arg1 ;
-(void)beginPossiblyParallelInspectorDynamicOperation;
-(void)endPossiblyParallelInspectorDynamicOperation;
-(char)isInInspectorDynamicOperation;
-(void)setInReadMode:(char)arg1 ;
-(char)usesAlternateDrawableSelectionHighlight;
-(void)setUsesAlternateDrawableSelectionHighlight:(char)arg1 ;
-(void)setShowInvisibleObjects:(char)arg1 ;
-(TSDDynamicOperationController *)dynamicOperationController;
-(TSDTrackerManipulatorCoordinator *)tmCoordinator;
-(id)hitRepChromeAtUnscaledPoint:(CGPoint)arg1 ;
-(void)tappedCanvasBackgroundAtPoint:(CGPoint)arg1 ;
-(char)shouldBeginDrawingTilingLayerInBackground:(id)arg1 returningToken:(id*)arg2 andQueue:(id*)arg3 ;
-(void)didEndDrawingTilingLayerInBackground:(id)arg1 withToken:(id)arg2 ;
-(char)mustDrawTilingLayerOnMainThread:(id)arg1 ;
-(id)queueForDrawingTilingLayerInBackground:(id)arg1 ;
-(char)selectionContainsOnlyInfosOnCanvas:(id)arg1 model:(id)arg2 ;
-(id)iaHUDController;
-(char)canPerformInteractiveAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setAnimationCompletionBlock:(/*^block*/id)arg1 ;
-(void)i_layoutRegistered:(id)arg1 ;
-(void)i_layoutUnregistered:(id)arg1 ;
-(void)i_viewIsZoomingAtPoint:(CGPoint)arg1 ;
-(void)i_viewDidZoomToViewScale:(float)arg1 ;
-(void)i_canvasContentsScaleDidChange;
-(void)i_viewScaleDidChange;
-(float)i_viewScaleForProposedViewScale:(float)arg1 originalViewScale:(float)arg2 ;
-(CGSize)i_canvasCenterOffsetForProposedViewScale:(float)arg1 originalViewScale:(float)arg2 ;
-(float)i_nextCanvasViewScaleDetentForProposedViewScale:(float)arg1 greater:(char)arg2 ;
-(void)i_recordUserViewScale;
-(void)i_repNeedsDisplay:(id)arg1 ;
-(void)i_repNeedsDisplay:(id)arg1 inRect:(CGRect)arg2 ;
-(id)i_tileStorage;
-(id)i_currentAnimation;
-(id)i_descriptionForViewScale:(float)arg1 ;
-(void)disableThreadedLayoutAndRender;
-(void)enableThreadedLayoutAndRender;
-(char)i_temporarilyDisabledLayoutAndRenderOnThreadDuringScroll;
-(void)p_guideColorChanged:(id)arg1 ;
-(void)p_textGesturesWillBeginNotification:(id)arg1 ;
-(void)p_textGesturesDidEndNotification:(id)arg1 ;
-(void)p_autoscrollToSelection:(id)arg1 withInfo:(id)arg2 isInitialSelection:(char)arg3 focusRect:(CGRect)arg4 ;
-(id)viewWithTransferredLayers;
-(CGPoint)lastTapPoint;
-(id)canvasReferenceController;
-(void)setLastTapPoint:(CGPoint)arg1 ;
-(char)inspectorModeEnabled;
-(char)shouldSuppressRendering;
-(char)animatingViewScale;
-(char)textGesturesInFlight;
-(void)setTextGesturesInFlight:(char)arg1 ;
-(void)setRulerController:(NSObject*<TSDRulerController>)arg1 ;
-(void)setResizeCanvasOnLayout:(char)arg1 ;
-(char)preventSettingNilEditorOnTextResponder;
-(void)setPreventSettingNilEditorOnTextResponder:(char)arg1 ;
-(char)createRepsForOffscreenLayouts;
-(void)setCreateRepsForOffscreenLayouts:(char)arg1 ;
-(char)layoutAndRenderOnThreadDuringScroll;
-(char)shouldAutoscrollToSelectionAfterLayout;
-(void)setShouldAutoscrollToSelectionAfterLayout:(char)arg1 ;
-(char)suppressAutozoomToSelectionAfterLayout;
-(void)setSuppressAutozoomToSelectionAfterLayout:(char)arg1 ;
-(void)setShouldClipThemeContentToCanvas:(char)arg1 ;
-(char)showGrayOverlay;
-(void)setShowGrayOverlay:(char)arg1 ;
-(char)inVersionBrowsingMode;
-(void)setInVersionBrowsingMode:(char)arg1 ;
-(char)inReadMode;
-(char)showInvisibleObjects;
-(void)setSupportsBackgroundTileRendering:(char)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TSDInteractiveCanvasControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<TSDInteractiveCanvasControllerDelegate>)delegate;
-(void)setAnimationDuration:(double)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setAnimationDelay:(double)arg1 ;
-(void)beginAnimations:(id)arg1 context:(void*)arg2 ;
-(void)setAnimationDidStopSelector:(SEL)arg1 ;
-(void)setAnimationDelegate:(id)arg1 ;
-(void)layoutIfNeeded;
-(CGPoint)contentOffset;
-(void)setAnimationRepeatAutoreverses:(char)arg1 ;
-(void)commitAnimations;
-(void)setAnimationStartDate:(id)arg1 ;
-(void)setAnimationRepeatCount:(float)arg1 ;
-(void)setAnimationWillStartSelector:(SEL)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(char)arg2 ;
-(void)endEditing;
-(CGColorRef)selectionHighlightColor;
-(void)setSelectionHighlightColor:(CGColorRef)arg1 ;
-(void)setAnimationTimingFunction:(id)arg1 ;
-(id)annotationController;
-(void)p_commonInit;
-(void)teardown;
-(char)hasAnnotations;
-(TSKDocumentRoot *)documentRoot;
-(CALayer *)overlayLayer;
-(void)setViewScale:(float)arg1 ;
-(TSDCanvas *)canvas;
@end

