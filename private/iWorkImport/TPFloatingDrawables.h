//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSKDocumentObject.h"

@class NSMutableDictionary, TPDocumentRoot, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TPFloatingDrawables : TSPObject <TSKDocumentObject>
{
    NSMutableDictionary *_drawablesByPageIndex;
    TSUPointerKeyDictionary *_pageIndexByDrawable;
    TSUPointerKeyDictionary *_tagByDrawable;
    TPDocumentRoot *_documentRoot;
}

@property(readonly, nonatomic) __weak TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void).cxx_destruct;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)moveDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (void)removeDrawables:(id)arg1;
- (void)removeDrawable:(id)arg1;
- (void)removeDrawable:(id)arg1 suppressDOLC:(_Bool)arg2;
- (void)removeTagForDrawable:(id)arg1;
- (void)p_removeDrawable:(id)arg1;
- (void)applyTag:(id)arg1 toDrawable:(id)arg2;
- (void)addDrawables:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3;
- (void)addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3;
- (void)addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(_Bool)arg4;
- (void)p_addDrawable:(id)arg1 toPageIndex:(unsigned long long)arg2;
- (id)drawableEnumerator;
- (id)tagForDrawable:(id)arg1;
- (unsigned long long)pageIndexForDrawable:(id)arg1;
- (unsigned long long)maximumPageIndex;
- (id)orderedDrawablesOnPageIndex:(unsigned long long)arg1;
- (id)drawablesOnPageIndex:(unsigned long long)arg1;
- (id)allDrawables;
- (unsigned long long)countOfAllDrawables;
- (_Bool)hasAnyDrawables;
- (id)debugDescription;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

