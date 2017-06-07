//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSWPOverlappingFieldsWrapper : NSObject
{
    NSMutableArray *_fields;
    TSWPStorage *_parentStorage;
}

- (void).cxx_destruct;
- (id)description;
- (void)sortWithContext:(void *)arg1;
- (id)copyWithContext:(id)arg1;
- (_Bool)isEquivalentToObject:(id)arg1;
- (_Bool)isEqualToOverlappingFieldWrapper:(id)arg1;
- (_Bool)hasField:(id)arg1;
- (unsigned long long)indexOfField:(id)arg1;
- (void)removeField:(id)arg1;
- (void)addField:(id)arg1;
- (unsigned long long)sortedSearchForIndexOfField:(id)arg1;
- (id)parentStorage;
- (void)setParentStorage:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (id)fields;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithField:(id)arg1 parentStorage:(id)arg2;
- (id)initWithFields:(id)arg1 parentStorage:(id)arg2;

@end

