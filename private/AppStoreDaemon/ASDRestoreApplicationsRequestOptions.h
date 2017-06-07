//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions
{
    _Bool _createsPlaceholders;
    _Bool _restoreApplicationData;
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool restoreApplicationData; // @synthesize restoreApplicationData=_restoreApplicationData;
@property(nonatomic) _Bool createsPlaceholders; // @synthesize createsPlaceholders=_createsPlaceholders;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplicationMetadata:(id)arg1;

@end

