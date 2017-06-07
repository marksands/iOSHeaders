//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _OSLogChunkFileReference, _OSLogChunkStore;

__attribute__((visibility("hidden")))
@interface _OSLogIndexFile : NSObject
{
    _OSLogChunkFileReference *_cfr;
    _OSLogChunkStore *_cs;
    unsigned char _bootu[16];
    _Bool _catalogsScanned;
    unsigned long long _et;
    unsigned long long _ot;
}

@property(readonly, nonatomic) unsigned long long oldestTime; // @synthesize oldestTime=_ot;
@property(readonly, nonatomic) unsigned long long endTime; // @synthesize endTime=_et;
- (void).cxx_destruct;
- (long long)endTimeCompare:(id)arg1;
- (long long)oldestTimeCompare:(id)arg1;
@property(readonly, nonatomic) const char *bootUUID;
- (id)map:(id *)arg1;
- (_Bool)_loadCatalogMetadata;
- (_Bool)_loadHeaderMetadata:(id)arg1;
- (id)initWithChunkStore:(id)arg1 error:(id *)arg2;
- (id)initWithTraceFile:(id)arg1 error:(id *)arg2;

@end

