//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSObject;

@interface WBSPerSitePreferenceValue : NSObject
{
    NSString *_localizedString;
    id <NSObject> _tag;
}

+ (id)binaryOffValue;
+ (id)binaryOnValue;
@property(readonly, nonatomic) id <NSObject> tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) NSString *localizedString; // @synthesize localizedString=_localizedString;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTag:(id)arg1 localizedString:(id)arg2;

@end

