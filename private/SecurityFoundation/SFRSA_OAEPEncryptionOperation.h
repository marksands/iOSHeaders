//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SecurityFoundation/SFRSAEncryptionOperation.h>

@interface SFRSA_OAEPEncryptionOperation : SFRSAEncryptionOperation
{
    id _oaepEncryptionOperationInternal;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id <SFMaskGenerationFunction> maskGenerationFunction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 maskGenerationFunction:(id)arg2;
- (id)initWithKeySpecifier:(id)arg1;

@end

