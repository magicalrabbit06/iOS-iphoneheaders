/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLImageTable;

@interface PLImageTableSegment : NSObject {

	PLImageTable* _imageTable;
	unsigned long long _index;
	void* _ptr;
	unsigned long long _length;
	bool _dying;

}
-(oneway void)release;
-(void)dealloc;
-(void*)bytes;
-(id)initWithImageTable:(id)arg1 index:(unsigned long long)arg2 length:(unsigned long long)arg3 idealAddress:(void*)arg4 ;
-(id)initWithImageTable:(id)arg1 offset:(long long)arg2 length:(unsigned long long)arg3 ;
@end

