//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableAttributedString.h"

@class NSArray, NSMutableArray;

@interface NSTextStorage : NSMutableAttributedString
{
    struct _NSRange _editedRange;
    long long _editedDelta;
    struct {
        unsigned int editedMask:8;
        unsigned int postWillProcess:1;
        unsigned int postDidProcess:1;
        unsigned int :6;
        unsigned int disabled:16;
    } _flags;
    NSMutableArray *_layoutManagers;
    id _sideData;
}

+ (_Bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
- (_Bool)_usesSimpleTextEffects;
- (void)_setUsesSimpleTextEffects:(_Bool)arg1;
- (id)cuiStyleEffects;
- (id)cuiCatalog;
- (_Bool)_shouldSetOriginalFontAttribute;
@property(nonatomic) __weak id <NSTextStorageDelegate> delegate;
- (void)fontSetChanged;
- (void)_notifyEdited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3 invalidatedRange:(struct _NSRange)arg4;
@property(readonly, nonatomic) _Bool fixesAttributesLazily;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange)arg1;
- (void)invalidateAttributesInRange:(struct _NSRange)arg1;
- (void)_setAttributeFixingInProgress:(_Bool)arg1;
- (_Bool)_attributeFixingInProgress;
- (struct _NSRange)_rangeByEstimatingAttributeFixingForRange:(struct _NSRange)arg1;
- (void)processEditing;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
@property(readonly, nonatomic) long long changeInLength;
- (void)setEditedMask:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long editedMask;
@property(readonly, nonatomic) struct _NSRange editedRange;
- (_Bool)_isEditing;
- (void)coordinateEditing:(CDUnknownBlockType)arg1;
- (void)endEditing;
- (void)beginEditing;
- (_Bool)_forceFixAttributes;
- (void)_setForceFixAttributes:(_Bool)arg1;
- (void)coordinateReading:(CDUnknownBlockType)arg1;
- (void)_unlock;
- (_Bool)_lockForWritingWithExceptionHandler:(_Bool)arg1;
- (_Bool)_lockForWriting;
- (_Bool)_lockForReading;
@property(readonly, copy, nonatomic) NSArray *layoutManagers;
- (void)removeLayoutManager:(id)arg1;
- (void)addLayoutManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)_setEditedRange:(struct _NSRange)arg1;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;

@end

