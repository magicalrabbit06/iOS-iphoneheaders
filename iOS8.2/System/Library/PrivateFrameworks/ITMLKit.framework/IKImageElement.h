/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSDictionary, NSURL, UIColor;

@interface IKImageElement : IKViewElement {

	float _srcWidth;
	float _srcHeight;
	NSDictionary* _srcset;
	unsigned _imageType;
	NSURL* _defaultURL;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,retain,readonly) NSDictionary * srcset;               //@synthesize srcset=_srcset - In the implementation block
@property (nonatomic,retain,readonly) NSURL * placeholderURL; 
@property (nonatomic,readonly) unsigned imageType;                         //@synthesize imageType=_imageType - In the implementation block
@property (nonatomic,readonly) float width; 
@property (nonatomic,readonly) float height; 
@property (nonatomic,readonly) unsigned position; 
@property (nonatomic,readonly) UIColor * borderColor; 
@property (nonatomic,readonly) int fill; 
@property (nonatomic,readonly) int reflect; 
@property (nonatomic,retain) NSURL * defaultURL;                           //@synthesize defaultURL=_defaultURL - In the implementation block
+(char)shouldParseChildDOMElements;
-(int)accessoryType;
-(id)resourceImage;
-(id)bestURL;
-(id)cachePath;
-(id)artworkCatalog;
-(NSURL *)url;
-(int)fill;
-(unsigned)position;
-(float)width;
-(float)height;
-(UIColor *)borderColor;
-(unsigned)_imageTypeForTagName:(id)arg1 ;
-(int)reflect;
-(NSURL *)placeholderURL;
-(unsigned)imageType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(void)setDefaultURL:(NSURL *)arg1 ;
-(NSURL *)defaultURL;
-(NSDictionary *)srcset;
@end
