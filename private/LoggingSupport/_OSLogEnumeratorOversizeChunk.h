//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _OSLogEnumeratorCatalogSubchunk;

__attribute__((visibility("hidden")))
@interface _OSLogEnumeratorOversizeChunk : NSObject
{
    _OSLogEnumeratorCatalogSubchunk *_subchunk;
    struct tracev3_chunk_s *_chunk;
}

- (void).cxx_destruct;
- (void)fillMessage:(struct os_log_message_s *)arg1;
- (_Bool)matches:(unsigned int)arg1 procinfo:(struct catalog_procinfo_s *)arg2;
- (id)initWithSubchunk:(id)arg1 chunk:(struct tracev3_chunk_s *)arg2;

@end
