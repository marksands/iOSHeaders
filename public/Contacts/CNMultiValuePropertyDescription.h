//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNPropertyDescription.h>

@class NSArray;

@interface CNMultiValuePropertyDescription : CNPropertyDescription
{
}

@property(readonly, nonatomic) NSArray *standardLabels;
@property(readonly, nonatomic) CDUnknownBlockType fromPlistTransform;
@property(readonly, nonatomic) CDUnknownBlockType plistTransform;
- (id)valueWithResetIdentifiers:(id)arg1;
- (id)stringForIndexingForContact:(id)arg1;
- (_Bool)isValidMultiValueValue:(id)arg1 error:(id *)arg2;
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;
- (void)assertValueType:(id)arg1;
- (_Bool)isEqualIgnoringIdentifiersForContact:(id)arg1 other:(id)arg2;
@property(readonly, nonatomic) Class labeledValueClass;
@property(readonly, nonatomic) Class valueClass;
@property(readonly, nonatomic) _Bool isSingleValue;
@property(readonly, nonatomic) _Bool isMultiValue;
- (_Bool)applyDictionary:(id)arg1 identifier:(id)arg2 legacyIdentifier:(int)arg3 label:(id)arg4 toCNMultivalueRepresentation:(id)arg5;
- (_Bool)applyABMultivalueValueBytes:(char *)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6;
- (_Bool)applyCNValue:(id)arg1 toArray:(id)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5;
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)CNMutableValueForABMultivalue;
- (void *)ABMutableMultiValueForABPerson:(void *)arg1;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 gettersByABKeys:(id)arg2;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1 destinationClass:(Class)arg2 settersByABKeys:(id)arg3;
- (struct __CFString *)ABMultiValueLabelFromCNLabeledValueLabel:(id)arg1;
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;
- (id)CNLabeledValueLabelFromABMultiValueLabel:(struct __CFString *)arg1;
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;
- (id)CNValueFromABValue:(void *)arg1;
- (void *)ABValueFromCNValue:(id)arg1;
- (unsigned int)abPropertyType;

@end

