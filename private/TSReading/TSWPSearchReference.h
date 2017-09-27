//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKSearchReference.h"

@class NSArray, NSString, TSWPSelection, TSWPSmartField, TSWPStorage;

@interface TSWPSearchReference : NSObject <TSKSearchReference>
{
    TSWPStorage *_storage;
    TSWPSelection *_selection;
    struct _NSRange _smartFieldRange;
    _Bool _refersToSmartField;
    TSWPSmartField *_smartField;
    _Bool _autohideHighlight;
    _Bool _pulseHighlight;
    NSArray *_findHighlights;
    id <TSKAnnotation> annotation;
    struct CGPoint searchReferencePoint;
}

+ (id)searchReferenceWithStorage:(id)arg1 selection:(id)arg2;
+ (id)searchReferenceWithStorage:(id)arg1 range:(struct _NSRange)arg2;
@property(retain, nonatomic) id <TSKAnnotation> annotation; // @synthesize annotation;
@property(nonatomic) struct CGPoint searchReferencePoint; // @synthesize searchReferencePoint;
@property(nonatomic) _Bool pulseHighlight; // @synthesize pulseHighlight=_pulseHighlight;
@property(nonatomic) _Bool autohideHighlight; // @synthesize autohideHighlight=_autohideHighlight;
@property(retain, nonatomic) NSArray *findHighlights; // @synthesize findHighlights=_findHighlights;
@property(retain, nonatomic) TSWPSelection *selection; // @synthesize selection=_selection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSelectable;
- (_Bool)isReplaceable;
- (id)model;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)searchReferenceEnd;
- (id)searchReferenceStart;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id *)arg3;
- (id)storage;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isInsertionPoint;
@property(nonatomic) struct _NSRange range;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) TSWPSmartField *smartField;
@property(nonatomic) _Bool refersToSmartField;
@property(nonatomic) struct _NSRange smartFieldRange;
- (void)pUpdateSelection;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

