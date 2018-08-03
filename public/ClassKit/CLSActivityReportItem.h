//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSReportItem.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CLSActivityReportItem : CLSReportItem <NSSecureCoding, NSCopying>
{
    NSString *_title;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

