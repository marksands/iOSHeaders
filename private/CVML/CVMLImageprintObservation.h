//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CVML/CVMLObservation.h>

@class MPImageDescriptor, NSData, NSString, NSUUID;

@interface CVMLImageprintObservation : CVMLObservation
{
    NSUUID *_identifier;
    NSString *_imageprintVersion;
    MPImageDescriptor *_imageprintDescriptor;
    NSString *_imageprintType;
}

+ (id)calculateDistanceBetweenImageprint1:(id)arg1 andImageprint2:(id)arg2;
@property(retain) NSString *imageprintType; // @synthesize imageprintType=_imageprintType;
@property(retain) MPImageDescriptor *imageprintDescriptor; // @synthesize imageprintDescriptor=_imageprintDescriptor;
@property(retain) NSString *imageprintVersion; // @synthesize imageprintVersion=_imageprintVersion;
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)serializeAsVNImageprintStateAndReturnError:(id *)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializedLength;
@property(readonly) NSData *rawImageprintDescriptor;
- (id)initWithRawImageprintDescriptor:(id)arg1;
- (id)isImageprintValid;
- (id)calculateDistanceFromImageprint:(id)arg1;
- (id)calculateDistanceFromImageprintObservation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serialize;
- (id)initWithData:(id)arg1;
- (id)init;

@end

