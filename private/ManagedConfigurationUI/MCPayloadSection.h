//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MCPayloadSection : NSObject
{
    NSString *_sectionTitle;
    NSString *_sectionFooter;
    NSMutableArray *_payloadInfos;
}

@property(retain, nonatomic) NSMutableArray *payloadInfos; // @synthesize payloadInfos=_payloadInfos;
@property(retain, nonatomic) NSString *sectionFooter; // @synthesize sectionFooter=_sectionFooter;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void).cxx_destruct;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 payloadInfos:(id)arg3;
- (id)init;

@end

