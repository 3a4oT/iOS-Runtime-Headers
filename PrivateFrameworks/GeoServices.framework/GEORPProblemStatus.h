/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORPResolution, NSString;

@interface GEORPProblemStatus : PBCodable <NSCopying> {
    struct { 
        unsigned int creationDate : 1; 
        unsigned int problemState : 1; 
    double _creationDate;
    } _has;
    NSString *_problemID;
    GEORPResolution *_problemResolution;
    int _problemState;
}

@property double creationDate;
@property BOOL hasCreationDate;
@property(readonly) BOOL hasProblemID;
@property(readonly) BOOL hasProblemResolution;
@property BOOL hasProblemState;
@property(retain) NSString * problemID;
@property(retain) GEORPResolution * problemResolution;
@property int problemState;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCreationDate;
- (BOOL)hasProblemID;
- (BOOL)hasProblemResolution;
- (BOOL)hasProblemState;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)problemID;
- (id)problemResolution;
- (int)problemState;
- (BOOL)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setHasCreationDate:(BOOL)arg1;
- (void)setHasProblemState:(BOOL)arg1;
- (void)setProblemID:(id)arg1;
- (void)setProblemResolution:(id)arg1;
- (void)setProblemState:(int)arg1;
- (void)writeTo:(id)arg1;

@end