# MS DCF Valuation — Investment Banking Valuation Memo
**Date: 2026-07-16 (Thursday, mid-morning update, chip-sector selloff day two)**

*Persona: VP-level valuation coverage for the "Claude Robinhood Trader" experiment. Coverage this run: (1) NVDA and (2) OMCL — both current holdings/near-holdings, numbers refreshed off the trader's own 09:36 ET live Robinhood quotes rather than rebuilt, per standing practice since nothing material changed in either model; (3) VTI — brief refresh, still not applicable for a DCF; (4) VXUS — new holding as of this morning's $8 buy, first coverage, same "index fund, no DCF" treatment as VTI; (5) GS's current #1 pick (analysts/gs-stock-screener.md, 2026-07-16) is still **OMCL**, unchanged for a thirteenth-plus consecutive cycle — already covered under (2).*

---

## Verdicts (top line)

| Ticker | Current Price | DCF Fair Value (base case) | Verdict |
|---|---|---|---|
| **NVDA** | $208.42 (7/16, 09:36 ET trader live quote) | ~$150.6 (WACC 11%, g 3%) — unchanged model | **OVERVALUED — ~27.7% downside to DCF fair value.** Pulled back ~1.9% off yesterday's $212.50 close on the sector-wide TSMC-earnings selloff, not an NVDA-specific move; gap narrowed slightly on price alone. |
| **OMCL** | $47.60 (7/16, 09:36 ET trader live quote) | ~$56.35 (WACC 9%, g 3%) — unchanged model | **MODESTLY UNDERVALUED — ~18.4% upside to DCF fair value.** Fourth straight session above GS's $42-46 entry zone; margin of safety keeps compressing (25%→21%→18.4% over three trading days) purely on price, not fundamentals. **Tomorrow (7/17) is the trader's own pre-registered time-box for the OMCL macro-veto — see flag below.** |
| **VTI** | $371.33 (7/16, 09:36 ET trader live quote) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** Unchanged from prior reports. |
| **VXUS** | ~$84.04 (7/16, 09:38 ET execution quote $84.00/$84.08) | N/A — no single-company DCF applies | **NOT APPLICABLE / HOLD BY CONSTRUCTION.** New holding this morning; same logic as VTI (Section 4). |

**Bottom line for the trader:** No verdict changes this run. NVDA's downside gap narrowed a touch purely because the stock sold off with the rest of chips — not because the model got more constructive. The one thing this report needs to say loudly: **OMCL's margin of safety has now compressed for three straight trading days while the stock keeps drifting further from GS's entry zone, and tomorrow is the pre-committed decision point.** This valuation desk's job isn't to make that call — it's to make sure whatever call gets made tomorrow is made with an accurate, current number, not the 21% figure from two days ago. At $47.60, the DCF still says undervalued, but by a shrinking margin that a half-size entry (the pre-committed fallback per state.md) would still clear comfortably even if the stock ticks up further before tomorrow's run.

---

## 1. NVIDIA (NVDA) — brief update, model unchanged

### What changed since 7/15
Price pulled back from $212.53 (7/15 close-adjacent) to $208.42 (7/16, 09:36 ET) — a ~1.9% dip driven entirely by the second consecutive day of broad semiconductor selling (TSMC posted record Q2 profit/revenue but fell ~3.8-4% on margin/pricing commentary, dragging the whole chip complex down globally). No NVDA-specific news; no change to the FY2027E-FY2031E revenue/margin build, WACC, or terminal growth assumptions.

### Verdict: **OVERVALUED, gap narrowed slightly on price alone**
Same 5-year build (FY2027E revenue $380B, FCF margin path 56%→48%, WACC 11% base, g 3% base) against today's $208.42 spot:

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 9% | $178.6 | $202.2 | $235.2 |
| 10% | $155.7 | $172.7 | $195.5 |
| **11% (base)** | $137.8 | **$150.6** | $167.1 |
| 12% | $123.6 | $133.4 | $145.8 |
| 13% | $111.9 | $119.7 | $129.2 |

Base case ($150.6) implies **~27.7% downside** from $208.42 — modestly narrower than 7/15's ~28.9% read, entirely a function of the sector pullback rather than any model change. Key breakable assumptions unchanged (margin durability is the upside break; China export policy, Blackwell-Rubin execution, HBM supply bottleneck remain the downside breaks — full writeup via git history, 7/10 report). **Still a hold-for-other-reasons position, not an add**, and today's sector-wide (not NVDA-specific) selloff doesn't clear the "fresh catalyst" bar needed to revisit the existing position either way.

---

## 2. Omnicell (OMCL) — brief update, model unchanged, margin-of-safety flag

### What changed since 7/15
Price moved from $46.51 to $47.60 (+2.3%), the fourth consecutive session above GS's $42-46 entry zone and a new high-water mark for the name in this book. No company-specific news since the 7/14 build: next earnings still 7/30, guidance unchanged. The healthcare-rotation tailwind is now on its sixth day as a sourced narrative.

### Sensitivity table — fair value per share (unchanged)

| WACC \ Terminal g | 2.0% | 3.0% | 4.0% |
|---|---|---|---|
| 7% | $70.30 | $85.26 | $110.19 |
| 8% | $58.30 | $67.90 | $82.31 |
| **9% (base)** | $49.73 | **$56.35** | $65.60 |
| 10% | $43.33 | $48.11 | $54.50 |
| 11% | $38.36 | $41.95 | $46.56 |

### DCF vs. market price
Base case ($56.35) implies **~18.4% upside** from today's $47.60 — down from ~21.2% on 7/15 and ~25% on 7/14, purely on the price move, not a model change. 10 of 15 sensitivity cells still sit at or above spot (down from 11/15 on 7/15) — the model still says undervalued, but the cushion is eroding roughly 3 points every trading day the stock keeps running.

### Verdict: **MODESTLY UNDERVALUED, margin of safety now materially thinner than at any prior check**
The directional call hasn't flipped and isn't close to flipping — even the 9%/2% low-growth cell ($49.73) still clears spot. But the trend is unambiguous: three straight days of compression on an unchanged model means the "cheap" case is doing more work per dollar of price appreciation than it was a week ago. **Direct flag tied to tomorrow's (7/17) time-box**: if the trader executes the pre-committed fallback (a smaller ~$4-5 half-size entry) regardless of which trigger condition is cited, this DCF still clears it comfortably at today's price — the valuation discipline is not the obstacle here, and a half-size entry at $47.60 is not chasing an overvalued name. If OMCL runs meaningfully higher before that decision (e.g., toward $50+), this desk would want to re-run the math before signing off on full-size entry, though a half-size entry would still likely clear even then given the size of the base-case cushion.

### Key assumptions that could break this model (unchanged)
- **Upside break**: back-half FY2026 revenue tracking closer to Q1's +14.9% pace than the guided ~4.2%, with margin expansion continuing at the Q1 rate — plausibly pushes fair value into the $65-85 range.
- **Downside break**: a renewed rate-hike cycle or health-system capex pullback hits bookings before it shows in trailing revenue; the sector-rotation tailwind, while now six days old, still needs to prove durable across a full earnings cycle (7/30).

---

## 3. Vanguard Total Stock Market ETF (VTI) — unchanged, brief refresh only

No change to the standing "not applicable" treatment. VTI holds ~3,600 US equities; there is no discrete cash-flow stream to discount, and building one would just reverse-engineer the market's own implied discount rate — circular, not informative. Price ($371.33) is essentially flat versus 7/15 ($372.71-372.74), down ~0.3% as part of the same broad semis-led pullback hitting NVDA. Substitute lens unchanged: the US total market trades ~22-24x forward earnings vs. a ~17-18x long-run average — a market priced for continued AI-capex earnings growth, vulnerable to multiple compression if that growth disappoints. No view offered on adding to or trimming this position — that's BR's lane, not a DCF call.

---

## 4. Vanguard Total International Stock ETF (VXUS) — new coverage, why no DCF applies

VXUS is the ex-US counterpart to VTI: a ~99%+ non-US total-market index fund spanning several thousand holdings across developed and emerging markets. The same logic that rules out a single-company DCF for VTI applies here, only more so — there is no coherent way to build one 5-year cash-flow projection for an aggregate of Japanese, European, and emerging-market equities with wildly different capital structures, growth rates, and currency exposures. Any attempt would be a fabricated composite, not a real valuation.

**Substitute lens** (directional, not a fair-value point estimate): ex-US developed and emerging markets broadly trade at a persistent discount to US equities on forward earnings — commonly cited in the low-to-mid teens (roughly 13-15x forward) versus VTI's ~22-24x. That gap partly reflects genuinely lower growth in several constituent markets and partly reflects a structural "US premium" for mega-cap tech and AI-capex exposure that VXUS deliberately does not carry. That absence is the point of the position, not a flaw: it's what makes VXUS mechanically insulated from a US-semis-specific selloff (like today's) in a way a second VTI buy would not have been, exactly as GS's 7/16 report flagged in real time.

**Read on the trader's position**: $8 VXUS buy at ~$84.04 (7/16) was a structural allocation decision — BR's 7/15 reprioritization of VXUS ahead of a second VTI buy specifically to avoid worsening BW's corrected look-through Technology concentration (~62.1% blended pre-trade). This report has nothing to add for or against the decision on valuation grounds; a broad, cheap-relative-to-US basket bought for diversification isn't a stock-picking call this desk evaluates the way it evaluates NVDA or OMCL. One caveat: WebSearch data on VXUS's intraday price this cycle showed some inconsistency with the trader's own $84.00-84.08 live Robinhood quote at execution — flagging as a minor data-quality note, not a reason to distrust the trade; the Robinhood-verified execution price is the authoritative figure per this book's standing practice (see state.md's 7/13 cross-analyst data-quality note) of trusting live account quotes over third-party search results when the two disagree.

---

## Cross-check with GS screener (analysts/gs-stock-screener.md, 2026-07-16)
GS still ranks OMCL #1 for a thirteenth-plus consecutive cycle and — same framing as this report — flags today's $47.60 print as compressing the margin of safety further while explicitly raising OMCL's own risk score (5→6) because "the wait itself now carries a real opportunity cost." Full agreement between desks on both the direction and the growing urgency. On NVDA, GS doesn't re-screen it as a new idea; today's TSMC-driven sector selloff is read identically by both desks as sector-wide, not NVDA-specific, so it doesn't clear the bar to revisit the position. GS's OXY (#2) and PTCT (#3) remain outside this report's coverage per the standing one-cycle-old vetting gate — will build a DCF on whichever survives cross-analyst scrutiny into a second cycle. GS's CRWD data-quality flag (conflicting live prices this cycle, partly a stock-split artifact) doesn't affect this report since CRWD isn't yet vetted into MS coverage.

## Explicit read on trader's current positions (NVDA, VTI, VXUS)
**NVDA**: unchanged — DCF does not support adding at $208.42; existing ~$5 notional position isn't worth trading out of on valuation grounds given the "no trade without a fresh catalyst" discipline, and today's dip is sector-wide, not a catalyst specific to the name.
**VTI**: hold, no valuation view — diversified core-sleeve buy, not a DCF call.
**VXUS**: hold, no valuation view — same treatment as VTI, new position as of this morning; no DCF-based case to add or trim.
**OMCL (not yet a position)**: still GS's actionable #1 idea, still valuation-supported (though by a shrinking margin), pending tomorrow's (7/17) time-box decision on the macro-shock veto. This desk's read: a half-size entry at current or modestly higher prices still clears the DCF comfortably; a full-size entry deserves a fresh valuation check if the price keeps running before the decision is made.
