/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:39:15 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICachedLayout.h>

@class NSAttributedString, NSStringDrawingContext, NSString;

@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout> {

	NSAttributedString* _attributedString;
	CGSize _boundingSize;
	NSStringDrawingContext* _context;
	float _topInset;

}

@property (nonatomic,readonly) NSAttributedString * attributedString;                      //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) float baselineOffset; 
@property (nonatomic,readonly) float firstBaselineOffset; 
@property (nonatomic,readonly) CGSize boundingSize;                                        //@synthesize boundingSize=_boundingSize - In the implementation block
@property (nonatomic,readonly) int numberOfLines; 
@property (nonatomic,readonly) NSStringDrawingContext * stringDrawingContext;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) float topInset;                                             //@synthesize topInset=_topInset - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)attributedString;
-(float)baselineOffset;
-(float)firstBaselineOffset;
-(int)numberOfLines;
-(float)topInset;
-(id)initWithLayoutRequest:(id)arg1 ;
-(CGSize)boundingSize;
-(NSStringDrawingContext *)stringDrawingContext;
@end

