//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFPunchout-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFUserActivityData;

@interface SFPunchout : NSObject <SFPunchout, NSSecureCoding>
{
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_label;
    NSArray *_urls;
    SFUserActivityData *_userActivityData;
    NSString *_actionTarget;
}

+ (_Bool)supportsSecureCoding;
+ (id)punchoutWithURLs:(id)arg1;
+ (id)punchoutWithURL:(id)arg1;
@property(copy, nonatomic) NSString *actionTarget; // @synthesize actionTarget=_actionTarget;
@property(retain, nonatomic) SFUserActivityData *userActivityData; // @synthesize userActivityData=_userActivityData;
@property(copy, nonatomic) NSArray *urls; // @synthesize urls=_urls;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)canOpenURL:(id)arg1;
- (id)preferredOpenableURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

