//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@interface TRFetchAnisetteDataRequest : TRRequestMessage
{
    _Bool _shouldProvision;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool shouldProvision; // @synthesize shouldProvision=_shouldProvision;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

