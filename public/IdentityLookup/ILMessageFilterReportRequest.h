//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface ILMessageFilterReportRequest : NSObject <NSSecureCoding>
{
    NSString *_sender;
    NSString *_messageBody;
    long long _suggestedAction;
    NSString *_extensionIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
@property(nonatomic) long long suggestedAction; // @synthesize suggestedAction=_suggestedAction;
@property(copy, nonatomic) NSString *messageBody; // @synthesize messageBody=_messageBody;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithExtensionIdentifier:(id)arg1;

@end

