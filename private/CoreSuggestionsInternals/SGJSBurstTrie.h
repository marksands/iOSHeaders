//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SGJSBurstTrieExports.h"

@interface SGJSBurstTrie : NSObject <SGJSBurstTrieExports>
{
    struct _CFBurstTrie *_trie;
}

- (unsigned int)lookup:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

