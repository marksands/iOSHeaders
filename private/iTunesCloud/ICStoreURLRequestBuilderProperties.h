//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICURLBag, ICUserIdentityProperties;

@interface ICStoreURLRequestBuilderProperties : NSObject
{
    ICUserIdentityProperties *_iCloudIdentityProperties;
    ICURLBag *_URLBag;
    ICUserIdentityProperties *_identityProperties;
    ICUserIdentityProperties *_delegatedIdentityProperties;
}

@property(copy, nonatomic) ICUserIdentityProperties *delegatedIdentityProperties; // @synthesize delegatedIdentityProperties=_delegatedIdentityProperties;
@property(copy, nonatomic) ICUserIdentityProperties *identityProperties; // @synthesize identityProperties=_identityProperties;
@property(retain, nonatomic) ICURLBag *URLBag; // @synthesize URLBag=_URLBag;
@property(copy, nonatomic) ICUserIdentityProperties *iCloudIdentityProperties; // @synthesize iCloudIdentityProperties=_iCloudIdentityProperties;
- (void).cxx_destruct;

@end

