//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class TSKDocumentRoot, TSUWeakReference;

__attribute__((visibility("hidden")))
@interface TSKDocumentSelection : TSKSelection
{
    TSUWeakReference *mDocumentRootReference;
}

+ (Class)archivedSelectionClass;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;

@end

