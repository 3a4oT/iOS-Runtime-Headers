/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCMTicketStatusResponse : PBCodable <NSCopying> {
    GEORPDetails * _details;
    struct { 
        unsigned int submissionDate : 1; 
        unsigned int ticketState : 1; 
    }  _has;
    GEORPNotification * _notification;
    double  _submissionDate;
    NSString * _ticketId;
    int  _ticketState;
}

@property (nonatomic, retain) GEORPDetails *details;
@property (nonatomic, readonly) BOOL hasDetails;
@property (nonatomic, readonly) BOOL hasNotification;
@property (nonatomic) BOOL hasSubmissionDate;
@property (nonatomic, readonly) BOOL hasTicketId;
@property (nonatomic) BOOL hasTicketState;
@property (nonatomic, retain) GEORPNotification *notification;
@property (nonatomic) double submissionDate;
@property (nonatomic, retain) NSString *ticketId;
@property (nonatomic) int ticketState;

- (int)StringAsTicketState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (BOOL)hasDetails;
- (BOOL)hasNotification;
- (BOOL)hasSubmissionDate;
- (BOOL)hasTicketId;
- (BOOL)hasTicketState;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)notification;
- (BOOL)readFrom:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasSubmissionDate:(BOOL)arg1;
- (void)setHasTicketState:(BOOL)arg1;
- (void)setNotification:(id)arg1;
- (void)setSubmissionDate:(double)arg1;
- (void)setTicketId:(id)arg1;
- (void)setTicketState:(int)arg1;
- (double)submissionDate;
- (id)ticketId;
- (int)ticketState;
- (id)ticketStateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
