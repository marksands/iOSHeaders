//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDCanvasDelegate.h"
#import "TSDPartitioner.h"

@class NSObject<TSDInfo>, NSString, TSDCanvas, TSDLayout, TSUPointerKeyDictionary;

@interface TSDDefaultPartitioner : NSObject <TSDPartitioner, TSDCanvasDelegate>
{
    NSObject<TSDInfo> *mInfo;
    TSDCanvas *mCanvas;
    TSDLayout *mLayout;
    TSUPointerKeyDictionary *mMainRepsByCanvas;
    TSUPointerKeyDictionary *mCachedImagesByCanvas;
    TSUPointerKeyDictionary *mPartialRepsByCanvas;
}

- (unsigned long long)p_edgesForHintBounds:(struct CGRect)arg1;
- (id)p_nextHintForSize:(struct CGSize)arg1 previousHint:(id)arg2 horizontally:(_Bool)arg3;
- (id)p_firstHintForSize:(struct CGSize)arg1;
- (void)p_teardownLayouts;
- (void)p_generateLayouts;
- (void)i_unregisterPartialRep:(id)arg1;
- (void)i_registerPartialRep:(id)arg1;
- (void)i_removeCachedImageForCanvas:(id)arg1;
- (void)i_setCachedImage:(struct CGImage *)arg1 forCanvas:(id)arg2;
- (struct CGImage *)i_cachedImageForCanvas:(id)arg1;
- (id)i_repForCanvas:(id)arg1;
- (id)i_layout;
- (id)documentRoot;
- (id)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (id)nextHintForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (_Bool)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(_Bool)arg3 delta:(int)arg4;
- (id)hintForLayout:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

