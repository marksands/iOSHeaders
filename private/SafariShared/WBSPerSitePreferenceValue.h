//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

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
