//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, TSKDocumentRoot;

__attribute__((visibility("hidden")))
@interface TSDUserDefinedShapeLibraryIndexChangeObject : NSObject
{
    NSIndexSet *_indexesChanged;
    unsigned long long _changeType;
    TSKDocumentRoot *_documentRoot;
}

@property(retain) TSKDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property unsigned long long changeType; // @synthesize changeType=_changeType;
@property(retain) NSIndexSet *indexesChanged; // @synthesize indexesChanged=_indexesChanged;
- (void).cxx_destruct;

@end

