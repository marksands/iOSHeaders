//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNPersonsModelFaceModel : NSObject <NSSecureCoding>
{
    NSMapTable *_serialNumberToPersonUniqueIdentifierMapTable;
    shared_ptr_8c39738b _faceIDModel;
    int _maximumElementsPerID;
}

+ (_Bool)supportsSecureCoding;
+ (id)modelBuiltFromConfiguration:(id)arg1 personUniqueIdentifierToSerialNumberMapping:(id)arg2 serialNumberToFaceprintsMapping:(id)arg3 canceller:(id)arg4 error:(id *)arg5;
+ (shared_ptr_099ccdd3)_concatenateFaceprintImageDescriptorBuffer:(shared_ptr_099ccdd3)arg1 withFaceprints:(id)arg2 forIdentityWithSerialNumber:(int)arg3 faceprintLabels:(vector_3203cf93 *)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)personUniqueIdentifiers;
- (unsigned long long)personCount;
- (id)personPredictionsForFace:(id)arg1 withDescriptor:(const struct ImageDescriptorBufferFloat32 *)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id *)arg5;
- (id)_personPredictionsForFace:(id)arg1 withDescriptor:(const struct ImageDescriptorBufferFloat32 *)arg2 limit:(unsigned long long)arg3 faceIDCanceller:(struct CVMLCanceller *)arg4 error:(id *)arg5;
- (id)initWithFaceIDModel:(shared_ptr_8c39738b)arg1 maximumElementsPerID:(unsigned long long)arg2 personUniqueIdentifierToSerialNumberMapping:(id)arg3;

@end

