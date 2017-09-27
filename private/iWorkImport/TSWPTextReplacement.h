//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSWPReplaceAction.h"

@class NSString, TSWPSelection;

__attribute__((visibility("hidden")))
@interface TSWPTextReplacement : NSObject <TSWPReplaceAction>
{
    TSWPSelection *_selection;
    NSString *_string;
}

- (void).cxx_destruct;
- (struct _NSRange)insertedRange;
- (long long)delta;
- (unsigned long long)targetCharIndex;
- (void)performWithStorage:(id)arg1 delta:(long long)arg2 actionBuilder:(struct TSWPStorageActionBuilder *)arg3 withFlags:(unsigned int)arg4 replaceBlock:(CDUnknownBlockType)arg5;
- (id)initWithSelection:(id)arg1 string:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

