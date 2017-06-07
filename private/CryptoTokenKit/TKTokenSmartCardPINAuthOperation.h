//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CryptoTokenKit/TKTokenAuthOperation.h>

@class NSData, NSString, TKSmartCard, TKSmartCardPINFormat;

@interface TKTokenSmartCardPINAuthOperation : TKTokenAuthOperation
{
    TKSmartCardPINFormat *_PINFormat;
    NSData *_APDUTemplate;
    long long _PINByteOffset;
    TKSmartCard *_smartCard;
    NSString *_PIN;
    NSString *_localizedDescription;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy) NSString *PIN; // @synthesize PIN=_PIN;
@property(retain) TKSmartCard *smartCard; // @synthesize smartCard=_smartCard;
@property long long PINByteOffset; // @synthesize PINByteOffset=_PINByteOffset;
@property(copy) NSData *APDUTemplate; // @synthesize APDUTemplate=_APDUTemplate;
@property(retain) TKSmartCardPINFormat *PINFormat; // @synthesize PINFormat=_PINFormat;
- (void).cxx_destruct;
- (_Bool)finishWithError:(id *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

