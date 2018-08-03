//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INImage.h>

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface _INURLImage : INImage
{
    NSData *_sandboxExtensionData;
    NSURL *_imageURL;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic, setter=_setSandboxExtensionData:) NSData *_sandboxExtensionData; // @synthesize _sandboxExtensionData;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_isSupportedForDonation;
- (_Bool)_isEligibleForProxying;
- (id)_initWithURLRepresentation:(id)arg1;
- (id)_URLRepresentation;
- (void)_setUri:(id)arg1;
- (id)_copyWithSubclass:(Class)arg1;
- (_Bool)_requiresRetrieval;
- (id)_identifier;
- (id)_dictionaryRepresentation;
- (id)initWithImageURL:(id)arg1;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

