//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import "CLSRelationable.h"

@class NSDate, NSString;

@interface CLSTimeInterval : CLSObject <CLSRelationable>
{
    NSDate *_startTime;
    double _length;
}

+ (_Bool)supportsSecureCoding;
+ (id)relations;
@property(nonatomic) double length; // @synthesize length=_length;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
