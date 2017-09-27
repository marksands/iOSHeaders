//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTMergeableStringUndoCommand.h"

@class NSString;

@interface TTMergeableStringUndoAttributeCommand : NSObject <TTMergeableStringUndoCommand>
{
    vector_5b9fc061 *_attributeRanges;
}

@property(readonly, nonatomic) vector_5b9fc061 *attributeRanges; // @synthesize attributeRanges=_attributeRanges;
@property(readonly, copy) NSString *description;
- (_Bool)addToGroup:(id)arg1;
- (void)applyToString:(id)arg1;
- (_Bool)hasTopoIDsThatCanChange;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

