//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstallCoordination/IXOpaqueDataPromiseSeed.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface IXPromisedOutOfBandTransferSeed : IXOpaqueDataPromiseSeed <NSSecureCoding, NSCopying>
{
}

+ (_Bool)supportsSecureCoding;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

