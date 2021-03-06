/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <VectorKit/VectorKit-Structs.h>
@class NSString, VKStylesheetVendor, NSMutableArray, VKPGlobalProperties, NSObject, NSMutableDictionary;

@interface VKStylesheet : NSObject {

	NSString* _sheetName;
	float _scale;
	float _ppi;
	long long _targetDisplay;
	VKStylesheetVendor* _stylesheetVendor;
	NSMutableArray* _inheritance;
	long long _rasterPolygonChangeoverZ;
	VKPGlobalProperties* _styleGlobalProperties;
	BOOL _supportsNightMode;
	BOOL _supportsRouteMode;
	StyleMatchingTree* _matchingTree;
	vector<md::StyleMatchingTree *, std::__1::allocator<md::StyleMatchingTree *> >* _matchingTreeSpareMemory;
	unsigned long long _matchingTreeSpareBufferSize;
	unsigned long long _matchingTreeCount;
	NSObject*<OS_dispatch_queue> _resultCacheQueue;
	NSMutableDictionary* _resultCache;
	int _loadedGlobalResources;
	int _loadedEverything;
	NSObject*<OS_dispatch_semaphore> _globalResourcesLoadingSemaphore;
	NSObject*<OS_dispatch_semaphore> _everythingLoadingSemaphore;
	NSObject*<OS_dispatch_queue> _loadingQueue;
	BOOL _isDevResource;

}

@property (nonatomic,readonly) NSString * sheetName;                                     //@synthesize sheetName=_sheetName - In the implementation block
@property (nonatomic,readonly) BOOL supportsNightMode; 
@property (nonatomic,readonly) long long rasterPolygonChangeoverZ; 
@property (nonatomic,readonly) VKPGlobalProperties * styleGlobalProperties; 
@property (nonatomic,readonly) BOOL isDevResource;                                       //@synthesize isDevResource=_isDevResource - In the implementation block
-(void)dealloc;
-(id)init;
-(NSString *)sheetName;
-(BOOL)isDevResource;
-(BOOL)supportsNightMode;
-(VKPGlobalProperties *)styleGlobalProperties;
-(void)clearCaches;
-(long long)rasterPolygonChangeoverZ;
-(id)initWithData:(id)arg1 miniData:(id)arg2 forName:(id)arg3 scale:(float)arg4 ppi:(float)arg5 vendor:(id)arg6 targetDisplay:(long long)arg7 isDevResource:(BOOL)arg8 ;
-(id)_styleMatchingAttributes:(id)arg1 clientAttributes:(SCD_Struct_VK143*)arg2 ;
-(id)styleMatchingAttributes:(id)arg1 vectorType:(long long)arg2 locale:(id)arg3 mapDisplayStyle:(unsigned long long)arg4 mapDisplayStyleVariant:(unsigned long long)arg5 canSelectIcons:(BOOL)arg6 selected:(BOOL)arg7 ;
-(unordered_map<unsigned int, unsigned long long, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned long long> > >*)_attributeMapForAttributes:(id)arg1 clientAttributes:(SCD_Struct_VK143*)arg2 ;
-(int)styleAttributeValueForLocalization:(id)arg1 ;
-(id)initWithName:(id)arg1 scale:(float)arg2 ppi:(float)arg3 targetDisplay:(long long)arg4 vendor:(id)arg5 resourceManager:(id)arg6 ;
-(id)styleForFeatureAttributes:(id)arg1 clientAttributes:(SCD_Struct_VK143*)arg2 ;
-(id)styleMatchingAttributes:(id)arg1 vectorType:(long long)arg2 locale:(id)arg3 mapDisplayStyle:(unsigned long long)arg4 mapDisplayStyleVariant:(unsigned long long)arg5 ;
-(id)_stylesMatchingAttributes:(id)arg1 clientAttributes:(SCD_Struct_VK143*)arg2 ;
@end

