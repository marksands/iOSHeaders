//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSISEngine, NSMapTable;

@interface NSISVariable : NSObject <NSCoding>
{
    id <NSISVariableDelegate> _delegate;
    NSMapTable *_overflowEngines;
    NSISEngine *_engines[3];
    CDStruct_fcd6c539 _engineVarIndexes[3];
    unsigned int _ident;
}

+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3 valueIsUserObservable:(_Bool)arg4;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
@property id <NSISVariableDelegate> delegate; // @synthesize delegate=_delegate;
- (id)markedConstraint;
@property(readonly) _Bool shouldBeMinimized;
@property(readonly) int valueRestriction;
- (_Bool)valueIsUserVisible;
- (_Bool)markedConstraintIsEligibleForIntegralizationAdjustment;
- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (_Bool)shouldBeIntegral;
@property(readonly) int orientationHint;
- (id)description;
- (id)descriptionInEngine:(id)arg1;
- (id)_delegateDescription;
- (CDStruct_fcd6c539)overflowEngineVarIndexForEngine:(id)arg1;
- (void)_enumerateEngines:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *engines;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

